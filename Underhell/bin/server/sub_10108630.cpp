double __thiscall sub_10108630(int this, int a2)
{
  double result; // st7
  double v3; // st6
  float v4; // [esp+4h] [ebp-4h]

  v4 = 1.0;
  if ( *(float *)(this + 840) < 0.0 || *(float *)(this + 844) < 0.0 || *(float *)(this + 848) < 0.0 )
    v4 = -1.0;
  result = sub_10246760(*(_DWORD *)(this + 248), a2, this + 1248) * v4 / *(float *)(this + 804);
  v3 = 1.0;
  if ( result > 1.0 )
    return v3;
  v3 = 0.0;
  if ( result < 0.0 )
    return v3;
  return result;
}
