double __thiscall sub_10419AB0(int this, float a2)
{
  int v2; // edx
  double v3; // st7
  float v5; // [esp+0h] [ebp-8h]

  if ( (*(_BYTE *)(this + 92) & 2) == 0 )
    return 1.0;
  v2 = *(_DWORD *)(this + 88);
  if ( !v2 )
    return 0.5;
  if ( -1.0 == *(float *)(v2 + 76) )
    return 0.5;
  v3 = a2;
  if ( a2 < (double)*(float *)(v2 + 72) || v3 > *(float *)(v2 + 76) )
    return 0.5;
  v5 = v3 - *(float *)(v2 + 72);
  return sub_10418F30(this, v5, 1);
}
