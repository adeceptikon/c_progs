
#include<stdio.h>
struct Country {
		char* name;
		char * capital;
		int rank;
		void (*pr)(struct Country);//pointer to a function which returns void and accepts struct of type Country as an argument
	};

void print(struct Country);


int main(){
	struct Country India , USA , China;
	void (*p)(struct Country);
	India.name = "India";
	India.capital = "New dehli";
	India.rank = 1;

	India.pr = &print; //important since pointer in the struct is not initialized
	India.pr(India);

}




void print(struct Country country){
	printf("Country: %s\nRank: %d\nCapital: %s\n ", country.name , country.rank , country.capital);
}


