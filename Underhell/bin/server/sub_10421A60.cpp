int sub_10421A60()
{
  int result; // eax
  double v1; // st6
  int v2; // [esp+0h] [ebp-4h]

  result = 0;
  v2 = 0;
  do
  {
    v1 = (double)v2;
    v2 = ++result;
    flt_106F1894[result] = sin(v1 * 0.02454369260617026);
  }
  while ( result < 256 );
  return result;
}
