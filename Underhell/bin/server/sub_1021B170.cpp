_DWORD *__thiscall sub_1021B170(_DWORD *this, int a2)
{
  int v2; // edx
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 == 3 || v2 == 15 )
  {
    v3 = *(float *)(a2 + 8);
    v4 = *(float *)(a2 + 12);
    v5 = *(float *)(a2 + 16);
  }
  else
  {
    v3 = flt_106F1CA8;
    v4 = flt_106F1CAC;
    v5 = flt_106F1CB0;
  }
  v9 = v5;
  v8 = v4;
  v7 = v3;
  return sub_1021B0D0(this, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), this, v7, v8, v9);
}
