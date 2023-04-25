#include "lecteurvue.h"
#include "lecteur.h"
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
    close();
}

void LecteurVue::aProposDe()
{
    qDebug()<<"J'affiche les informations de l'application" << Qt::endl;
    QMessageBox::information(this,"A propos de", "Version : 2.0\nDate de création : 25/04/2023\nAuteurs : Gauthier GOUMEAUX, Solène MARTIN, Anthony HERRMANN");
}

void LecteurVue::vitesseDefilement()
{
    qDebug() << "Je modifie la vitesse de défilement du diaporama" << Qt::endl;
}

void LecteurVue::enleverDiapo()
{
    qDebug() << "J'enlève le diaporama" << Qt::endl;
}

/* ==========================
 *  Fonctionnalité de lecteur
 *  =========================*/

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    if ((*this)._posImageCourante >= nbImages()-1)
    {
        (*this)._posImageCourante = 0;
    }
    else if (nbImages() > 0)
    {
        (*this)._posImageCourante = (*this)._posImageCourante + 1;
    }
}

void Lecteur::reculer()
{
    if ((*this)._posImageCourante <= 0)
    {
        (*this)._posImageCourante = nbImages()-1;
    }
    else
    {
        (*this)._posImageCourante = (*this)._posImageCourante - 1;
    }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "C:\\cartesDisney\\carteDisney2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "C:\\cartesDisney\\carteDisney4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);


     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    Image* img;
    for (unsigned int i = 0; i < nbImages()-1; i++) {
        for (unsigned int j = 0; j < nbImages()-i-1; j++) {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang()){
                img = _diaporama[j];
                _diaporama[j]=_diaporama[j+1];
                _diaporama[j+1]=img;
            }
        }
    }
     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
     // affiche les information sur le lecteur :
     if (numDiaporamaCourant() != 0)
     {
         cout << "Numero diapo : " << numDiaporamaCourant() << endl;
         if (numDiaporamaCourant() > 0)
         {
             _diaporama[_posImageCourante]->Image::afficher();
         }
     }
     else
     {
         cout << "Diaporama Vide" << endl;
     }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    return _diaporama[_posImageCourante];
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
