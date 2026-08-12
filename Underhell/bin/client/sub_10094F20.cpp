int __thiscall sub_10094F20(int this)
{
  int result; // eax
  float *v3; // eax
  float *v4; // eax
  float v5; // [esp+4h] [ebp-Ch] BYREF
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  if ( (*(_BYTE *)(this + 36) & 3) == 1 )
  {
    v4 = (float *)sub_101422C0();
    v5 = *v4 - *(float *)(this + 8);
    v6 = v4[1] - *(float *)(this + 12);
    v7 = v4[2] - *(float *)(this + 16);
    return sub_101EE190(&v5, this + 20);
  }
  else
  {
    result = (*(_BYTE *)(this + 36) & 3) - 2;
    if ( (*(_BYTE *)(this + 36) & 3) == 2 )
    {
      v3 = (float *)sub_101422C0();
      v5 = *v3 - *(float *)(this + 8);
      v6 = v3[1] - *(float *)(this + 12);
      v7 = 0.0;
      return sub_101EE190(&v5, this + 20);
    }
  }
  return result;
}
