//
// Created by andrea on 11/16/18.
//

#ifndef LAB5_ANDREAMENDOZA_ARTIST_H
#define LAB5_ANDREAMENDOZA_ARTIST_H

#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Song.h"

class Artist {
public:

    Artist(const string &name, int rep, const vector<Song *> &Songs);

    const string &getName() const;

    void setName(const string &name);

    void addSongs(Song* song);

    const vector<Song *> &getSongs() const;

    void setSongs(const vector<Song *> &Songs);

    void addRep();

    int getRep() const;

    void setRep(int rep);

private:
    string name;
    int rep;
    vector <Song*> Songs;
};


#endif //LAB5_ANDREAMENDOZA_ARTIST_H
