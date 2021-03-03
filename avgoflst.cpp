float avgoflst(int lst[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++){
        total += lst[i];
    }
    return total / size;
}