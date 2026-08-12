double __thiscall sub_1032A0C0(int this)
{
  double result; // st7
  float v2; // [esp+0h] [ebp-4h]

  if ( 0.0 != *(float *)(this + 3820) )
    return *(float *)(this + 3820);
  if ( *(_DWORD *)(this + 3764) != 5 )
    return 128.0;
  v2 = (*(float *)(this + 3828) - *(float *)(this + 3824)) * 0.5 + *(float *)(this + 3824);
  result = v2;
  if ( sub_1032A070((void *)this) )
    return result * 0.5;
  return result;
}
