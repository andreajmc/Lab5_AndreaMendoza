//
// Created by andrea on 11/16/18.
//

#include "Radio.h"
#include <vector>
using std::vector;
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;

using std::string;
#include "Song.h"

Radio::Radio(const string &genre, const string &name, const vector<Song *> &Songs) : genre(genre), name(name),
                                                                                     Songs(Songs) {}

const string &Radio::getGenre() const {
    return genre;
}

void Radio::setGenre(const string &genre) {
    Radio::genre = genre;
}

const string &Radio::getName() const {
    return name;
}

void Radio::setName(const string &name) {
    Radio::name = name;
}

const vector<Song *> &Radio::getSongs() const {
    return Songs;
}

void Radio::setSongs(const vector<Song *> &Songs) {
    Radio::Songs = Songs;
}

void Radio::addSongs(Song* song) {
    Songs.push_back(song);
}

void Radio::showSongs() {
    for (int i = 0; i <= Songs.size(); ++i) {
        cout<<(i+1)<<". "<<Songs.at(i)->getName()<<endl;
    }
}

string Radio::getDurationT() {
    int duration = 0;

    for (auto &Song : Songs) {
        duration += Song->getDuration();
    }

    int mins = duration/60;
    int secs = duration - mins*60;
    string mins2;
    string secs2;
    std::stringstream ss;
    ss << mins;
    mins2 =ss.str();
    ss << secs;
    secs2 = ss.str();
    string dur;
    dur = (secs < 10 ? mins2 + ":" + "0" : mins2 + ":") + secs2;

    return dur;
}
