class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
    int i = 0, size = plants.size(), copy = capacity, step = 0;
    while (i < size)
    {
        if (copy >= plants[i])
        {
            copy -= plants[i];
            step++;
            i++;
        }
        else
        {
            step += 2 * i;
            copy = capacity;
        }
    }
    return step;
    }
};