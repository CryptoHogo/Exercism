// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    int remainingOvenTime = ovenTime() - actualMinutesInOven;
    return remainingOvenTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    int timePerLayer = 2;
    int preparationTime = numberOfLayers * timePerLayer;
    return preparationTime;
}
