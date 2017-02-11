#include "ocrforread.h"

OCRForRead::OCRForRead(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowState(Qt::WindowMaximized);//初始化窗口最大化
	//camera = new QCamera();
	qDebug() << tr("debug");
	QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
	foreach(const QCameraInfo &cameraInfo, cameras) {
		qDebug() << cameraInfo.deviceName();
		qDebug() << "The camera sensor orientation is " << cameraInfo.orientation() << " degrees.";
		if (cameraInfo.deviceName() == "@device:pnp:\\\\?\\usb#vid_2b7e&pid_505a&mi_00#6&57bef4d&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\\global") {
			camera = new QCamera(cameraInfo);
		}
	}
	cameraViewFinder = new QCameraViewfinder();
	cameraImageCapture = new QCameraImageCapture(camera);
	connect(ui.pushButton_browse, SIGNAL(clicked()), this, SLOT(captureBtnResponded()));
	connect(ui.pushButton_start, SIGNAL(clicked()), this, SLOT(saveBtnResponded()));
	connect(ui.pushButton_stop, SIGNAL(clicked()), this, SLOT(exitBtnResponded()));
	connect(cameraImageCapture, SIGNAL(imageCaptured(int, QImage)), this, SLOT(cameraImageCaptured(int, QImage)));
	cameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
	camera->setCaptureMode(QCamera::CaptureStillImage);
	camera->setViewfinder(cameraViewFinder);
	camera->start();
}

OCRForRead::~OCRForRead()
{

}
void OCRForRead::captureBtnResponded()
{

		cameraImageCapture->capture();
		//Sleep(2000);

}

void OCRForRead::saveBtnResponded()
{
	const QPixmap *pixmap = ui.labelshow->pixmap();
	if (pixmap) { pixmap->save("D:/workspace/Qt_Project/test/camera/a.jpg"); }
}

void OCRForRead::exitBtnResponded()
{
	camera->stop();
	this->close();
}

void OCRForRead::cameraImageCaptured(int id, QImage image)
{
	ui.labelshow->setPixmap(QPixmap::fromImage(image));
}