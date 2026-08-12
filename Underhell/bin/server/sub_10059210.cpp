char __thiscall sub_10059210(int this, int a2)
{
  float *v3; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st6
  char v9; // dl
  double v10; // st7
  char *v11; // ecx
  float *v12; // eax

  v3 = (float *)sub_1012BF20(0, *(char **)a2, 0, 0, 0, 0);
  if ( !v3 )
    return 0;
  qmemcpy((void *)(this + 16), (const void *)a2, 0x30u);
  *(float *)(this + 72) = v3[179];
  *(float *)(this + 76) = v3[180];
  *(float *)(this + 80) = v3[181];
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    v5 = v3[183];
  else
    v5 = -1.0;
  *(float *)(this + 84) = v5;
  *(float *)(this + 88) = flt_106F1CA8;
  *(float *)(this + 92) = flt_106F1CAC;
  *(float *)(this + 96) = flt_106F1CB0;
  *(float *)(this + 100) = *(float *)(a2 + 12);
  if ( 0.0 == *(float *)(a2 + 16) )
    v6 = 64.0;
  else
    v6 = *(float *)(a2 + 16);
  *(float *)(this + 104) = v6;
  if ( 0.0 == *(float *)(a2 + 20) )
    v7 = v6 + 24.0;
  else
    v7 = *(float *)(a2 + 20);
  *(float *)(this + 108) = v7;
  if ( 0.0 == *(float *)(a2 + 24) )
    v8 = 0.0;
  else
    v8 = *(float *)(a2 + 24);
  *(float *)(this + 112) = v8;
  *(_BYTE *)(this + 120) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(this + 121) = *(_BYTE *)(a2 + 47);
  v9 = *(_BYTE *)(a2 + 45);
  *(float *)(this + 128) = 0.0;
  *(float *)(this + 132) = 0.0;
  *(_BYTE *)(this + 122) = v9;
  *(_WORD *)(this + 123) = 0;
  v10 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 140) = 1;
  *(float *)(this + 136) = v10 + 10.0;
  v11 = *(char **)(a2 + 4);
  if ( v11 && *v11 )
  {
    v12 = (float *)sub_1012BF20(0, v11, 0, 0, 0, 0);
    if ( v12 )
    {
      *(float *)(this + 88) = v12[179];
      *(float *)(this + 92) = v12[180];
      *(float *)(this + 96) = v12[181];
    }
  }
  return 1;
}
