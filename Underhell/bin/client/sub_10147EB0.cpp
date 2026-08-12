char __thiscall sub_10147EB0(_DWORD *this, float *a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // dl
  unsigned __int8 v6; // cl
  double v7; // st7
  unsigned __int16 v8; // ax
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  float v13[18]; // [esp+0h] [ebp-54h] BYREF
  int v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]
  int v16; // [esp+50h] [ebp-4h]

  v4 = *((_BYTE *)a2 + 92);
  v13[0] = a2[5];
  v13[1] = a2[6];
  v6 = *((_BYTE *)a2 + 16);
  v13[2] = a2[7];
  v13[3] = a2[8];
  v14 = v6;
  v13[4] = a2[9];
  v13[5] = a2[11];
  v13[6] = a2[12];
  v15 = 0;
  v7 = a2[13];
  v16 = 0;
  v13[7] = v7;
  BYTE1(v14) = v4;
  v13[8] = a2[14];
  v13[9] = a2[15];
  v13[10] = a2[16];
  v13[11] = a2[17];
  v13[12] = a2[18];
  v13[13] = a2[22];
  v13[14] = a2[24];
  v13[15] = a2[25];
  v13[16] = a2[26];
  v13[17] = a2[27];
  a2 = v13;
  v8 = sub_10147370((int)this, (unsigned __int8 **)&a2);
  if ( v8 == 0xFFFF )
    return 0;
  v9 = *(_DWORD *)(this[1] + 12 * v8 + 8);
  (***(void (__thiscall ****)(_DWORD))(v9 + 76))(*(_DWORD *)(v9 + 76));
  *a3 = *(_DWORD *)(v9 + 76);
  _InterlockedExchangeAdd((volatile signed __int32 *)(*(_DWORD *)(v9 + 80) + 4), 1u);
  v10 = v15;
  *a4 = *(_DWORD *)(v9 + 80);
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  v11 = v16;
  if ( v16 && !_InterlockedDecrement((volatile signed __int32 *)(v16 + 4)) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  return 1;
}
