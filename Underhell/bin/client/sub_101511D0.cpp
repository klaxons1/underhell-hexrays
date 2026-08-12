double __stdcall sub_101511D0(int a1, float a2)
{
  double result; // st7
  double v4; // st6
  double v5; // st7
  float v6; // [esp+14h] [ebp-14h]
  float v7; // [esp+18h] [ebp-10h]
  float v8; // [esp+30h] [ebp+8h]

  result = sub_100F2A10(a1, a2);
  v6 = result;
  if ( (*(_BYTE *)(a1 + 55) & 4) != 0 )
  {
    v7 = *((float *)off_103DC81C + 3) * 1.5;
    v8 = sin(v7);
    v4 = a2 * *(float *)(a1 + 28) * v8 + *(float *)(a1 + 16);
    v5 = *(float *)(a1 + 20);
    *(float *)(a1 + 12) = *(float *)(a1 + 24) * a2 * v8 + *(float *)(a1 + 12);
    *(float *)(a1 + 16) = v4;
    *(float *)(a1 + 20) = v5;
    return v6;
  }
  return result;
}
