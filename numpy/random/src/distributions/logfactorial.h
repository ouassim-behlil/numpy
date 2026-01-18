
#ifndef LOGFACTORIAL_H
#define LOGFACTORIAL_H

#include <stdint.h>

/*
 *  logfactorial - Compute the natural logarithm of k factorial
 *  
 *  This function efficiently computes log(k!) using a combination of
 *  a lookup table for small values (k <= 125) and Stirling's approximation
 *  for larger values.
 *  
 *  Parameters
 *  ----------
 *  k : int64_t
 *      Non-negative integer for which to compute log(k!)
 *  
 *  Returns
 *  -------
 *  double
 *      The natural logarithm of k factorial.
 *      Returns NaN if k is negative (invalid input).
 *  
 *  Performance Characteristics
 *  ---------------------------
 *  - O(1) time complexity for all values
 *  - For k <= 125: Direct table lookup (fastest)
 *  - For k > 125: Stirling's approximation (accurate to within 2 ULP)
 *  
 *  Thread Safety
 *  -------------
 *  This function is thread-safe and reentrant as it only reads from
 *  a constant lookup table and uses local variables.
 *  
 *  Examples of Usage in NumPy
 *  --------------------------
 *  Used in random distributions, particularly in the hypergeometric
 *  distribution where multiple factorial computations are needed for
 *  probability mass function evaluations.
 */
double logfactorial(int64_t k);

#endif
