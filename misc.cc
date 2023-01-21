const int kNearest = 1000;

// round value up to the nearest increment of KNearest
int roundUp(int value) const {
    return ((value + (kNearest - 1)) / kNearest ) * kNearest;
}

// round value down to the nearest increment of KNearest
int roundDown(int value) const {
    return ((value + (kNearest - 1)) / kNearest ) * kNearest - kNearest;
}
