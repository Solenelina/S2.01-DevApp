#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    QObject::connect(ui->bSuivant , SIGNAL(clicked()),
                     this, SLOT(suivant()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()),
                     this, SLOT(precedent()));
    QObject::connect(ui->bLancerDiapo, SIGNAL(clicked()),
                     this, SLOT(demarrerDiapo()));
    QObject::connect(ui->bArreterDiapo, SIGNAL(clicked()),
                     this, SLOT(arreterDiapo()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::suivant()
{
    qDebug() << "J'affiche l'image suivant" << Qt::endl;
}

void LecteurVue::precedent()
{
    qDebug() << "J'affiche l'image précédente" << Qt::endl;
}

void LecteurVue::demarrerDiapo()
{
    qDebug()<<"Je démarre le diaporama" << Qt::endl;
}

void LecteurVue::arreterDiapo()
{
    qDebug()<<"J'arrete le diaporama" << Qt::endl;
}
