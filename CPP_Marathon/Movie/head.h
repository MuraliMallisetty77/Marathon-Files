#ifndef HEAD_H
#define HEAD_H

#include<string>
class Movie
{
    std::string movie_name;
    int movie_id;
    std::string movie_director;
    char movie_rating;
    int runtime;
    std::string heroName;
    std::string heroineName;
    int seats;
    public:
        Movie();
        Movie(std::string,int,std::string,char,int,std::string,std::string,int);
        ~Movie();
        void accept();
        int ticketPrice();
        void display();
        

        int getmovieId() const { return movie_id; }
        void setMovieId(int movieId) { movie_id = movieId; }

        int getSeats() const { return seats; }
        void setSeats(int seats_) { seats = seats_; }

        std::string getmovieName() const { return movie_name; }
        void setMovieName(const std::string &movieName) { movie_name = movieName; }
};

#endif // HEAD_H
