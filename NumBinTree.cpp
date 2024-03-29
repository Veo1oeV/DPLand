int solution(int k) {                                                           
  if (k <= 1)
    return 0;

  int dp[k];
  memset(dp, 0, sizeof(dp));
  dp[0] = dp[1] = 1;
  for (int i = 2; i < k; ++i) {
    for (int j = 0; j < i; ++j) {
      dp[k] += dp[j] * dp[i-j-1];
    }   
  }

  return dp[k-1];
}
