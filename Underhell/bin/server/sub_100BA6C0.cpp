int __cdecl sub_100BA6C0(int a1, int a2, float *a3, float *a4)
{
  int result; // eax
  float *v5; // eax
  double v6; // st7

  if ( !a1 || !(unsigned __int8)sub_10245FE0(a1) )
    return 0;
  v5 = (float *)sub_10245550(a2);
  *a3 = v5[8];
  a3[1] = v5[9];
  a3[2] = v5[10];
  *a4 = v5[11];
  a4[1] = v5[12];
  v6 = v5[13];
  result = 1;
  a4[2] = v6;
  return result;
}
