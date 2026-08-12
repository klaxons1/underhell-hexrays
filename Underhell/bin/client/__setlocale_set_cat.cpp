int __usercall _setlocale_set_cat@<eax>(int a1@<ecx>, _DWORD *a2@<esi>, char *a3)
{
  int v4; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // ecx
  int v8; // ecx
  int *v9; // eax
  int v10; // edx
  void *v11; // edx
  _DWORD *v12; // eax
  unsigned int i; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-4h] [ebp-1D4h]
  _BYTE v18[8]; // [esp+8h] [ebp-1C8h] BYREF
  int v19; // [esp+10h] [ebp-1C0h]
  int v20; // [esp+18h] [ebp-1B8h]
  int v21; // [esp+1Ch] [ebp-1B4h]
  _WORD Src[4]; // [esp+20h] [ebp-1B0h] BYREF
  _DWORD *v23; // [esp+28h] [ebp-1A8h]
  int v24; // [esp+2Ch] [ebp-1A4h] BYREF
  void *v25; // [esp+34h] [ebp-19Ch]
  char *Str2; // [esp+38h] [ebp-198h]
  int v27; // [esp+3Ch] [ebp-194h]
  int v28; // [esp+40h] [ebp-190h]
  int v29; // [esp+44h] [ebp-18Ch]
  WORD Buf1[128]; // [esp+48h] [ebp-188h] BYREF
  char Str1[132]; // [esp+148h] [ebp-88h] BYREF

  v28 = a1;
  Str2 = a3;
  v4 = _getptd();
  if ( !_expandlocale(a3, Str1, 0x83u, Src, &v24) )
    return 0;
  v6 = &a2[4 * a1];
  if ( strcmp(Str1, (const char *)v6[18]) )
  {
    v29 = strlen(Str1) + 5;
    v27 = sub_100DDA40(v29);
    if ( v27 )
    {
      Str2 = (char *)v6[18];
      v23 = &a2[v28 + 3];
      v20 = *v23;
      v25 = (char *)a2 + 6 * v28 + 36;
      memcpy_0(v18, v25, 6u);
      v21 = a2[1];
      if ( strcpy_s((char *)(v27 + 4), v29 - 4, Str1) )
        _invoke_watson(0, 0, 0, 0, 0);
      v7 = v23;
      v6[18] = v27 + 4;
      *v7 = Src[0];
      memcpy_0(v25, Src, 6u);
      if ( v28 == 2 )
      {
        v29 = 0;
        a2[1] = v24;
        v8 = *(_DWORD *)(v4 + 496);
        v25 = *(void **)(v4 + 500);
        v9 = (int *)(v4 + 464);
        while ( a2[1] != *v9 )
        {
          v10 = *v9;
          ++v29;
          *v9 = v8;
          v19 = v10;
          v11 = (void *)v9[1];
          v9[1] = (int)v25;
          v8 = v19;
          v9 += 2;
          v25 = v11;
          if ( v29 >= 5 )
            goto LABEL_14;
        }
        if ( v29 )
        {
          v12 = (_DWORD *)(v4 + 8 * v29 + 464);
          *(_DWORD *)(v4 + 464) = *v12;
          *(_DWORD *)(v4 + 468) = v12[1];
          *v12 = v8;
          v12[1] = v25;
        }
LABEL_14:
        if ( v29 == 5 )
        {
          if ( __crtGetStringTypeA(0, 1u, &byte_103AD6E0, 127, Buf1, a2[1], a2[5], 1) )
          {
            for ( i = 0; i < 0x7F; ++i )
              Buf1[i] &= 0x1FFu;
            *(_DWORD *)(v4 + 468) = memcmp(Buf1, Buf2, 0xFEu) == 0;
          }
          else
          {
            *(_DWORD *)(v4 + 468) = 0;
          }
          *(_DWORD *)(v4 + 464) = a2[1];
        }
        a2[42] = *(_DWORD *)(v4 + 468);
      }
      if ( v28 == 1 )
        a2[2] = v24;
      if ( !((int (__cdecl *)(_DWORD *))*(&off_103AD6A0 + 3 * v28))(a2) )
      {
        if ( Str2 != ::Str2 )
        {
          v14 = 2 * (v28 + 5);
          if ( !InterlockedDecrement((volatile LONG *)a2[4 * v28 + 20]) )
          {
            sub_10034930(a2[2 * v14]);
            sub_10034930(v6[21]);
            v6[19] = 0;
          }
        }
        v15 = v27;
        v16 = 2 * (v28 + 5);
        *(_DWORD *)v27 = 1;
        a2[2 * v16] = v15;
        return v6[18];
      }
      v17 = v27;
      v6[18] = Str2;
      sub_10034930(v17);
      *v23 = v20;
      a2[1] = v21;
    }
    return 0;
  }
  return v6[18];
}
