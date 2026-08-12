char __thiscall sub_10090CC0(float *this, float *a2)
{
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st6
  char result; // al
  float v8; // [esp+0h] [ebp-Ch]

  v3 = a2[1] - *(float *)(*(_DWORD *)this + 720);
  v4 = *a2 - *(float *)(*(_DWORD *)this + 716);
  v8 = v4 * v4 + v3 * v3;
  v5 = off_10689708(v8);
  if ( this[1] != *a2 || this[2] != a2[1] || this[3] != a2[2] )
  {
    v6 = *(float *)(dword_106B31C8 + 12);
    *((_BYTE *)this + 44) = 0;
    this[10] = v6;
    this[9] = v5;
    return 0;
  }
  if ( *((_BYTE *)this + 44) )
    return 1;
  if ( this[9] - v5 <= 0.0 )
  {
    if ( *(float *)(dword_106B31C8 + 12) - this[10] <= 0.75 )
      return 0;
    result = 1;
    *((_BYTE *)this + 44) = 1;
  }
  else
  {
    this[10] = *(float *)(dword_106B31C8 + 12);
    result = 0;
    this[9] = v5;
  }
  return result;
}
