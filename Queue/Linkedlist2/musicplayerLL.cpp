#include <bits/stdc++.h>
using namespace std;

/* ---------------- SONG NODE ---------------- */
class Song {
public:
    string name;
    Song* next;
    Song* prev;

    Song(string songName) {
        name = songName;
        next = NULL;
        prev = NULL;
    }
};

/* -------- RECENTLY PLAYED (HISTORY NODE) -------- */
class HistorySong {
public:
    string name;
    HistorySong* next;

    HistorySong(string songName) {
        name = songName;
        next = NULL;
    }
};

/* ---------------- MUSIC PLAYER ---------------- */
class MusicPlayer {
private:
    Song* head;
    Song* tail;
    Song* current;

    HistorySong* historyHead;   // 🔥 unique feature

public:
    MusicPlayer() {
        head = tail = current = NULL;
        historyHead = NULL;
    }

    /* -------- Add song -------- */
    void addSong(string name) {
        Song* newSong = new Song(name);
        if (!head) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }
        cout << "Song added: " << name << endl;
    }

    /* -------- Delete song -------- */
    void deleteSong(string name) {
        Song* temp = head;
        while (temp) {
            if (temp->name == name) {

                if (temp == head) head = temp->next;
                if (temp == tail) tail = temp->prev;

                if (temp->prev) temp->prev->next = temp->next;
                if (temp->next) temp->next->prev = temp->prev;

                if (current == temp)
                    current = head;

                delete temp;
                cout << "Song deleted: " << name << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found\n";
    }

    /* -------- Add to history (UNIQUE) -------- */
    void addToHistory(string songName) {
        HistorySong* newNode = new HistorySong(songName);
        newNode->next = historyHead;
        historyHead = newNode;
    }

    /* -------- Play current -------- */
    void playCurrent() {
        if (!current) {
            cout << "No songs in playlist\n";
            return;
        }
        cout << "▶ Playing: " << current->name << endl;
        addToHistory(current->name);   // 🔥 unique logic
    }

    /* -------- Next song -------- */
    void playNext() {
        if (current && current->next) {
            current = current->next;
            playCurrent();
        } else {
            cout << "No next song\n";
        }
    }

    /* -------- Previous song -------- */
    void playPrevious() {
        if (current && current->prev) {
            current = current->prev;
            playCurrent();
        } else {
            cout << "No previous song\n";
        }
    }

    /* -------- Search song -------- */
    void searchSong(string name) {
        Song* temp = head;
        while (temp) {
            if (temp->name == name) {
                cout << "Song found: " << name << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found\n";
    }

    /* -------- Move song to front -------- */
    void moveSongToFront(string name) {
        if (!head) {
            cout << "Playlist empty\n";
            return;
        }

        Song* temp = head;
        while (temp) {
            if (temp->name == name) {

                if (temp == head) {
                    cout << "Song already at front\n";
                    return;
                }

                if (temp == tail)
                    tail = temp->prev;

                if (temp->prev)
                    temp->prev->next = temp->next;

                if (temp->next)
                    temp->next->prev = temp->prev;

                temp->prev = NULL;
                temp->next = head;
                head->prev = temp;
                head = temp;

                cout << "Moved to front: " << name << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found\n";
    }

    /* -------- Display playlist -------- */
    void displayPlaylist() {
        if (!head) {
            cout << "Playlist empty\n";
            return;
        }
        Song* temp = head;
        cout << "🎶 Playlist:\n";
        while (temp) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    /* -------- Reverse display -------- */
    void displayReverse() {
        if (!tail) return;
        Song* temp = tail;
        cout << "🎶 Reverse Playlist:\n";
        while (temp) {
            cout << temp->name << " -> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }

    /* -------- Shuffle play -------- */
    void shufflePlay() {
        vector<Song*> songs;
        Song* temp = head;
        while (temp) {
            songs.push_back(temp);
            temp = temp->next;
        }

        if (songs.empty()) {
            cout << "Playlist empty\n";
            return;
        }

        srand(time(0));
        current = songs[rand() % songs.size()];
        playCurrent();
    }

    /* -------- Repeat -------- */
    void repeatSong() {
        if (!current) {
            cout << "No song to repeat\n";
            return;
        }
        cout << "🔁 Repeating: " << current->name << endl;
    }

    /* -------- Count songs -------- */
    void countSongs() {
        int count = 0;
        Song* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        cout << "Total songs: " << count << endl;
    }

    /* -------- UNIQUE FUNCTION -------- */
    void showRecentlyPlayed(int k = 5) {
        if (!historyHead) {
            cout << "No recently played songs\n";
            return;
        }

        cout << "🕒 Recently Played Songs:\n";
        HistorySong* temp = historyHead;
        int count = 0;

        while (temp && count < k) {
            cout << temp->name << endl;
            temp = temp->next;
            count++;
        }
    }

    /* -------- Clear playlist -------- */
    void clearPlaylist() {
        Song* temp = head;
        while (temp) {
            Song* nextSong = temp->next;
            delete temp;
            temp = nextSong;
        }
        head = tail = current = NULL;
        cout << "Playlist cleared\n";
    }
};

/* ---------------- DRIVER CODE ---------------- */
int main() {
    MusicPlayer player;

    player.addSong("Believer");
    player.addSong("Shape of You");
    player.addSong("Faded");
    player.addSong("Kesariya");

    player.displayPlaylist();

    player.playCurrent();
    player.playNext();
    player.playNext();
    player.playPrevious();

    player.shufflePlay();
    player.repeatSong();

    player.showRecentlyPlayed();   // 🔥 UNIQUE FEATURE

    player.moveSongToFront("Kesariya");
    player.displayPlaylist();

    player.deleteSong("Faded");
    player.displayReverse();

    player.countSongs();

    return 0;
}
