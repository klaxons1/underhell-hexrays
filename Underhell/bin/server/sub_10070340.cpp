float *__thiscall sub_10070340(int this, int a2, float *a3)
{
  float *result; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 820) == -1 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = a3;
    *a3 = *(float *)(this + 580);
    a3[1] = *(float *)(this + 584);
    a3[2] = *(float *)(this + 588);
  }
  else
  {
    result = (float *)sub_10085230(v5, a2, *(_DWORD *)(this + 820));
    *a3 = *result;
    a3[1] = result[1];
    a3[2] = result[2];
  }
  return result;
}
