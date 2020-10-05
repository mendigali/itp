bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0) {
            return true;
        } else {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}
long long int fact(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fact(x - 1);
    }
}