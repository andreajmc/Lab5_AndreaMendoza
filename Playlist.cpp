//
// Created by andrea on 11/16/18.
//

#include "Playlist.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::endl;
using std::cout;

#include "Song.h"
#include <sstream>

Playlist::Playlist(const string &name, const string &desc, const vector<Song *> &Songs) : name(name), desc(desc),
                                                                                          Songs(Songs) {}

const string &Playlist::getName() const {
    return name;
}

void Playlist::setName(const string &name) {
    Playlist::name = name;
}

const string &Playlist::getDesc() const {
    return desc;
}

void Playlist::setDesc(const string &desc) {
    Playlist::desc = desc;
}

const vector<Song *> &Playlist::getSongs() const {
    return Songs;
}

void Playlist::setSongs(const vector<Song *> &Songs) {
    Playlist::Songs = Songs;
}

void Playlist::addSongs(Song* song) {
    Songs.push_back(song);
}

void Playlist::showPlaylist() {
    for (int i = 0; i <= Songs.size(); ++i) {
        cout<<(i+1)<<". "<<Songs.at(i)->getName()<<"     "<<Songs.at(i)->getDurationF()<<endl;
    }
}

string Playlist::getDurationT() {
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