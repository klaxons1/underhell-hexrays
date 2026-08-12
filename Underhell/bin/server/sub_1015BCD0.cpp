void __thiscall sub_1015BCD0(_DWORD *this)
{
  float *v2; // edi
  double v3; // st6
  int v4; // edx
  int v5; // eax
  float v6; // edx
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (float *)this[1];
  if ( 0.0 == v2[1034] )
  {
    if ( 0.0 == v2[138] )
      v3 = 1.0;
    else
      v3 = v2[138];
    v4 = dword_106B31C8;
    v5 = this[2];
    *(float *)(v5 + 72) = *(float *)(v5 + 72) - v3 * *(float *)(dword_106B6F0C + 44) * *(float *)(dword_106B31C8 + 16);
    *(float *)(v5 + 72) = v2[118] * *(float *)(v4 + 16) + *(float *)(v5 + 72);
    v6 = v2[117];
    v7[0] = v2[116];
    v7[1] = v6;
    v7[2] = 0.0;
    sub_100D9710(v2 + 116, v7);
    sub_101581E0(this);
  }
}
