int __userpurge sub_100C6420@<eax>(int a1@<ecx>, int a2@<ebx>, char *String2)
{
  const char *v4; // eax
  int result; // eax
  int *v6; // esi
  char *i; // eax
  int v8; // ebx
  int v9; // esi
  void (__thiscall *v10)(int, int, int, int, int); // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  signed int v18; // eax
  int v19; // ebx
  int v20; // edi
  char String[512]; // [esp+8h] [ebp-348h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-148h] BYREF
  int v24; // [esp+30Ch] [ebp-44h]
  int v25; // [esp+314h] [ebp-3Ch]
  int v26; // [esp+318h] [ebp-38h]
  int v27; // [esp+32Ch] [ebp-24h]
  _DWORD Context[2]; // [esp+33Ch] [ebp-14h] BYREF
  int v29; // [esp+344h] [ebp-Ch]
  int *v30; // [esp+348h] [ebp-8h]
  __int16 v31; // [esp+34Ch] [ebp-4h]
  __int16 v32; // [esp+34Eh] [ebp-2h] BYREF

  if ( *(_WORD *)(a1 + 456) == 0xFFFF
    || (v4 = (const char *)sub_10231190(a1 + 456), (result = _stricmp(v4, String2)) != 0) )
  {
    sub_10231140(String2);
    *(_WORD *)(a1 + 456) = v32;
    v6 = (int *)(a1 + 432);
    v30 = v6;
    sub_100C4ED0(v6);
    if ( v6[2] >= 0 )
    {
      if ( *v6 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v6);
        *v6 = 0;
      }
      v6[1] = 0;
    }
    v6[4] = *v6;
    sub_100C2C50(&dword_10430978);
    (*(void (__thiscall **)(int, const char *, int, char *, int))(*(_DWORD *)dword_10413188 + 52))(
      dword_10413188,
      "GAME",
      1,
      String,
      512);
    for ( i = strtok(String, ";"); i; i = strtok(0, ";") )
    {
      sub_10228370(Buffer, 0x104u, "%s%s", (char)i);
      sub_10228240(Buffer, 92);
      _strlwr(Buffer);
      v8 = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 8))(
             dword_10413188 + 4,
             Buffer,
             "rb",
             0);
      if ( v8 )
      {
        sub_1022EDF0(0, 0, 0);
        v9 = *v6 + 84 * sub_100C4BD0(v6, v6[3]);
        v10 = **(void (__thiscall ***)(int, int, int, int, int))(dword_10413188 + 4);
        v29 = v9;
        v10(dword_10413188 + 4, v9 + 56, 24, v8, a2);
        if ( *(_DWORD *)(v9 + 56) != 1145258838 )
          Error("Invalid file id for %s\n", Buffer);
        if ( *(_DWORD *)(v9 + 60) != 1 )
          Error("Invalid file version for %s\n", Buffer);
        v11 = *(_DWORD *)(v9 + 72);
        if ( v11 > 0x10000 )
          Error("Invalid directory size %d for %s\n", v11, Buffer);
        v12 = *(_DWORD *)(v9 + 72);
        v13 = 12 * v12;
        sub_100C1DB0((int *)(v9 + 28), v12);
        sub_1022E770(v13);
        a2 = v8;
        (**(void (__thiscall ***)(int, int, int))(dword_10413188 + 4))(dword_10413188 + 4, v24, v13);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(dword_10413188 + 4, v8);
        v14 = *(_DWORD *)(v29 + 72);
        v15 = v24 + v26 - v27;
        *(_DWORD *)(v9 + 40) = 0;
        sub_100C2A80((int *)(v9 + 28), 0, v14, 0);
        if ( v14 > 0 )
        {
          v16 = 0;
          do
          {
            v17 = *(_DWORD *)(v9 + 28);
            *(_DWORD *)(v17 + v16) = *(_DWORD *)(v16 + v15);
            *(_DWORD *)(v17 + v16 + 4) = *(_DWORD *)(v16 + v15 + 4);
            *(_DWORD *)(v17 + v16 + 8) = *(_DWORD *)(v16 + v15 + 8);
            v16 += 12;
            --v14;
          }
          while ( v14 );
        }
        v18 = *(_DWORD *)(v9 + 40);
        *(_BYTE *)(v9 + 52) = 0;
        if ( v18 > 1 )
        {
          Context[0] = *(_DWORD *)(v9 + 48);
          Context[1] = (char *)&v32 + 1;
          qsort_s(*(void **)(v9 + 28), v18, 0xCu, (_CoreCrtSecureSearchSortCompareFunction)CompareFunction, Context);
        }
        sub_10231140(Buffer);
        *(_WORD *)(v29 + 80) = v31;
        if ( v25 >= 0 && v24 )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24);
        v6 = v30;
      }
    }
    v19 = v6[3];
    sub_100C4ED0(&dword_1043098C);
    result = sub_100C60E0(&dword_1043098C, dword_10430998, v19, 0);
    if ( v19 > 0 )
    {
      v20 = 0;
      do
      {
        result = sub_100C5BE0(v20 + dword_1043098C, v20 + *v6);
        v20 += 84;
        --v19;
      }
      while ( v19 );
    }
  }
  return result;
}
