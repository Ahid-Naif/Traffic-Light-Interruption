#include "sequences.h"

void allRed(){
    traffic1_stop();
    traffic2_stop();
    traffic3_stop();
    traffic4_stop();
}

void sequence0(){
    initialize_traffic1();
    initialize_traffic2();
    initialize_traffic3();
    initialize_traffic4();
}

void sequence1(){
    traffic1_go();
    traffic2_stop();
    traffic3_stop();
    traffic4_stop();
}

void sequence2(){
    traffic1_wait();
    traffic2_stop();
    traffic3_stop();
    traffic4_stop();
}

void sequence3(){
    traffic1_stop();
    traffic2_go();
    traffic3_stop();
    traffic4_stop();
}

void sequence4(){
    traffic1_stop();
    traffic2_wait();
    traffic3_stop();
    traffic4_stop();
}

void sequence5(){
    traffic1_stop();
    traffic2_stop();
    traffic3_go();
    traffic4_stop();
}

void sequence6(){
    traffic1_stop();
    traffic2_stop();
    traffic3_wait();
    traffic4_stop();
}

void sequence7(){
    traffic1_stop();
    traffic2_stop();
    traffic3_stop();
    traffic4_go();
}

void sequence8(){
    traffic1_stop();
    traffic2_stop();
    traffic3_stop();
    traffic4_wait();
}