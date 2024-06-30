#pragma once

#include <string>
#include <vector>

enum class Rating {
	Rating_G,
	Rating_PG,
	Rating_PG13,
	Rating_R
};

class Movie {

	friend class Movies;

	std::string name;
	Rating rating;
	int watched;

	Movie(std::string name, Rating rating, int watched);

};

class Movies {

private:
	std::vector<Movie> movies;

public:
	Movie* createMovie(std::string name, Rating rating = Rating::Rating_R, int watched = 0);
	bool addMovie(Movie &movie);
};


