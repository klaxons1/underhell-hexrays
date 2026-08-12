_DWORD *__stdcall sub_1012C480(int a1, char *a2, float *a3, float a4, int a5)
{
  double v5; // st7
  _DWORD *v7; // esi
  _BYTE *v8; // ecx
  float *v9; // eax
  double v10; // st7
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5
  float v15; // [esp+0h] [ebp-Ch] BYREF
  float v16; // [esp+4h] [ebp-8h]
  float v17; // [esp+8h] [ebp-4h]
  float v18; // [esp+20h] [ebp+14h]

  v5 = a4 * a4;
  v18 = v5;
  if ( 0.0 == v5 )
    return sub_1012BC90(&dword_1069E3E0, a1, a2);
  v7 = sub_1012BC90(&dword_1069E3E0, a1, a2);
  if ( !v7 )
    return 0;
  while ( !v7[6] )
  {
LABEL_15:
    v7 = sub_1012BC90(&dword_1069E3E0, (int)v7, a2);
    if ( !v7 )
      return 0;
  }
  if ( !sub_100E8AC0(v7) || (v8 = v7 + 80, v7 == (_DWORD *)-320) )
  {
    if ( (v7[63] & 0x800) != 0 )
      sub_100DAE60((int)v7);
    v15 = *((float *)v7 + 145);
    v16 = *((float *)v7 + 146);
    v10 = *((float *)v7 + 147);
  }
  else
  {
    if ( a5 == 1 )
    {
      sub_10111A60(v8, a3, &v15);
      goto LABEL_14;
    }
    v9 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 32))(v8);
    v15 = *v9;
    v16 = v9[1];
    v10 = v9[2];
  }
  v17 = v10;
LABEL_14:
  v11 = v15 - *a3;
  v12 = v11 * v11;
  v13 = v16 - a3[1];
  v14 = v17 - a3[2];
  if ( v14 * v14 + v13 * v13 + v12 >= v18 )
    goto LABEL_15;
  return v7;
}
