//
// Created by andrea on 11/16/18.
//

#ifndef LAB5_ANDREAMENDOZA_SONG_H
#define LAB5_ANDREAMENDOZA_SONG_H

#include <string>
using std::string;

class Song {
public:
    Song();

    Song(const string &name, int duration, const string &genre, int rep);

    const string &getName() const;

    void setName(const string &name);

    int getDuration() const;

    void setDuration(int duration);

    const string &getGenre() const;

    void setGenre(const string &genre);

    int getRep() const;

    void setRep(int rep);

    string getDurationF();

    void addRep();

private:
    string name;
    int duration;
    string genre;
    int rep;

};


#endif //LAB5_ANDREAMENDOZA_SONG_H
