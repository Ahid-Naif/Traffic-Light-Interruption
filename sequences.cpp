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
    traffic1_go(); // green
    traffic2_stop(); // red
    traffic3_stop(); // red
    traffic4_stop(); // red
}

void sequence2(){
    traffic1_wait(); // yellow
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

void go2Sequence(int counter){
    if(counter == 1){
        sequence1();
    }
    else if(counter == 2){
        sequence2();
    }
    else if(counter == 3){
        sequence3();
    }
    else if(counter == 4){
        sequence4();
    }
    else if(counter == 5){
        sequence5();
    }
    else if(counter == 6){
        sequence6();
    }
    else if(counter == 7){
        sequence7();
    }
    else if(counter == 8){
        sequence8();
    }
}