void problemSolution1(float consumed_water) {
    float cost = 13.0;
    // write your code here
    if (consumed_water <= 30.0) {
        cost += consumed_water * 0.4;  // $0.4 per cubic meter for the first 30 cubic meters
    } else {
        cost += 30.0 * 0.4;

        if (consumed_water <= 50.0) {
            cost += (consumed_water - 30.0) * 0.12;  // $0.12 per cubic meter for the next 20 cubic meters
        } else {
            cost += 20.0 * 0.12;

            if (consumed_water <= 60.0) {
                cost += (consumed_water - 50.0) * 1.4;  // $1.4 per cubic meter for the next 10 cubic meters
            } else {
                cost += 10.0 * 1.4;

                cost += (consumed_water - 60.0) * 1.5;  // $1.5 per cubic meter for every additional cubic meter
            }
        }
    }


    return cost;
}
