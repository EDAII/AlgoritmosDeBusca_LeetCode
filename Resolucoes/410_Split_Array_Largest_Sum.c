int splitArray(int* nums, int numsSize, int k) {
    long long low = 0, high = 0;

    // calcula os limites inicial e final da busca binária
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > low) low = nums[i];   // low = maior elemento
        high += nums[i];                    // high = soma total
    }

    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        // checar se consigo dividir em <= k partes com limite "mid"
        long long cur = 0;
        int parts = 1;
        int feasible = 1;

        for (int i = 0; i < numsSize; i++) {
            if (cur + nums[i] > mid) {
                parts++;
                cur = nums[i];
                if (parts > k) {
                    feasible = 0;
                    break;
                }
            } else {
                cur += nums[i];
            }
        }

        if (feasible) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return (int)ans; // <== aqui fecha dentro da função
}
