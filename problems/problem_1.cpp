float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float consumption = consumed_water;
    float totalCost = 0;
    cost = totalCost;
    if (consumption <= 30) {
        totalCost += consumption * (float)0.4;
    } else {
        totalCost += 30 * 0.4;
        consumption -= 30;

        if (consumption <= 20) {
            totalCost += consumption * (float)0.12;
        } else {
            totalCost += 20 * (float)0.12;
            consumption -= 20;

            if (consumption <= 10) {
                totalCost += consumption * (float)1.4;
            } else {
                totalCost += 10 * 1.4;
                consumption -= 10;
                totalCost += consumption * (float)1.5;
            }
        }
    }
    return cost;
}
