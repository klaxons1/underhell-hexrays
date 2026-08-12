int __thiscall sub_10085310(int this, int a2, int a3, float *a4, float *a5)
{
  int result; // eax
  int i; // esi
  unsigned __int16 v8; // ax
  int v9; // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  float *v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st7
  _BYTE v17[48]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v18[12]; // [esp+38h] [ebp-30h] BYREF
  _BYTE v19[12]; // [esp+44h] [ebp-24h] BYREF
  float v20; // [esp+50h] [ebp-18h] BYREF
  float v21; // [esp+54h] [ebp-14h]
  float v22; // [esp+58h] [ebp-10h]
  float v23; // [esp+5Ch] [ebp-Ch] BYREF
  float v24; // [esp+60h] [ebp-8h]
  float v25; // [esp+64h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3);
  for ( i = result; result; i = result )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 28))(i);
    if ( v8 == 0xFFFF
      || (*(_WORD *)(168 * v8 + *(_DWORD *)(this + 36) + 8) & 4) != 0 && (*(_BYTE *)(this + 208) != 0) == -1 )
    {
      v13 = a5;
    }
    else
    {
      (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)i + 88))(i, v18, v19, 2);
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 136))(i);
      sub_101EDC00(a2, v9, v17);
      sub_101F1070(v17, v18, v19, &v23, &v20);
      v10 = v23;
      if ( v23 > (double)*a4 )
        v10 = *a4;
      *a4 = v10;
      v11 = v24;
      if ( v24 > (double)a4[1] )
        v11 = a4[1];
      a4[1] = v11;
      v12 = v25;
      if ( v25 > (double)a4[2] )
        v12 = a4[2];
      v13 = a5;
      a4[2] = v12;
      v14 = v20;
      if ( v20 < (double)*a5 )
        v14 = *a5;
      *a5 = v14;
      v15 = v21;
      if ( v21 < (double)a5[1] )
        v15 = a5[1];
      a5[1] = v15;
      v16 = v22;
      if ( v22 < (double)a5[2] )
        v16 = a5[2];
      a5[2] = v16;
    }
    sub_10085310(a2, i, a4, v13);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)i + 120))(i);
  }
  return result;
}
