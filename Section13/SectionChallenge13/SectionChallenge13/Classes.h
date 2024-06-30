#pragma once

#include <string>
#include <vector>

class Movie {

	std::string movie;
	std::string rating;
	int watched;

	std::string ratingG;
	std::string ratingPG;
	std::string ratingPG_13;
	std::string ratingR;

};

class Movies {

	std::vector<Movie> movies;

	Movie* createMovie()
	{
		Movie* movie = new Movie();
		return movie;
	}
};
