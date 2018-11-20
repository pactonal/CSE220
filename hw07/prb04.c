int countOccurences(char data[], char x) {
    int count = 0;
    int len = (sizeof(*data) / sizeof(char));
    for (int idx = 0; idx <= len; idx++)
        if (data[idx] == x)
            count += 1;
    return count;
}
