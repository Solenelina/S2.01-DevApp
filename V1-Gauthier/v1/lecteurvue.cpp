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
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()),
                     this, SLOT(fermerFenetre()));
    QObject::connect(ui->actionAProposDe, SIGNAL(triggered()),
                     this, SLOT(aProposDe()));
    QObject::connect(ui->actionEnleverLeDiaporama, SIGNAL(triggered()),
                     this, SLOT(enleverDiapo()));
    QObject::connect(ui->actionVitesseDeDefilement, SIGNAL(triggered()),
                     this, SLOT(vitesseDefilement()));

    // Affichage d'un message dans la barre de statut
    ui->statusbar->showMessage("Test");
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

void LecteurVue::fermerFenetre()
{
    qDebug() <<"Je ferme la fenêtre" << Qt::endl;
}

void LecteurVue::aProposDe()
{
    qDebug()<<"J'affiche les informations de l'application" << Qt::endl;
}

void LecteurVue::vitesseDefilement()
{
    qDebug() << "Je modifie la vitesse de défilement du diaporama" << Qt::endl;
}

void LecteurVue::enleverDiapo()
{
    qDebug() << "J'enlève le diaporama" << Qt::endl;
}
