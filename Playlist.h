//
// Created by andrea on 11/16/18.
//

#ifndef LAB5_ANDREAMENDOZA_PLAYLIST_H
#define LAB5_ANDREAMENDOZA_PLAYLIST_H

#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Song.h"


class Playlist {
public:

    Playlist(const string &name, const string &desc, const vector<Song *> &Songs);

    const string &getName() const;

    void setName(const string &name);

    const string &getDesc() const;

    void setDesc(const string &desc);

    void addSongs(Song* song);

    void showPlaylist();

    const vector<Song *> &getSongs() const;

    void setSongs(const vector<Song *> &Songs);

    string getDurationT();
private:
    string name;
    string desc;
    vector <Song*> Songs;

};


#endif //LAB5_ANDREAMENDOZA_PLAYLIST_H
