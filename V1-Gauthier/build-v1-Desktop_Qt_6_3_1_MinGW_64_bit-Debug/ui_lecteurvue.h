/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionQuitter;
    QAction *actionAProposDe;
    QAction *actionVitesseDeDefilement;
    QAction *actionEnleverLeDiaporama;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QSpacerItem *verticalSpacer;
    QLabel *lTitrePhoto;
    QLabel *lCategorie;
    QTextBrowser *AffichageTextePhoto;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bLancerDiapo;
    QPushButton *bArreterDiapo;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(800, 602);
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAProposDe = new QAction(LecteurVue);
        actionAProposDe->setObjectName(QString::fromUtf8("actionAProposDe"));
        actionVitesseDeDefilement = new QAction(LecteurVue);
        actionVitesseDeDefilement->setObjectName(QString::fromUtf8("actionVitesseDeDefilement"));
        actionEnleverLeDiaporama = new QAction(LecteurVue);
        actionEnleverLeDiaporama->setObjectName(QString::fromUtf8("actionEnleverLeDiaporama"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lTitrePhoto = new QLabel(centralwidget);
        lTitrePhoto->setObjectName(QString::fromUtf8("lTitrePhoto"));
        lTitrePhoto->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lTitrePhoto);

        lCategorie = new QLabel(centralwidget);
        lCategorie->setObjectName(QString::fromUtf8("lCategorie"));
        lCategorie->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lCategorie);

        AffichageTextePhoto = new QTextBrowser(centralwidget);
        AffichageTextePhoto->setObjectName(QString::fromUtf8("AffichageTextePhoto"));

        verticalLayout->addWidget(AffichageTextePhoto);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName(QString::fromUtf8("bLancerDiapo"));

        horizontalLayout_2->addWidget(bLancerDiapo);

        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName(QString::fromUtf8("bArreterDiapo"));

        horizontalLayout_2->addWidget(bArreterDiapo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));

        horizontalLayout_2->addWidget(bPrecedent);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));

        horizontalLayout_2->addWidget(bSuivant);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 1);

        horizontalLayout_3->addLayout(horizontalLayout);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionVitesseDeDefilement);
        menuParam_tres->addAction(actionEnleverLeDiaporama);
        menuAide->addAction(actionAProposDe);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        actionAProposDe->setText(QCoreApplication::translate("LecteurVue", "\303\200 propos de...", nullptr));
        actionVitesseDeDefilement->setText(QCoreApplication::translate("LecteurVue", "Vitesse de d\303\251filement", nullptr));
        actionEnleverLeDiaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever le diaporama", nullptr));
        lTitrePhoto->setText(QCoreApplication::translate("LecteurVue", "Titre de l'image", nullptr));
        lCategorie->setText(QCoreApplication::translate("LecteurVue", "#Cat\303\251gorie", nullptr));
        AffichageTextePhoto->setHtml(QCoreApplication::translate("LecteurVue", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lorem ipsum </p></body></html>", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("LecteurVue", "LancerDiaporama", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter Diaporama", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
