double __thiscall sub_10078F10(int this)
{
  double v1; // st7
  double result; // st7
  double v3; // st6
  float v4; // [esp+4h] [ebp-Ch]

  v1 = (double)(unsigned __int16)(int)(*(float *)(*(_DWORD *)(this + 4) + 732) * 182.04445) * 0.0054931641;
  if ( *(float *)(this + 20) == v1 )
    return 0.0;
  v3 = v1;
  result = *(float *)(this + 20);
  v4 = v3;
  sub_10424C10(*(float *)(this + 20), v4);
  return result;
}
