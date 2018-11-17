#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include "Playlist.h"
#include "Radio.h"
#include "Artist.h"
#include "Song.h"


int main() {
    int respU = -1;
    int resp;
    vector<Radio *> allRadios;
    vector<Song *> allSongs;
    vector<Artist *> allArtists;
    vector<Playlist *> allPlaylist;
    Song *song;
    Artist *artist;
    bool playing = false;
    while (respU == -1) {

        if (playing) {
            song->addRep();
            artist->addRep();
            cout << "[NOW PLAYING " << song->getName() << " ]" << endl;
        }
        cout << endl << "MENÚ:" << endl << endl <<
             "[1] Seleccionar canción." << endl << endl <<
             "[2] Crear canción." << endl <<
             "[3] Crear artista." << endl <<
             "[4] Crear playlist" << endl <<
             "[5] Crear radio." << endl << endl <<
             "[6] Mostrar radio." << endl <<
             "[7] Mostrar playlists." << endl <<
             "[8] Mostrar canción & artista más reproducida." << endl <<
             "[9] Agregar canción a playlist." << endl << endl <<
             "[0] Salir." << endl << endl <<
             "Ingrese el número correspondiente a su opción: ";
        cin >> resp;
        if (resp == 1) {
            int s = 0;
            if (allSongs.size() <= 0) {
                cout << "No hay canciones en su librería." << endl;
            } else {
                for (int i = 0; i < allSongs.size(); ++i) {
                    cout << i + 1 << ". " << allSongs.at(i)->getName() << endl;
                }
                cout << "Ingrese el número correspondiente a su selección: ";
                cin >> s;
                song = allSongs.at(s - 1);
                playing = true;
                cout << "[NOW PLAYING " << song->getName() << " ]" << endl;
                respU = -1;
            }
        } else if (resp == 2) {
            if (allArtists.size() <= 0) {
                cout<<"No hay artistas. ¡Crea primero un artista para poder agregar una canción!"<<endl;
            } else {
                string name, genre;
                int dur;
                cout << "Ingrese el nombre de la canción: ";
                cin >> name;
                cout << endl << "Ingrese el género de la canción: ";
                cin >> genre;
                cout << endl << "Ingrese la duración en segundos de la canción: ";
                cin >> dur;
                int index = 0;
                cout << endl << "Artistas disponibles: " << endl;
                for (int i = 0; i < allArtists.size(); ++i) {
                    cout << i + 1 << ". " << allArtists.at(i)->getName() << endl;
                }
                cout << "Ingrese el número correspondiente a su selección: ";
                cin >> index;
                Song *temp = new Song(name, dur, genre, 0);
                allArtists.at(index - 1)->addSongs(temp);
                allSongs.push_back(temp);
                if (allRadios.size() > 0) {
                    for (auto &allRadio : allRadios) {
                        if (allRadio->getGenre() == genre) {
                            allRadio->addSongs(temp);
                        }
                    }
                }
                cout << endl << "¡Canción creada exitósamente!";
                delete temp;
            }
        } else if (resp == 3) {
            string name;
            cout << "Ingrese el nombre del artista: ";
            cin >> name;
            vector<Song *> Songs;
            if (allArtists.size() > 0) {
                for (int i = 0; i < allArtists.size(); ++i) {
                    if (name == allArtists.at(i)->getName()) {
                        cout << endl << "El artista ya está creado." << endl;
                        break;
                    } else if (i = allArtists.size() - 1) {
                        allArtists.push_back(new Artist(name, 0, Songs));
                        cout << "¡Artista creado exitósamente!";
                    }
                }
            } else {
                allArtists.push_back(new Artist(name, 0, Songs));
                cout << "¡Artista creado exitósamente!";
            }
        } else if (resp == 4) {
            string name, desc;
            vector<Song *> Songs;
            cout << "Ingrese el nombre de la playlist: ";
            cin >> name;
            cout << "Ingrese la descripción de la playlist: ";
            cin >> desc;
            allPlaylist.push_back(new Playlist(name, desc, Songs));
            cout << endl << "¡Playlist creada exitósamente!";
        } else if (resp == 5) {
            string name, genre;
            vector<Song *> Songs;
            cout << "Ingrese el nombre de la radio: ";
            cin >> name;
            cout << "Ingrese el género de la radio: ";
            cin >> genre;
            allRadios.push_back(new Radio(name, genre, Songs));
            cout << endl << "¡Radio creada exitósamente!";
        } else if (resp == 6) {
            for (int i = 0; i < allRadios.size(); ++i) {
                cout << i + 1 << ". " << allRadios.at(i)->getName() << endl << "    " << "Duración total: "
                     << allRadios.at(i)->getDurationT() << endl;
                cout << "     " << "CANCIONES:" << endl;
                for (int j = 0; j < allRadios.at(i)->getSongs().size(); ++j) {
                    cout << "     " << j << ". " << allRadios.at(i)->getSongs().at(j)->getName() << endl;
                }
            }
        } else if (resp == 7) {
            for (int i = 0; i < allPlaylist.size(); ++i) {
                cout << i + 1 << ". " << allPlaylist.at(i)->getName() << endl << "    " << "Duración total: "
                     << allPlaylist.at(i)->getDurationT() << endl;
                cout << "     " << "CANCIONES:" << endl;
                for (int j = 0; j < allPlaylist.at(i)->getSongs().size(); ++j) {
                    cout << "     " << j << ". " << allPlaylist.at(i)->getSongs().at(j)->getName() << endl;
                }
            }
        } else if (resp == 8) {
            int repmax = 0;
            Song *temp;
            for (int i = 0; i < allSongs.size(); ++i) {
                if (repmax <= allSongs.at(i)->getRep()) {
                    temp = allSongs.at(i);
                    repmax = temp->getRep();
                }
            }
            int repmaxA = 0;
            Artist *tempA;
            for (int i = 0; i < allArtists.size(); ++i) {
                if (repmaxA <= allArtists.at(i)->getRep()) {
                    tempA = allArtists.at(i);
                    repmaxA = tempA->getRep();
                }
            }
            cout << endl << "Canción más reproducida: " << temp->getName() << endl << "Artista más reproducido: "
                 << tempA->getName() << endl << endl;
        } else if (resp == 9) {
            int play, song;
            Song *S;
            Playlist *P;
            cout << endl;
            for (int i = 0; i < allPlaylist.size(); ++i) {
                cout << i + 1 << ". " << allPlaylist.at(i)->getName() << endl;
            }
            cout << endl << "Ingrese el número correspondiente a la playlist que desea agregar una canción: ";
            cin >> play;
            P = allPlaylist.at(play - 1);
            cout << endl;
            for (int i = 0; i < allSongs.size(); ++i) {
                cout << i + 1 << ". " << allSongs.at(i)->getName() << endl;
            }
            cout << endl << "Ingrese el número correspondiente a la canción que desea agregar: ";
            cin >> song;
            S = allSongs.at(song - 1);
            cout << endl;
            P->addSongs(S);
            cout << "¡Canción agregada exitósamente!" << endl;
        } else if (resp == 0) {
            respU = 0;
            for (int i = 0; i < allSongs.size(); i++) {
                delete allSongs[i];
                allSongs[i] = NULL;
            }
            allSongs.clear();
            for (int i = 0; i < allRadios.size(); i++) {
                delete allSongs[i];
                allRadios[i] = NULL;
            }
            allRadios.clear();
            for (int i = 0; i < allPlaylist.size(); i++) {
                delete allPlaylist[i];
                allPlaylist[i] = NULL;
            }
            allPlaylist.clear();
            for (int i = 0; i < allArtists.size(); i++) {
                delete allArtists[i];
                allArtists[i] = NULL;
            }
            allArtists.clear();
        }
    }
}