#ifndef QSORT_H
#define QSORT_H

#include <vector>
#include <future>
#include <thread>

/** @brief Asynchroniczne szybkie sortowanie wektora liczb całkowitych.
 *
 * Sortuje elementy wektora od indeksu `left` do `right` korzystając z algorytmu quicksort.
 * Sortowanie podzakresów odbywa się asynchronicznie.
 *
 * @param v Wektor liczb całkowitych do posortowania.
 * @param left Lewy indeks zakresu sortowania.
 * @param right Prawy indeks zakresu sortowania.
 */
void qsort_async(std::vector<int>& v, int left, int right);

#endif