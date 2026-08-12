int __cdecl __init_numeric(int a1)
{
  int v1; // esi
  int *v2; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // esi
  LCID v7; // esi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  char *v12; // eax
  char v13; // cl
  char *v14; // esi
  int v15[2]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-8h]
  _DWORD *v17; // [esp+18h] [ebp-4h]

  v1 = a1;
  v15[0] = a1;
  v15[1] = 0;
  if ( *(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 24) )
  {
    v2 = (int *)sub_100DD9C0(1, 80);
    if ( !v2 )
      return 1;
    qmemcpy(v2, *(const void **)(a1 + 188), 0x50u);
    v4 = (_DWORD *)sub_100DDA40(4);
    v16 = v4;
    if ( !v4 )
    {
      sub_10034930((int)v2);
      return 1;
    }
    *v4 = 0;
    if ( !*(_DWORD *)(a1 + 28) )
    {
      *v2 = (int)off_103FEA00;
      v2[1] = (int)off_103FEA04;
      v2[2] = (int)off_103FEA08;
      v2[12] = (int)off_103FEA30;
      v17 = 0;
      v2[13] = (int)off_103FEA34;
LABEL_26:
      v1 = a1;
      *v16 = 1;
      if ( v17 )
        *v17 = 1;
      goto LABEL_28;
    }
    v5 = (_DWORD *)sub_100DDA40(4);
    v17 = v5;
    if ( !v5 )
    {
      v6 = 1;
LABEL_11:
      sub_10034930((int)v2);
      sub_10034930((int)v16);
      return v6;
    }
    *v5 = 0;
    v7 = *(unsigned __int16 *)(a1 + 62);
    v8 = __getlocaleinfo((struct localeinfo_struct *)v15, 1, v7, 0xEu, v2);
    v9 = __getlocaleinfo((struct localeinfo_struct *)v15, 1, v7, 0xFu, v2 + 1) | v8;
    v10 = __getlocaleinfo((struct localeinfo_struct *)v15, 1, v7, 0x10u, v2 + 2) | v9;
    v11 = __getlocaleinfo((struct localeinfo_struct *)v15, 2, v7, 0xEu, v2 + 12) | v10;
    if ( v11 | __getlocaleinfo((struct localeinfo_struct *)v15, 2, v7, 0xFu, v2 + 13) )
    {
      __free_lconv_num(v2);
      v6 = -1;
      goto LABEL_11;
    }
    v12 = (char *)v2[2];
    while ( 1 )
    {
      if ( !*v12 )
        goto LABEL_26;
      v13 = *v12;
      if ( *v12 >= 48 && v13 <= 57 )
        break;
      if ( v13 == 59 )
      {
        v14 = v12;
        do
        {
          *v14 = v14[1];
          ++v14;
        }
        while ( *v14 );
      }
      else
      {
LABEL_18:
        ++v12;
      }
    }
    *v12 = v13 - 48;
    goto LABEL_18;
  }
  v17 = 0;
  v16 = 0;
  v2 = (int *)&off_103FEA00;
LABEL_28:
  if ( *(_DWORD *)(v1 + 180) )
    InterlockedDecrement(*(volatile LONG **)(v1 + 180));
  if ( *(_DWORD *)(v1 + 176) )
  {
    if ( !InterlockedDecrement(*(volatile LONG **)(v1 + 176)) )
    {
      sub_10034930(*(_DWORD *)(v1 + 176));
      sub_10034930(*(_DWORD *)(v1 + 188));
    }
  }
  *(_DWORD *)(v1 + 180) = v17;
  *(_DWORD *)(v1 + 176) = v16;
  *(_DWORD *)(v1 + 188) = v2;
  return 0;
}
