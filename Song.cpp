//
// Created by andrea on 11/16/18.
//

#include "Song.h"

#include <string>
using std::string;

#include <sstream>

Song::Song() {}

Song::Song(const string &name, int duration, const string &genre, int rep) : name(name), duration(duration),
                                                                             genre(genre), rep(rep) {}

const string &Song::getName() const {
    return name;
}

void Song::setName(const string &name) {
    Song::name = name;
}

int Song::getDuration() const {
    return duration;
}

void Song::setDuration(int duration) {
    Song::duration = duration;
}

const string &Song::getGenre() const {
    return genre;
}

void Song::setGenre(const string &genre) {
    Song::genre = genre;
}

int Song::getRep() const {
    return rep;
}

void Song::setRep(int rep) {
    Song::rep = rep;
}

void Song::addRep() {
    ++rep;
}

string Song::getDurationF(){
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

