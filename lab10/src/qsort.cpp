#include "qsort.h"
#include <iostream>

void qsort_async(std::vector<int> &v, int left, int right)
{
    if (left < right)
    {
        std::cout << "Current thread id: " << std::this_thread::get_id() << ", left=" << left << ", right=" << right << std::endl;
        int pivot = v[(left + right) / 2];
        int i = left, j = right;

        while (i <= j)
        {
            while (v[i] < pivot)
                i++;
            while (v[j] > pivot)
                j--;
            if (i <= j)
            {
                std::swap(v[i], v[j]);
                i++;
                j--;
            }
        }

        auto t1 = std::async(std::launch::async, qsort_async, std::ref(v), left, j);
        auto t2 = std::async(std::launch::async, qsort_async, std::ref(v), i, right);

        t1.wait();
        t2.wait();
    }
}