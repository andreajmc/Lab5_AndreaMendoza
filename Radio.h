//
// Created by andrea on 11/16/18.
//

#ifndef LAB5_ANDREAMENDOZA_RADIO_H
#define LAB5_ANDREAMENDOZA_RADIO_H

#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Song.h"

class Radio {
public:
    Radio(const string &genre, const string &name, const vector<Song> &Songs);

    Radio(const string &genre, const string &name, const vector<Song *> &Songs);

    const string &getGenre() const;

    void setGenre(const string &genre);

    const string &getName() const;

    void setName(const string &name);

    void addSongs(Song* song);

    string getDurationT();

    void showSongs();

    const vector<Song *> &getSongs() const;

    void setSongs(const vector<Song *> &Songs);

private:
    string genre;
    string name;
    vector <Song*> Songs;
};


#endif //LAB5_ANDREAMENDOZA_RADIO_H
