int solution(int k) {
  if (k == 0 || k == 1) {
    return 1;
  }

  int dp[k];
  dp[0] = dp[1] = 1;
  for (int i = 2; i < k; ++i)
    dp[i] = dp[i-1] + dp[i-2];

  return dp[k-1];
}
