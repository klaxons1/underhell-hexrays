_DWORD *__stdcall sub_1012C0B0(char *String2, float *a2, float a3, int a4, int a5, int a6, int a7)
{
  double v7; // st7
  _DWORD *v8; // esi
  _BYTE *v9; // ecx
  float *v10; // eax
  double v11; // st7
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  double v16; // st7
  float v18; // [esp+0h] [ebp-10h] BYREF
  float v19; // [esp+4h] [ebp-Ch]
  float v20; // [esp+8h] [ebp-8h]
  _DWORD *v21; // [esp+Ch] [ebp-4h]
  float v22; // [esp+20h] [ebp+10h]

  v21 = 0;
  v7 = a3 * a3;
  v22 = v7;
  if ( 0.0 == v7 )
    v22 = 3221225500.0;
  v8 = sub_1012BF20(&dword_1069E3E0, 0, String2, a4, a5, a6, 0);
  if ( v8 )
  {
    while ( !v8[6] )
    {
LABEL_16:
      v8 = sub_1012BF20(&dword_1069E3E0, (int)v8, String2, a4, a5, a6, 0);
      if ( !v8 )
        return v21;
    }
    if ( !sub_100E8AC0(v8) || (v9 = v8 + 80, v8 == (_DWORD *)-320) )
    {
      if ( (v8[63] & 0x800) != 0 )
        sub_100DAE60((int)v8);
      v18 = *((float *)v8 + 145);
      v19 = *((float *)v8 + 146);
      v11 = *((float *)v8 + 147);
    }
    else
    {
      if ( a7 == 1 )
      {
        sub_10111A60(v9, a2, &v18);
        goto LABEL_14;
      }
      v10 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 32))(v9);
      v18 = *v10;
      v19 = v10[1];
      v11 = v10[2];
    }
    v20 = v11;
LABEL_14:
    v12 = v18 - *a2;
    v13 = v12 * v12;
    v14 = v19 - a2[1];
    v15 = v20 - a2[2];
    v16 = v15 * v15 + v14 * v14 + v13;
    if ( v16 < v22 )
    {
      v22 = v16;
      v21 = v8;
    }
    goto LABEL_16;
  }
  return v21;
}
