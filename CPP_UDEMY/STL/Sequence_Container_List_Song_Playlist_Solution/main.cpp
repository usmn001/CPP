// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    std::cout<<"Playing"<<":"<<"\n"; 
    std::cout <<song<< std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    
    for (const auto &it : playlist)
    {
      std::cout<<it<<"\n";
    }
       
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    char op{};
while(op!='Q')
{
    std::cout<<"\n";
    display_playlist(playlist,*current_song);
    display_menu();
    std::cin>>op;
    switch(op)
    {

    case 'L'  :  std::cout<<"\n";
                 display_playlist(playlist,*current_song);
                 break;   
  
    case 'F' :  play_current_song(*current_song);  
                break; 
    
    case 'N'  :  std::advance(current_song,+1);
                 if(current_song==playlist.end())
                 {
                 current_song=playlist.begin();   
                 }                              
                 play_current_song(*current_song);
       
                 break;

    case 'P'  :  std::advance(current_song,-1); 
                 if(current_song==playlist.begin())
                 {
                 current_song=playlist.end();   
                 }                             
                 play_current_song(*current_song);                 
                 break;

    case 'A'  :  std::string name{};
                 std::string artist_name{};
                 int rating{};
                 std::cout<<"Enter Song Name:";
                 std::cin>>name;
                 std::cout<<"Enter Artist Name :";
                 getline(std::cin,artist_name);
                 std::cout<<"Enter Rating : ";
                 std::cin>>rating;
                 playlist.emplace(current_song,name,artist_name,rating); // Calls overloaded constructor
                 break; 

    }

}
    // Your program logic goes here

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}