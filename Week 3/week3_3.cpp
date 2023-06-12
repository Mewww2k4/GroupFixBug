
#include<bits/stdc++.h>
using namespace std;
class Movie
{
	private:
		char title[100];
		int year;
		char director[100];
	public:
		void setTitle(char* t)
		{
			strcpy(title, t);
		}
		void setYear(int y)
		{
			year = y;
		}
		void setDirector(char* d)
		{
			strcpy(director,d);
		}
		void Display()
		{
			cout<<"\nTitle: "<<title<<endl;
			cout<<"\nYear: "<<year<<endl;
			cout<<"\nDirector: "<<director<<endl;
		}
		bool twoMovie(const Movie & movie)
		{
			return (year == movie.year && strcmp(director, movie.director)==0);
		}
	
};
int main()
{
	Movie movie1;
    movie1.setTitle("Movie 1");
    movie1.setYear(2021);
    movie1.setDirector("Director 1");

    Movie movie2;
    movie2.setTitle("Movie 2");
    movie2.setYear(2021);
    movie2.setDirector("Director 2");

    movie1.Display();
    std::cout << std::endl;
    movie2.Display();
    std::cout << std::endl;
    if (movie1.twoMovie(movie2)) {
        std::cout << "Movie 1 and Movie 2 have the same year and director." << std::endl;
    } else {
        std::cout << "Movie 1 and Movie 2 do not have the same year and director." << std::endl;
    }
	return 0;
}
