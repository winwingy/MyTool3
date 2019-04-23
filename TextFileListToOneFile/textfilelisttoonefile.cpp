#include "textfilelisttoonefile.h"

TextFileListToOneFile::TextFileListToOneFile(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.m_pushButtonBegin, &QPushButton::clicked, [this]()
	{

	});
}

TextFileListToOneFile::~TextFileListToOneFile()
{

}
