#include <cstdlib>
#include <time.h>

void rand_init(){
    srand(time(NULL));
}
int rand_int(int start,int end){
    end+=1;
    return rand()%(end-start)+start;
}
float rand_float(float start,float end){
    return rand()*(end-start)/RAND_MAX+start;
}