void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float consumption = consumed_water;
    float totalCost;
    if (consumption <= 30) {
        totalCost += consumption * 0.4;
    } else {
        totalCost += 30 * 0.4;
        consumption -= 30;

        if (consumption <= 20) {
            totalCost += consumption * 0.12;
        } else {
            totalCost += 20 * 0.12;
            consumption -= 20;

            if (consumption <= 10) {
                totalCost += consumption * 1.4;
            } else {
                totalCost += 10 * 1.4;
                consumption -= 10;
                totalCost += consumption * 1.5;
            }
        }
    }
    cost = totalCost;
    return cost;
}
