char __thiscall sub_10082630(int this, int a2)
{
  float *v5; // edi
  float *v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  float *v11; // eax
  int v12; // eax
  float v13; // [esp+4h] [ebp-60h]
  int v14[17]; // [esp+18h] [ebp-4Ch] BYREF
  _DWORD *v15; // [esp+5Ch] [ebp-8h]
  int v16; // [esp+60h] [ebp-4h]
  int v17; // [esp+6Ch] [ebp+8h]
  char v18; // [esp+6Fh] [ebp+Bh]

  if ( !**(_DWORD **)(this + 36) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 60) )
    return 0;
  *(float *)(this + 60) = *(float *)(dword_106B31C8 + 12) + 0.3;
  if ( !*(_BYTE *)(a2 + 28) )
    goto LABEL_9;
  if ( sub_10082330((_DWORD *)this, 144.0) )
    return 1;
  if ( !*(_BYTE *)(a2 + 28) || (v18 = 0, (sub_100A61A0(*(_DWORD *)(this + 36)) & 0x22) != 0) )
LABEL_9:
    v18 = 1;
  v5 = *(float **)(this + 4);
  v6 = (float *)sub_100A6030(*(_DWORD *)(this + 36));
  *(float *)&v14[14] = *v6 - v5[179];
  *(float *)&v14[15] = v6[1] - v5[180];
  *(float *)&v14[16] = v6[2] - v5[181];
  v7 = off_10689714();
  if ( v18 && v7 >= *(float *)(a2 + 4) || (unsigned __int8)sub_100A61C0(*(_DWORD *)(this + 36)) )
    return 0;
  memset(v14, 0, 0x38u);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(this + 36);
  v10 = *(_DWORD *)(this + 4);
  v15 = *(_DWORD **)(this + 24);
  v17 = v8;
  v16 = *(_DWORD *)a2;
  v11 = (float *)sub_100A6040(v9);
  sub_1007C550(v15, 2, (float *)(v10 + 716), v11, v16, v17, 100.0, 0, (float *)v14);
  if ( *(float *)&v14[9] - *(float *)(a2 + 8) >= 0.01 )
  {
    v12 = *(_DWORD *)(a2 + 20);
    if ( v12 != 2 || v14[0] != -3 )
    {
      if ( v14[7] && v12 == 1 )
      {
        v13 = *(float *)(a2 + 8) - *(float *)&v14[9];
        sub_1007F130(this, v13, (int)v14);
        return 0;
      }
      return 0;
    }
  }
  sub_100820C0(this);
  return 1;
}
