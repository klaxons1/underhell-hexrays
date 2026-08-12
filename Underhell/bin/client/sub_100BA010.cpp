// bad sp value at call has been detected, the output may be wrong!
int __thiscall sub_100BA010(void *this, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  unsigned int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  int v13; // ebx
  wchar_t *v14; // ebx
  const char *v15; // edi
  const wchar_t *v16; // eax
  signed int v17; // eax
  char v18; // cl
  int result; // eax
  _WORD *n; // eax
  unsigned int v21; // kr08_4
  char v22; // al
  int *i; // eax
  unsigned int v24; // kr0C_4
  char v25; // al
  int *k; // eax
  int *m; // eax
  unsigned int v28; // kr10_4
  char v29; // al
  int *j; // eax
  wchar_t Destination[255]; // [esp+Ch] [ebp-140Ch] BYREF
  char v32; // [esp+20Ah] [ebp-120Eh] BYREF
  _BYTE v33[512]; // [esp+20Ch] [ebp-120Ch] BYREF
  _BYTE v34[512]; // [esp+40Ch] [ebp-100Ch] BYREF
  _BYTE v35[512]; // [esp+60Ch] [ebp-E0Ch] BYREF
  _BYTE v36[512]; // [esp+80Ch] [ebp-C0Ch] BYREF
  int v37[512]; // [esp+A0Ch] [ebp-A0Ch] BYREF
  _WORD v38[256]; // [esp+120Ch] [ebp-20Ch] BYREF
  void *v39; // [esp+140Ch] [ebp-Ch]
  int v40; // [esp+1410h] [ebp-8h] BYREF
  char *v41; // [esp+1414h] [ebp-4h]
  int v42; // [esp+1420h] [ebp+8h]

  v39 = this;
  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 >= 8 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v4 = (unsigned __int8)v3;
    *(_DWORD *)(a2 + 20) = v2 - 8;
    if ( v2 == 8 )
    {
      v6 = *(_DWORD **)(a2 + 24);
      v7 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v6 == v7 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v6 + 1;
      }
      else if ( v6 <= v7 )
      {
        *(_DWORD *)(a2 + 16) = *v6;
        *(_DWORD *)(a2 + 24) = v6 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
      goto LABEL_19;
    }
    v5 = v3 >> 8;
    goto LABEL_18;
  }
  v8 = *(_DWORD **)(a2 + 28);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = 8 - v2;
  v11 = *(_DWORD **)(a2 + 24);
  if ( v11 == v8 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v11 > v8 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 16) = *v11;
  }
  *(_DWORD *)(a2 + 24) = v11 + 1;
LABEL_15:
  if ( !*(_BYTE *)(a2 + 4) )
  {
    v12 = *(_DWORD *)(a2 + 16);
    v13 = (v12 & dword_1039BF80[v10]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v10;
    v4 = v13 | v9;
    v5 = v12 >> v10;
LABEL_18:
    *(_DWORD *)(a2 + 16) = v5;
    goto LABEL_19;
  }
  v4 = 0;
LABEL_19:
  v40 = v4;
  v42 = 0;
  v14 = Destination;
  v41 = &v32;
  do
  {
    sub_1022C220(v37, 2048, 0, 0);
    v15 = (const char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), int *, int *))(*off_103E6DA4)[2])(
                          off_103E6DA4,
                          v37,
                          &v40);
    v16 = (const wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                             dword_1047CA78,
                             v15);
    if ( v16 )
    {
      wcsncpy(v14, v16, 0x100u);
      *(_WORD *)v41 = 0;
    }
    else
    {
      if ( v42 )
      {
        v17 = strlen(v15) - 1;
        if ( v17 >= 0 )
        {
          v18 = v15[v17];
          if ( v18 == 10 || v18 == 13 )
            v15[v17] = 0;
        }
      }
      (*(void (__thiscall **)(int, const char *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
        dword_1047CA78,
        v15,
        v14,
        512);
    }
    v41 += 512;
    result = v42 + 1;
    v14 += 256;
    v42 = result;
  }
  while ( result < 5 );
  if ( *(_DWORD *)(dword_1043000C + 48) )
  {
    result = v40 - 1;
    switch ( v40 )
    {
      case 1:
        (*(void (__cdecl **)(int, _WORD *, int, wchar_t *, int, _BYTE *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA78 + 32))(
          dword_1047CA78,
          v38,
          512,
          Destination,
          4,
          v33,
          v34,
          v35,
          v36);
        (*(void (__thiscall **)(int, _WORD *, int *, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          v38,
          v37,
          2048);
        v21 = strlen((const char *)v37);
        if ( v21 )
        {
          v22 = v36[v21 + 511];
          if ( v22 != 10 && v22 != 13 )
            sub_10228100((int)v37, "\n", 2048, 1);
        }
        for ( i = v37; *(_BYTE *)i; i = (int *)((char *)i + 1) )
        {
          if ( *(_BYTE *)i == 13 )
            *(_BYTE *)i = 10;
        }
        goto LABEL_66;
      case 2:
        (*(void (__cdecl **)(int, _WORD *, int, wchar_t *, int, _BYTE *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA78 + 32))(
          dword_1047CA78,
          v38,
          512,
          Destination,
          4,
          v33,
          v34,
          v35,
          v36);
        (*(void (__thiscall **)(int, _WORD *, int *, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          v38,
          v37,
          2048);
        v28 = strlen((const char *)v37);
        if ( v28 )
        {
          v29 = v36[v28 + 511];
          if ( v29 != 10 && v29 != 13 )
            sub_10228100((int)v37, "\n", 2048, 1);
        }
        for ( j = v37; *(_BYTE *)j; j = (int *)((char *)j + 1) )
        {
          if ( *(_BYTE *)j == 13 )
            *(_BYTE *)j = 10;
        }
        goto LABEL_66;
      case 3:
        (*(void (__cdecl **)(int, _WORD *, int, wchar_t *, int, _BYTE *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA78 + 32))(
          dword_1047CA78,
          v38,
          512,
          Destination,
          4,
          v33,
          v34,
          v35,
          v36);
        (*(void (__thiscall **)(int, _WORD *, int *, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          v38,
          v37,
          2048);
        v24 = strlen((const char *)v37);
        if ( v24 )
        {
          v25 = v36[v24 + 511];
          if ( v25 != 10 && v25 != 13 )
            sub_10228100((int)v37, "\n", 2048, 1);
        }
        for ( k = v37; *(_BYTE *)k; k = (int *)((char *)k + 1) )
        {
          if ( *(_BYTE *)k == 13 )
            *(_BYTE *)k = 10;
        }
        (*(void (**)(void *, _DWORD, const char *, ...))(*(_DWORD *)v39 + 68))(v39, 0, "%s", v37);
        for ( m = v37; *(_BYTE *)m; m = (int *)((char *)m + 1) )
        {
          if ( *(_BYTE *)m == 13 )
            *(_BYTE *)m = 10;
        }
LABEL_66:
        result = Msg("%s", (const char *)v37);
        break;
      case 4:
        (*(void (__cdecl **)(int, _WORD *, int, wchar_t *, int, _BYTE *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA78 + 32))(
          dword_1047CA78,
          v38,
          512,
          Destination,
          4,
          v33,
          v34,
          v35,
          v36);
        for ( n = v38; *n; ++n )
        {
          if ( *n == 13 )
            *n = 10;
        }
        result = ((int (__thiscall *)(int (__stdcall ***)(int, int, int, int), _WORD *))(*off_103E7304)[1])(
                   off_103E7304,
                   v38);
        break;
      default:
        return result;
    }
  }
  return result;
}
