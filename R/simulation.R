compute_pi_r <- function(n) {
  tot <- 0L
  for (i in seq_len(n)) {
    xy <- runif(2L)
    if (sum(xy * xy) <= 1) {
      tot <- tot + 1L
    }
  }
  4 * tot / n
}
