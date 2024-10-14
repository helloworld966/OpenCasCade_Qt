/********************************************************************************
** Form generated from reading UI file 'OpenCasCade.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCASCADE_H
#define UI_OPENCASCADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCasCadeClass
{
public:
    QAction *actionreadIGS;
    QAction *actionreadSTEP;
    QAction *actionExit;
    QAction *actionZoom;
    QAction *actionPan;
    QAction *actionRotate;
    QAction *actionReset;
    QAction *actionFitAll;
    QAction *actionMesh;
    QAction *actionBox;
    QAction *actionCone;
    QAction *actionSphere;
    QAction *actionCylinder;
    QAction *actionTorus;
    QAction *actionFillet;
    QAction *actionChamfer;
    QAction *actionExtrude;
    QAction *actionRevolve;
    QAction *actionLoft;
    QAction *actionCut;
    QAction *actionFuse;
    QAction *actionCommon;
    QAction *actionAbout;
    QAction *actionHelix;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuPrimitive;
    QMenu *menuModeling;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCasCadeClass)
    {
        if (OpenCasCadeClass->objectName().isEmpty())
            OpenCasCadeClass->setObjectName(QString::fromUtf8("OpenCasCadeClass"));
        OpenCasCadeClass->resize(1026, 746);
        actionreadIGS = new QAction(OpenCasCadeClass);
        actionreadIGS->setObjectName(QString::fromUtf8("actionreadIGS"));
        actionreadSTEP = new QAction(OpenCasCadeClass);
        actionreadSTEP->setObjectName(QString::fromUtf8("actionreadSTEP"));
        actionExit = new QAction(OpenCasCadeClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionZoom = new QAction(OpenCasCadeClass);
        actionZoom->setObjectName(QString::fromUtf8("actionZoom"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/OpenCasCade/Resources/Zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom->setIcon(icon);
        actionPan = new QAction(OpenCasCadeClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/OpenCasCade/Resources/Pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon1);
        actionRotate = new QAction(OpenCasCadeClass);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/OpenCasCade/Resources/Rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon2);
        actionReset = new QAction(OpenCasCadeClass);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionFitAll = new QAction(OpenCasCadeClass);
        actionFitAll->setObjectName(QString::fromUtf8("actionFitAll"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/OpenCasCade/Resources/FitAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFitAll->setIcon(icon3);
        actionMesh = new QAction(OpenCasCadeClass);
        actionMesh->setObjectName(QString::fromUtf8("actionMesh"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/OpenCasCade/Resources/mesh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMesh->setIcon(icon4);
        actionBox = new QAction(OpenCasCadeClass);
        actionBox->setObjectName(QString::fromUtf8("actionBox"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/OpenCasCade/Resources/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBox->setIcon(icon5);
        actionCone = new QAction(OpenCasCadeClass);
        actionCone->setObjectName(QString::fromUtf8("actionCone"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/OpenCasCade/Resources/cone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCone->setIcon(icon6);
        actionSphere = new QAction(OpenCasCadeClass);
        actionSphere->setObjectName(QString::fromUtf8("actionSphere"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/OpenCasCade/Resources/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSphere->setIcon(icon7);
        actionCylinder = new QAction(OpenCasCadeClass);
        actionCylinder->setObjectName(QString::fromUtf8("actionCylinder"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/OpenCasCade/Resources/cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCylinder->setIcon(icon8);
        actionTorus = new QAction(OpenCasCadeClass);
        actionTorus->setObjectName(QString::fromUtf8("actionTorus"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/OpenCasCade/Resources/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTorus->setIcon(icon9);
        actionFillet = new QAction(OpenCasCadeClass);
        actionFillet->setObjectName(QString::fromUtf8("actionFillet"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/OpenCasCade/Resources/fillet.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillet->setIcon(icon10);
        actionChamfer = new QAction(OpenCasCadeClass);
        actionChamfer->setObjectName(QString::fromUtf8("actionChamfer"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/OpenCasCade/Resources/chamfer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChamfer->setIcon(icon11);
        actionExtrude = new QAction(OpenCasCadeClass);
        actionExtrude->setObjectName(QString::fromUtf8("actionExtrude"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/OpenCasCade/Resources/extrude.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtrude->setIcon(icon12);
        actionRevolve = new QAction(OpenCasCadeClass);
        actionRevolve->setObjectName(QString::fromUtf8("actionRevolve"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/OpenCasCade/Resources/revolve.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRevolve->setIcon(icon13);
        actionLoft = new QAction(OpenCasCadeClass);
        actionLoft->setObjectName(QString::fromUtf8("actionLoft"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/OpenCasCade/Resources/loft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoft->setIcon(icon14);
        actionCut = new QAction(OpenCasCadeClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/OpenCasCade/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon15);
        actionFuse = new QAction(OpenCasCadeClass);
        actionFuse->setObjectName(QString::fromUtf8("actionFuse"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/OpenCasCade/Resources/fuse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFuse->setIcon(icon16);
        actionCommon = new QAction(OpenCasCadeClass);
        actionCommon->setObjectName(QString::fromUtf8("actionCommon"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/OpenCasCade/Resources/common.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCommon->setIcon(icon17);
        actionAbout = new QAction(OpenCasCadeClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/OpenCasCade/Resources/lamp.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon18);
        actionHelix = new QAction(OpenCasCadeClass);
        actionHelix->setObjectName(QString::fromUtf8("actionHelix"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/OpenCasCade/Resources/helix.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelix->setIcon(icon19);
        centralWidget = new QWidget(OpenCasCadeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 1031, 691));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        OpenCasCadeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCasCadeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1026, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuPrimitive = new QMenu(menuBar);
        menuPrimitive->setObjectName(QString::fromUtf8("menuPrimitive"));
        menuModeling = new QMenu(menuBar);
        menuModeling->setObjectName(QString::fromUtf8("menuModeling"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        OpenCasCadeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenCasCadeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpenCasCadeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenCasCadeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OpenCasCadeClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuPrimitive->menuAction());
        menuBar->addAction(menuModeling->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionreadIGS);
        menuFile->addAction(actionreadSTEP);
        menuFile->addAction(actionExit);
        menuView->addAction(actionZoom);
        menuView->addAction(actionPan);
        menuView->addAction(actionRotate);
        menuView->addAction(actionReset);
        menuView->addAction(actionFitAll);
        menuView->addAction(actionMesh);
        menuPrimitive->addAction(actionBox);
        menuPrimitive->addAction(actionCone);
        menuPrimitive->addAction(actionSphere);
        menuPrimitive->addAction(actionCylinder);
        menuPrimitive->addAction(actionTorus);
        menuModeling->addAction(actionFillet);
        menuModeling->addAction(actionChamfer);
        menuModeling->addAction(actionExtrude);
        menuModeling->addAction(actionRevolve);
        menuModeling->addAction(actionLoft);
        menuModeling->addAction(actionCut);
        menuModeling->addAction(actionFuse);
        menuModeling->addAction(actionCommon);
        menuModeling->addAction(actionHelix);
        menuHelp->addAction(actionAbout);

        retranslateUi(OpenCasCadeClass);

        QMetaObject::connectSlotsByName(OpenCasCadeClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCasCadeClass)
    {
        OpenCasCadeClass->setWindowTitle(QCoreApplication::translate("OpenCasCadeClass", "OpenCasCade", nullptr));
        actionreadIGS->setText(QCoreApplication::translate("OpenCasCadeClass", "readIGS", nullptr));
        actionreadSTEP->setText(QCoreApplication::translate("OpenCasCadeClass", "readSTEP", nullptr));
        actionExit->setText(QCoreApplication::translate("OpenCasCadeClass", "Exit", nullptr));
        actionZoom->setText(QCoreApplication::translate("OpenCasCadeClass", "Zoom", nullptr));
        actionPan->setText(QCoreApplication::translate("OpenCasCadeClass", "Pan", nullptr));
#if QT_CONFIG(tooltip)
        actionPan->setToolTip(QCoreApplication::translate("OpenCasCadeClass", "Pan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRotate->setText(QCoreApplication::translate("OpenCasCadeClass", "Rotate", nullptr));
        actionReset->setText(QCoreApplication::translate("OpenCasCadeClass", "Reset", nullptr));
        actionFitAll->setText(QCoreApplication::translate("OpenCasCadeClass", "FitAll", nullptr));
        actionMesh->setText(QCoreApplication::translate("OpenCasCadeClass", "Mesh", nullptr));
        actionBox->setText(QCoreApplication::translate("OpenCasCadeClass", "Box", nullptr));
        actionCone->setText(QCoreApplication::translate("OpenCasCadeClass", "Cone", nullptr));
        actionSphere->setText(QCoreApplication::translate("OpenCasCadeClass", "Sphere", nullptr));
        actionCylinder->setText(QCoreApplication::translate("OpenCasCadeClass", "Cylinder", nullptr));
        actionTorus->setText(QCoreApplication::translate("OpenCasCadeClass", "Torus", nullptr));
        actionFillet->setText(QCoreApplication::translate("OpenCasCadeClass", "Fillet", nullptr));
        actionChamfer->setText(QCoreApplication::translate("OpenCasCadeClass", "Chamfer", nullptr));
        actionExtrude->setText(QCoreApplication::translate("OpenCasCadeClass", "Extrude", nullptr));
        actionRevolve->setText(QCoreApplication::translate("OpenCasCadeClass", "Revolve", nullptr));
        actionLoft->setText(QCoreApplication::translate("OpenCasCadeClass", "Loft", nullptr));
        actionCut->setText(QCoreApplication::translate("OpenCasCadeClass", "Cut", nullptr));
        actionFuse->setText(QCoreApplication::translate("OpenCasCadeClass", "Fuse", nullptr));
        actionCommon->setText(QCoreApplication::translate("OpenCasCadeClass", "Common", nullptr));
        actionAbout->setText(QCoreApplication::translate("OpenCasCadeClass", "About", nullptr));
        actionHelix->setText(QCoreApplication::translate("OpenCasCadeClass", "Helix", nullptr));
        menuFile->setTitle(QCoreApplication::translate("OpenCasCadeClass", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("OpenCasCadeClass", "View", nullptr));
        menuPrimitive->setTitle(QCoreApplication::translate("OpenCasCadeClass", "Primitive", nullptr));
        menuModeling->setTitle(QCoreApplication::translate("OpenCasCadeClass", "Modeling", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("OpenCasCadeClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenCasCadeClass: public Ui_OpenCasCadeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCASCADE_H
