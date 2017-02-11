#ifndef OCRFORREAD_H
#define OCRFORREAD_H

#include <QtWidgets/QMainWindow>
#include <QMainWindow>  
#include <QCamera>  
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;
#include <QCamera>  
#include <QCameraViewfinder>  
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QFileDialog> 
#include "ui_ocrforread.h"
#include <QTimer>     // ���òɼ����ݵļ��ʱ�� 
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio.hpp> // for camera
using namespace cv;
//class QCamera;
//class QCameraViewfinder;
//class QCameraImageCapture;

class OCRForRead : public QMainWindow
{
	Q_OBJECT

public:
	OCRForRead(QWidget *parent = 0);
	~OCRForRead();

private:
	Ui::OCRForReadClass ui;
	// ϵͳ�����豸������ͷ��  
	QCamera *camera;
	// ����ȡ��������  
	QCameraViewfinder *cameraViewFinder;
	// ��ͼ����  
	QCameraImageCapture *cameraImageCapture;
private slots:
	void captureBtnResponded();
	void saveBtnResponded();
	void exitBtnResponded();
	void cameraImageCaptured(int id, QImage image);



};


#endif // OCRFORREAD_H
