char __thiscall sub_10028280(_DWORD *this, int a2, const void *a3)
{
  double v3; // st7
  int v4; // edi
  int v5; // eax
  double v6; // st3
  double v7; // st6
  float v9[3]; // [esp+0h] [ebp-18h] BYREF
  float v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a2 < 1 || a2 > this[480] )
    return 0;
  v3 = 0.0;
  v4 = this[477] + 76 * a2 - 76;
  if ( *((float *)off_103DC81C + 4) > 0.0
    && (v5 = (2 * *(_DWORD *)(v4 + 72)) >> 1, v5 > 0)
    && v5 == *((_DWORD *)off_103DC81C + 1) - 1 )
  {
    sub_101EDA00(v4, 3, v9);
    sub_101EDA00(a3, 3, v10);
    v6 = 1.0 / *((float *)off_103DC81C + 4);
    v7 = (v10[1] - v9[1]) * v6;
    v3 = (v10[2] - v9[2]) * v6;
    *(float *)(v4 + 60) = (v10[0] - v9[0]) * v6;
    *(float *)(v4 + 64) = v7;
  }
  else
  {
    *(float *)(v4 + 60) = 0.0;
    *(float *)(v4 + 64) = 0.0;
  }
  *(float *)(v4 + 68) = v3;
  *(_DWORD *)(v4 + 72) = *((_DWORD *)off_103DC81C + 1) & 0x7FFFFFFF;
  qmemcpy((void *)v4, a3, 0x30u);
  return 1;
}
