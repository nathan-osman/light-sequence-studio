/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Nathan Osman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 **/

#include <QCloseEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>

#include "config.h"
#include "mainwindow.h"

MainWindow::MainWindow()
{
    initMenu();
    statusBar()->showMessage(tr("Version %1").arg(PROJECT_VERSION));

    setWindowTitle(tr("Light Sequence Studio"));
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (QMessageBox::question(this, tr("Confirm"), tr("Are you sure you want to quit?")) == QMessageBox::Yes) {
        event->accept();
    } else {
        event->ignore();
    }
}

void MainWindow::newSequence() {
    //...
}

void MainWindow::openSequence() {
    //...
}

void MainWindow::saveSequence() {
    //...
}

void MainWindow::saveSequenceAs() {
    //...
}

void MainWindow::showAbout() {
    QMessageBox::about(this, tr("About Light Sequence Studio"),
                       tr("Copyright 2015 - Nathan Osman"));
}

void MainWindow::initMenu()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(tr("&New"), this, SLOT(newSequence()));
    fileMenu->addAction(tr("&Open..."), this, SLOT(openSequence()));
    fileMenu->addAction(tr("&Save"), this, SLOT(saveSequence()));
    fileMenu->addAction(tr("Save &As..."), this, SLOT(saveSequenceAs()));
    fileMenu->addSeparator();
    fileMenu->addAction(tr("&Quit"), this, SLOT(close()));

    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(tr("&About"), this, SLOT(showAbout()));
}
