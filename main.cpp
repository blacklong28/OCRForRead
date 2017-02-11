#include "ocrforread.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OCRForRead w;
	w.show();
	return a.exec();
}
