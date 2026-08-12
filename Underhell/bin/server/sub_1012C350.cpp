_DWORD *__stdcall sub_1012C350(char *a1, float *a2, float a3, int a4)
{
  double v4; // st7
  _DWORD *v5; // esi
  _BYTE *v6; // ecx
  float *v7; // eax
  double v8; // st7
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  float v15; // [esp+0h] [ebp-10h] BYREF
  float v16; // [esp+4h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-8h]
  _DWORD *v18; // [esp+Ch] [ebp-4h]
  float v19; // [esp+20h] [ebp+10h]

  v4 = a3 * a3;
  v19 = v4;
  v18 = 0;
  if ( 0.0 == v4 )
    v19 = 3221225500.0;
  v5 = sub_1012BC90(&dword_1069E3E0, 0, a1);
  if ( v5 )
  {
    while ( !v5[6] )
    {
LABEL_16:
      v5 = sub_1012BC90(&dword_1069E3E0, (int)v5, a1);
      if ( !v5 )
        return v18;
    }
    if ( !sub_100E8AC0(v5) || (v6 = v5 + 80, v5 == (_DWORD *)-320) )
    {
      if ( (v5[63] & 0x800) != 0 )
        sub_100DAE60((int)v5);
      v15 = *((float *)v5 + 145);
      v16 = *((float *)v5 + 146);
      v8 = *((float *)v5 + 147);
    }
    else
    {
      if ( a4 == 1 )
      {
        sub_10111A60(v6, a2, &v15);
        goto LABEL_14;
      }
      v7 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 32))(v6);
      v15 = *v7;
      v16 = v7[1];
      v8 = v7[2];
    }
    v17 = v8;
LABEL_14:
    v9 = v15 - *a2;
    v10 = v9 * v9;
    v11 = v16 - a2[1];
    v12 = v17 - a2[2];
    v13 = v12 * v12 + v11 * v11 + v10;
    if ( v13 < v19 )
    {
      v19 = v13;
      v18 = v5;
    }
    goto LABEL_16;
  }
  return 0;
}
