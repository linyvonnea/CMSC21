#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway)/sizeof(pathway[0])))

int main(){
    bool pathway[8] = {true, false, true, false, false, false, false, false};

    for (int i = 0; i < NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathways[%d] is open \n", i);
        }else{
            printf("pathway[%d] is closed \n", i);
        }
    }
    return 0;
}


/*Revise line 16 such that you use a designated initializer to set pathways 0 and 2 
to true, and the rest will be false. Make the initializer as short as possible.*/

#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway)/sizeof(pathway[0])))

int main(){
    bool pathway[8] = {[0] = true, [2] = true};

    for (int i = 0; i < NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathways[%d] is open \n", i);
        }else{
            printf("pathway[%d] is closed \n", i);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway)/sizeof(pathway[0])))

int main(){
    bool pathway[8] = {true, false, true};

    for (int i = 0; i < NUM_PATHWAYS; i++){
        if (pathway[i]){
            printf("pathways[%d] is open \n", i);
        }else{
            printf("pathway[%d] is closed \n", i);
        }
    }
    return 0;
}
