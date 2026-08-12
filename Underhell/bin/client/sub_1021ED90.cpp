void __thiscall sub_1021ED90(int this, _DWORD *a2, int a3, int a4)
{
  double v5; // st6
  double v6; // st7
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // edx
  double v14; // st6
  int v15; // ebx
  double v16; // st7
  float v17; // [esp+24h] [ebp-1Ch]
  float v18; // [esp+28h] [ebp-18h]
  float i; // [esp+2Ch] [ebp-14h]
  _DWORD v20[3]; // [esp+34h] [ebp-Ch]
  float *v21; // [esp+44h] [ebp+4h]

  v18 = *(float *)(this + 64);
  v17 = *(float *)(this + 68);
  if ( ((1 << *(_DWORD *)(this + 48)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 64) <= 1.0 )
    {
      if ( *(float *)(this + 64) >= 0.0 )
        v18 = *(float *)(this + 64);
      else
        v18 = 0.0;
      v5 = 1.0;
      v6 = 0.0;
    }
    else
    {
      v5 = 1.0;
      v6 = 0.0;
      v18 = 1.0;
    }
    if ( v5 >= *(float *)(this + 68) )
    {
      if ( v6 <= *(float *)(this + 68) )
        v6 = *(float *)(this + 68);
    }
    else
    {
      v6 = v5;
    }
    v17 = v6;
  }
  v8 = (int)&a2[17 * *(_DWORD *)(this + 44) + 22];
  v9 = a2[17 * *(_DWORD *)(this + 44) + 23];
  v20[0] = a2[17 * *(_DWORD *)(this + 44) + 22];
  v10 = *(_DWORD *)(v8 + 8);
  v11 = *(_DWORD *)(this + 52);
  v20[1] = v9;
  v20[2] = v10;
  v12 = 0;
  for ( i = *(float *)&v20[v11]; v12 < a2[10]; ++v12 )
  {
    v13 = v12 & 3;
    v14 = *(float *)(a2[1525] + 4 * (v13 + v12 / 4 * a2[1589]));
    if ( v14 >= *(float *)(this + 72) && v14 < *(float *)(this + 76)
      || -1.0 == *(float *)(this + 72)
      || -1.0 == *(float *)(this + 76) )
    {
      v15 = *(_DWORD *)(this + 48);
      v21 = (float *)(a2[v15 + 1517] + 4 * (v13 + v12 / 4 * a2[v15 + 1581]));
      v16 = sub_100260E0(i, *(float *)(this + 56), *(float *)(this + 60), v18, v17);
      if ( *(_BYTE *)(this + 80) )
        v16 = v16 * *v21;
      if ( ((1 << v15) & 0x4800) != 0 )
        *v21 = (float)(int)v16;
      else
        *v21 = v16;
    }
  }
}
