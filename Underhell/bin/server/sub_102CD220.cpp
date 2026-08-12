int __thiscall sub_102CD220(int this, int a2)
{
  int v3; // edi
  int *v4; // ecx
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int result; // eax
  double v10; // rt1
  double v11; // st6
  double v12; // st7
  float v13; // [esp+Ch] [ebp-Ch]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  v3 = *(_DWORD *)(this + 248) | 0x80;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  *(_DWORD *)(this + 808) = -1;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 == 3 || v5 == 15 )
  {
    v6 = *(float *)(a2 + 8);
    v7 = *(float *)(a2 + 12);
    v8 = *(float *)(a2 + 16);
  }
  else
  {
    v6 = flt_106F1CA8;
    v7 = flt_106F1CAC;
    v8 = flt_106F1CB0;
  }
  result = *(_DWORD *)(this + 252) >> 11;
  v10 = *(float *)(this + 1024) * *(float *)(this + 1024)
      + *(float *)(this + 1020) * *(float *)(this + 1020)
      + *(float *)(this + 1028) * *(float *)(this + 1028);
  v13 = v6 * v10;
  v14 = v7 * v10;
  v15 = v10 * v8;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  v11 = *(float *)(this + 584) + v14;
  v12 = *(float *)(this + 588) + v15;
  *(float *)(this + 1080) = *(float *)(this + 580) + v13;
  *(float *)(this + 1084) = v11;
  *(float *)(this + 1088) = v12;
  return result;
}
