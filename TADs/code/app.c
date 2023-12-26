#include "float_vector.h"


int main(){

    FloatVector *vec = create(10);
    print(vec);

    append(vec,56.4);
    append(vec, 454.6);
    append(vec, 565.4);

    print(vec);

    destroy(&vec);


    return 0;
}