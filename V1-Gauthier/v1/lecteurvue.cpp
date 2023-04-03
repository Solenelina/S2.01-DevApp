#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    QObject::connect(ui, SIGNAL(clicked()),
                     this, SLOT(suivant()));
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

void LecteurVue::DemarrerDiapo()
{
    qDebug()<<"Je démarre le diaporama" << Qt::endl;
}

void LecteurVue::ArreterDiapo()
{
    qDebug()<<"J'arrete le diaporama" << Qt::endl;
}
