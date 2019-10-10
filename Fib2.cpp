int solution(int k) {
  if (k == 0 || k == 1) {
    return 1;
  }

  int a = 1;
  int b = 1;
  bool c = false;
  
  k -= 2;
  while (k-- > 0) {
    if (c)
      a = a+b;
    else
      b = a+b;
    c = !c;
  }

  return c ? a : b;
}
