int solution(const string &s1, const string &s2) {
  if (s1.empty() || s2.empty())
    return 0;

  int n = s1.length(), m = s2.length();
  int dp[n][m];
  memset(dp, 0, sizeof(dp));

  dp[0][0] = s1[0] == s2[0];
  for (int i = 1; i < m; ++i) {
    dp[0][i] = dp[0][i-1] || s1[0] == s2[i];
  }
  for (int i = 1; i < n; ++i) {
    dp[i][0] = dp[i-1][0] || s2[0] == s1[i];
  }

  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < m; ++j) {
      if (s1[i] == s2[j])
        dp[i][j] = dp[i-1][j-1]+1;
      dp[i][j] = max(dp[i][j], max(dp[i][j-1], dp[i-1][j]));
    }
  }

  return dp[n-1][m-1];
}
