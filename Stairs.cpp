int solution(int k) {
  if (k <= 1)
    return 1;
  if (k == 2)
    return 2;

  int dp[k];
  dp[0]=dp[1]=1;
  dp[2]=2;

  for (int i = 3; i < k; ++i) {
    dp[i] = dp[i-1] + dp[i-2];
  }

  return dp[k-1];
}
