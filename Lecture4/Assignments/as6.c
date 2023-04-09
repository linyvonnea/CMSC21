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


//A

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
 // B
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
