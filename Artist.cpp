//
// Created by andrea on 11/16/18.
//

#include "Artist.h"
#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Song.h"


Artist::Artist(const string &name, int rep, const vector<Song *> &Songs) : name(name), rep(rep), Songs(Songs) {}

const string &Artist::getName() const {
    return name;
}

void Artist::setName(const string &name) {
    Artist::name = name;
}

const vector<Song *> &Artist::getSongs() const {
    return Songs;
}

void Artist::setSongs(const vector<Song *> &Songs) {
    Artist::Songs = Songs;
}

void Artist::addSongs(Song* song) {
    Songs.push_back(song);
}

void Artist::addRep(){
    ++Artist::rep;
}

int Artist::getRep() const {
    return rep;
}

void Artist::setRep(int rep) {
    Artist::rep = rep;
}
