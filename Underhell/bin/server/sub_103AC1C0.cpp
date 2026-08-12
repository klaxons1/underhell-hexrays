int __thiscall sub_103AC1C0(int this, float a2, float a3)
{
  int result; // eax

  if ( *(float *)(this + 3700) > (double)*(float *)(dword_106B31C8 + 12) || sub_1004AE70((_DWORD *)this, 0, 1) )
    return 0;
  if ( a3 <= 64.0 )
    return 38;
  if ( a3 > 2376.0 )
    return 39;
  result = 40;
  if ( a2 >= 0.7 )
    return 21;
  return result;
}
