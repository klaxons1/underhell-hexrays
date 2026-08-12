void __thiscall sub_1020F0C0(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v7; // st6
  double v8; // st7
  int v9; // ebp
  int v11; // edx
  double v12; // st6
  int v13; // ebx
  double v14; // st7
  float v15; // [esp+24h] [ebp-18h]
  float v16; // [esp+28h] [ebp-14h]
  float v17[3]; // [esp+30h] [ebp-Ch] BYREF
  float *v18; // [esp+40h] [ebp+4h]
  float i; // [esp+44h] [ebp+8h]

  v16 = *(float *)(this + 64);
  v15 = *(float *)(this + 68);
  if ( ((1 << *(_DWORD *)(this + 48)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 64) <= 1.0 )
    {
      if ( *(float *)(this + 64) >= 0.0 )
        v16 = *(float *)(this + 64);
      else
        v16 = 0.0;
      v7 = 1.0;
      v8 = 0.0;
    }
    else
    {
      v7 = 1.0;
      v8 = 0.0;
      v16 = 1.0;
    }
    if ( v7 >= *(float *)(this + 68) )
    {
      if ( v8 <= *(float *)(this + 68) )
        v8 = *(float *)(this + 68);
    }
    else
    {
      v8 = v7;
    }
    v15 = v8;
  }
  v9 = a3;
  sub_101F8ED0(
    a2,
    *(_DWORD *)(this + 44),
    *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((a3 & 3) + *(_DWORD *)(a2 + 6356) * (a3 / 4))),
    v17);
  for ( i = v17[*(_DWORD *)(this + 52)]; a4; ++v9 )
  {
    --a4;
    v11 = v9 & 3;
    v12 = *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v11 + v9 / 4 * *(_DWORD *)(a2 + 6356)));
    if ( v12 >= *(float *)(this + 72) && v12 < *(float *)(this + 76)
      || -1.0 == *(float *)(this + 72)
      || -1.0 == *(float *)(this + 76) )
    {
      v13 = *(_DWORD *)(this + 48);
      v18 = (float *)(*(_DWORD *)(a2 + 4 * v13 + 6068) + 4 * (v11 + v9 / 4 * *(_DWORD *)(a2 + 4 * v13 + 6324)));
      v14 = sub_100260E0(i, *(float *)(this + 56), *(float *)(this + 60), v16, v15);
      if ( *(_BYTE *)(this + 80) )
        v14 = v14 * *v18;
      if ( ((1 << v13) & 0x4800) != 0 )
        *v18 = (float)(int)v14;
      else
        *v18 = v14;
    }
  }
}
