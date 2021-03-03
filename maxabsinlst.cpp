int maxabsinlst(int lst[], int size) {

    int max = 0;
    for (int i = 0; i < size; i++){
        if (lst[i] < 0){
            lst[i] *= -1;
        }
        if (lst[i] > max){
            max = lst[i];
        }
    }
        return max;
}