#include "Classes.h"


Movie::Movie(std::string name, Rating rating, int watched) : name{ name }, rating{ rating }, watched{ watched } {};

Movie* Movies::createMovie(std::string name, Rating rating, int watched)
{
	Movie* movie = new Movie(name, rating, watched);
	return movie;
}

bool Movies::addMovie(Movie &movie)
{
	movies.push_back(movie);

	return false;
}



