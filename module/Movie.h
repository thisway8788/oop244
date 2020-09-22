//#pragma once
#ifndef SDDS_MOVIE_H__
#define SDDS_MOVIE_H__
#include "File.h"
namespace sdds {

    struct Movie {
        char m_title[128];
        int m_year;
        char m_rating[6];
        int m_duration;
        char m_genres[10][11];
        float m_consumerRating;
    };
   



   
    bool loadMovies();

    void displayMovie(const Movie* mvp);

    bool hasGenre(const Movie* mvp, const char genre[]);


    void displayMoviesWithGenre(const char genre[]);
}

#endif