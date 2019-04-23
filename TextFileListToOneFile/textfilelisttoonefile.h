#ifndef TEXTFILELISTTOONEFILE_H
#define TEXTFILELISTTOONEFILE_H

#include <QtWidgets/QMainWindow>
#include "ui_textfilelisttoonefile.h"

class TextFileListToOneFile : public QMainWindow
{
	Q_OBJECT

public:
	TextFileListToOneFile(QWidget *parent = 0);
	~TextFileListToOneFile();

private:
	Ui::TextFileListToOneFileClass ui;
};

#endif // TEXTFILELISTTOONEFILE_H
