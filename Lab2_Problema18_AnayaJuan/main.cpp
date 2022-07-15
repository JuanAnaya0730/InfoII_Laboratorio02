#include <iostream>

using namespace std;

int main()
{
    char array[10+1] = "0123456789";
    int cont = 0;

    for(int i1=0; i1<10; ++i1){
        for(int i2=0; i2<10; ++i2){
            for(int i3=0; i3<10; ++i3){
                for(int i4=0; i4<10; ++i4){
                    for(int i5=0; i5<10; ++i5){
                        for(int i6=0; i6<10; ++i6){
                            for(int i7=0; i7<10; ++i7){
                                for(int i8=0; i8<10; ++i8){
                                    for(int i9=0; i9<10; ++i9){
                                        for(int i10=0; i10<10; ++i10){
                                            if(     array[i1]!=array[i2] &&
                                                    array[i1]!=array[i3] &&
                                                    array[i1]!=array[i4] &&
                                                    array[i1]!=array[i5] &&
                                                    array[i1]!=array[i6] &&
                                                    array[i1]!=array[i7] &&
                                                    array[i1]!=array[i8] &&
                                                    array[i1]!=array[i9] &&
                                                    array[i1]!=array[i10] &&
                                                    array[i2]!=array[i3] &&
                                                    array[i2]!=array[i4] &&
                                                    array[i2]!=array[i5] &&
                                                    array[i2]!=array[i6] &&
                                                    array[i2]!=array[i7] &&
                                                    array[i2]!=array[i8] &&
                                                    array[i2]!=array[i9] &&
                                                    array[i2]!=array[i10] &&
                                                    array[i3]!=array[i4] &&
                                                    array[i3]!=array[i5] &&
                                                    array[i3]!=array[i6] &&
                                                    array[i3]!=array[i7] &&
                                                    array[i3]!=array[i8] &&
                                                    array[i3]!=array[i9] &&
                                                    array[i3]!=array[i10] &&
                                                    array[i4]!=array[i5] &&
                                                    array[i4]!=array[i6] &&
                                                    array[i4]!=array[i7] &&
                                                    array[i4]!=array[i8] &&
                                                    array[i4]!=array[i9] &&
                                                    array[i4]!=array[i10] &&
                                                    array[i5]!=array[i6] &&
                                                    array[i5]!=array[i7] &&
                                                    array[i5]!=array[i8] &&
                                                    array[i5]!=array[i9] &&
                                                    array[i5]!=array[i10] &&
                                                    array[i6]!=array[i7] &&
                                                    array[i6]!=array[i8] &&
                                                    array[i6]!=array[i9] &&
                                                    array[i6]!=array[i10] &&
                                                    array[i7]!=array[i8] &&
                                                    array[i7]!=array[i9] &&
                                                    array[i7]!=array[i10] &&
                                                    array[i8]!=array[i9] &&
                                                    array[i8]!=array[i10] &&
                                                    array[i9]!=array[i10])
                                            {
                                                cont++;
                                                if(cont == 1000000){
                                                    cout << cont << " = ";
                                                    cout << array[i1] << array[i2] << array[i3] << array[i4] << array[i5] <<
                                                            array[i6] << array[i7] << array[i8] << array[i9] << array[i10] << endl;
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
