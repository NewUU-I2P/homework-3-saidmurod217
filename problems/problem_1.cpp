float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    float fixed_amount = 13;

    // Rates
    float rate1 = 0.4;
    float rate2 = 0.12;
    float rate3 = 1.4;
    float additional_rate = 1.5;

    // Limits
    float limit1 = 30;
    float limit2 = 20;
    float limit3 = 10;

    // Calculate cost
    if (consumed_water <= limit1) {
        cost = fixed_amount + consumed_water * rate1;
    } else if (consumed_water <= limit1 + limit2) {
        cost = fixed_amount + limit1 * rate1 + (consumed_water - limit1) * rate2;
    } else if (consumed_water <= limit1 + limit2 + limit3) {
        cost = fixed_amount + limit1 * rate1 + limit2 * rate2 + (consumed_water - limit1 - limit2) * rate3;
    } else {
        float additional_consumption = consumed_water - limit1 - limit2 - limit3;
        cost = fixed_amount + limit1 * rate1 + limit2 * rate2 + limit3 * rate3 + additional_consumption * additional_rate;
    }

    return cost;
}
