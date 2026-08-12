_DWORD *__stdcall sub_1012C1F0(int a1, char *String2, float *a3, float a4, int a5, int a6, int a7, int a8)
{
  double v8; // st7
  _DWORD *v10; // esi
  _BYTE *v11; // ecx
  float *v12; // eax
  double v13; // st7
  double v14; // st4
  double v15; // st7
  double v16; // st4
  double v17; // st5
  float v18; // [esp+0h] [ebp-Ch] BYREF
  float v19; // [esp+4h] [ebp-8h]
  float v20; // [esp+8h] [ebp-4h]
  float v21; // [esp+20h] [ebp+14h]

  v8 = a4 * a4;
  v21 = v8;
  if ( 0.0 == v8 )
    return sub_1012BF20(&dword_1069E3E0, a1, String2, a5, a6, a7, 0);
  v10 = sub_1012BF20(&dword_1069E3E0, a1, String2, a5, a6, a7, 0);
  if ( !v10 )
    return 0;
  while ( !v10[6] )
  {
LABEL_15:
    v10 = sub_1012BF20(&dword_1069E3E0, (int)v10, String2, a5, a6, a7, 0);
    if ( !v10 )
      return 0;
  }
  if ( !sub_100E8AC0(v10) || (v11 = v10 + 80, v10 == (_DWORD *)-320) )
  {
    if ( (v10[63] & 0x800) != 0 )
      sub_100DAE60((int)v10);
    v18 = *((float *)v10 + 145);
    v19 = *((float *)v10 + 146);
    v13 = *((float *)v10 + 147);
  }
  else
  {
    if ( a8 == 1 )
    {
      sub_10111A60(v11, a3, &v18);
      goto LABEL_14;
    }
    v12 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v11 + 32))(v11);
    v18 = *v12;
    v19 = v12[1];
    v13 = v12[2];
  }
  v20 = v13;
LABEL_14:
  v14 = v18 - *a3;
  v15 = v14 * v14;
  v16 = v19 - a3[1];
  v17 = v20 - a3[2];
  if ( v17 * v17 + v16 * v16 + v15 >= v21 )
    goto LABEL_15;
  return v10;
}
