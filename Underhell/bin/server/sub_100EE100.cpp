char __thiscall sub_100EE100(void *this, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ebx
  float *v15; // esi
  float *v16; // eax
  double v17; // st7
  float v19; // [esp+2Ch] [ebp-48h]
  float v20; // [esp+34h] [ebp-40h]
  float v21; // [esp+34h] [ebp-40h]
  _BYTE v22[12]; // [esp+44h] [ebp-30h] BYREF
  int v23[3]; // [esp+50h] [ebp-24h] BYREF
  int v24[3]; // [esp+5Ch] [ebp-18h] BYREF
  float v25; // [esp+68h] [ebp-Ch]
  float v26; // [esp+6Ch] [ebp-8h]
  float v27; // [esp+70h] [ebp-4h]
  float v28; // [esp+7Ch] [ebp+8h]
  float v29; // [esp+80h] [ebp+Ch]

  v4 = sub_100D7680((int)this);
  if ( !v4 )
    return 1;
  v6 = *(_DWORD *)(a2 + 36);
  if ( v6 == -1
    || off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 2] != v6 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 1] )
  {
    return 1;
  }
  v7 = sub_1041CA40(a3);
  v20 = v7;
  sub_1041A260(a4, v20);
  v28 = v7;
  v29 = sub_1041CA40(a3);
  v8 = v29 - sub_10418510(a4);
  if ( v8 >= 0.30000001 )
    v9 = 1.0;
  else
    v9 = 3.0 * (v8 * 3.3333333 * (v8 * 3.3333333))
       - v8 * 3.3333333 * (v8 * 3.3333333 * (v8 * 3.3333333) + v8 * 3.3333333 * (v8 * 3.3333333));
  v10 = v28;
  if ( v28 <= v9 )
  {
    v11 = 0.0;
    if ( v10 >= 0.0 )
      goto LABEL_13;
    v10 = 0.0;
  }
  else
  {
    v10 = v9;
    v11 = 0.0;
  }
  v28 = v10;
LABEL_13:
  v12 = *(_DWORD *)(a2 + 36);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (*(_DWORD *)(a2 + 36) & 0xFFF) + 1];
  v21 = v11;
  v19 = v10;
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1808))(
    v4,
    v13,
    LODWORD(v19),
    0.1,
    LODWORD(v21));
  if ( *(int *)(dword_106CE684 + 48) > 0 && *(_DWORD *)(dword_10698A5C + 48) )
  {
    if ( sub_1026A890(a2 + 36) )
    {
      v14 = sub_1026A890(a2 + 36);
      v15 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 504))(v4, v23);
      v16 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 504))(v14, v22);
      v25 = *v16 - *v15;
      v26 = v16[1] - v15[1];
      v27 = v16[2] - v15[2];
      off_10689714();
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v4 + 504))(v4, v24);
      v17 = v28 * 16.0 + 4.0;
      *(float *)v23 = v25 * v17 + *(float *)v24;
      *(float *)&v23[1] = v17 * v26 + *(float *)&v24[1];
      *(float *)&v23[2] = v17 * v27 + *(float *)&v24[2];
      sub_1011C790((int)v24, (int)v23, 4.0, 255, 255, 255, 0, 1, 0.12);
    }
  }
  return 1;
}
