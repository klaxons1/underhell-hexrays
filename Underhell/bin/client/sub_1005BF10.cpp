double __cdecl sub_1005BF10(float *a1, int *a2)
{
  bool v2; // c0
  double result; // st7
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  if ( a2 )
    return sub_1005BE50((int)&unk_1040D0B8, a1, a2);
  v2 = sub_1005A5F0((int)&savedregs, a1, 1) > 0.0;
  result = 0.0;
  if ( v2 )
    return 1.0;
  return result;
}
