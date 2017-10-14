#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<chrono>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}
void MainWindow::showImage(Mat inSrc)
{
    QImage img;
    Mat src = inSrc.clone();
    cv::resize(src,src,Size(640,480));
    cvtColor(src,src,CV_BGR2RGB);
    if(src.channels()==1)
    {
        img = QImage(src.data,src.cols,src.rows,src.cols,QImage::Format_Indexed8);
    }
    else if(src.channels()==3)
    {
        img = QImage(src.data,src.cols,src.rows,src.cols*3,QImage::Format_RGB888);
    }
    ui->label->setPixmap(QPixmap::fromImage(img));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_trainBtn_clicked()
{
    colorHist.trainSVM();
//    surfFeature.trainSVM();
}

void MainWindow::on_openBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)"));
   if(path.length() == 0) {
           QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
           return;
   }
   setWindowTitle(path);
   Mat src = imread(path.toStdString());
   if(src.empty())
   {
       printf("src.empty() fail..\n");
       return  ;
   }
   showImage(src);

   if(ui->radioButton_136->isChecked())
   {
       colorHist.getDetails(src.clone());
       mjDlg.imgE = colorHist.imgE;
       mjDlg.imgW = colorHist.imgW;
       mjDlg.imgN = colorHist.imgN;
       mjDlg.imgS = colorHist.imgS;
   }
   else if(ui->radioButton_152->isChecked())
   {
       colorHist.getDetails_152(src.clone());
       mjDlg152.imgE = colorHist.imgE;
       mjDlg152.imgW = colorHist.imgW;
       mjDlg152.imgN = colorHist.imgN;
       mjDlg152.imgS = colorHist.imgS;
   }
}

void MainWindow::on_loadModelBtn_clicked()
{
    ///home/cty/workspace/majiang/majiang_case/build/svm_model.xml
    colorHist.loadModel(QString("E:/caoXinHua/majiang20171008/maJiangProj/build/svm_model.xml"));
//    colorHist.loadModel(QString("/home/cty/workspace/majiang/majiang_case/build/svm_model.xml"));

}

void MainWindow::on_predictBtn_clicked()
{

    double time_Start = (double)clock();
    if(ui->radioButton_136->isChecked())
    {
        colorHist.getPredictResult(mjDlg.imgE,mjDlg.labelE);
        colorHist.getPredictResult(mjDlg.imgW,mjDlg.labelW);
        colorHist.getPredictResult(mjDlg.imgN,mjDlg.labelN);
        colorHist.getPredictResult(mjDlg.imgS,mjDlg.labelS);
        mjDlg.show();
        mjDlg.showImageMj();
    }
    else if(ui->radioButton_152->isChecked())
    {
        colorHist.getPredictResult(mjDlg152.imgE,mjDlg152.labelE);
        colorHist.getPredictResult(mjDlg152.imgW,mjDlg152.labelW);
        colorHist.getPredictResult(mjDlg152.imgN,mjDlg152.labelN);
        colorHist.getPredictResult(mjDlg152.imgS,mjDlg152.labelS);
        mjDlg152.show();
        mjDlg152.showImageMj();
    }
    double time_End = (double)clock();
    printf("cast time: %lf ms\n",(time_End - time_Start)/*/1000.0*/);

    fflush(NULL);
}
