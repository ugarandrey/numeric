#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define GREEN   "\033[1;32m"


enum color {
		none,
		red,
		yellow,
		green
};

struct numeric {
	enum  color num_color;
	int   	    value;
	int         num_position; 
};



void colored_output (struct numeric num);

void num_transform (struct numeric *array, int num, int lenght);

int main() {
	struct numeric test;
	return 0;
}


void colored_output (struct numeric num){
	switch (num.num_color){
		case red:
		{
			printf ("%s%d%s", RED, num.value, RESET);
                        break;

		}
		case yellow:
		{
			printf ("%s%d%s", YELLOW, num.value, RESET);
                        break;
		}
                case green:
                {
                        printf ("%s%d%s",GREEN, num.value, RESET);
			break;
                }
		default:
                {
                        printf ("NEVERMORE");
                }
	}
}

void num_transform (struct numeric **array, int num, int lenght){
	for (int i = 1; i <= lenght; i++){
		array [lenght - i] [0].value = num % 10;
		array [lenght - i] [1].num_color = red; 
		num = num / 10;
	}

}
