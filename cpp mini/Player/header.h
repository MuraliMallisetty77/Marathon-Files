#ifndef HEADER_H
#define HEADER_H

#include<cstring>
class Player
{
    int playerid;
    char *pname;
    int score[3];
    public:
        Player();
        Player(int ,const char*,int []);
        ~Player();
        Player(Player&);
        void accept();
        void display();
        float calaculateAverageScore();
        bool operator==(Player &);
        char& operator[](int);
        bool operator<(Player&);
        friend std::ostream& operator<<(std::ostream &,Player &);

        int getPlayerid() const { return playerid; }
        void setPlayerid(int playerid_) { playerid = playerid_; }

        void setName(const char *n)
        {
            pname=new char[strlen(n)+1];
            strcpy(pname,n);
        }
        char* getName()
        {
            return pname;
        }


};

#endif // HEADER_H
