#pragma once

#include <QWidget>
#include "ui_History.h"

class History : public QWidget
{
	Q_OBJECT

public:
	History(QWidget *parent = nullptr);
	~History();

private:
	Ui::HistoryClass ui;
protected:
	virtual void showEvent(QShowEvent* event) override;//execute when the window of history is displayed
};
