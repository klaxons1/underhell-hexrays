int __thiscall sub_100D0000(char *this, int a2)
{
  int result; // eax
  unsigned __int8 (__cdecl **v4)(int, int); // edi
  const char *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  const char *v10; // ecx
  int v11; // eax
  char v12; // dl
  int v13; // eax
  int v14; // eax
  unsigned __int8 (__cdecl *v15)(int, int); // edx
  int v16; // esi
  _DWORD *v17; // ecx
  unsigned __int8 (__cdecl *v18)(int, int); // ecx
  int v19; // edx
  unsigned __int8 (__cdecl *v20)(int, int); // edx
  int *v21; // esi
  CHAR name[512]; // [esp+4h] [ebp-214h] BYREF
  HANDLE ImageA; // [esp+204h] [ebp-14h]
  unsigned __int8 (__cdecl *v24)(int, int); // [esp+208h] [ebp-10h] BYREF
  int v25; // [esp+20Ch] [ebp-Ch] BYREF
  int v26; // [esp+210h] [ebp-8h]
  int v27; // [esp+214h] [ebp-4h]

  result = sub_10229C90(a2);
  v27 = result;
  if ( result )
  {
    v4 = (unsigned __int8 (__cdecl **)(int, int))(this + 136);
    while ( 1 )
    {
      v5 = (const char *)sub_10229A00(result);
      v6 = *(_DWORD *)dword_10413188;
      v7 = sub_1022B4C0(0, (int)Locale);
      (*(void (__thiscall **)(int, int, const char *, CHAR *, int, _DWORD, _DWORD))(v6 + 48))(
        dword_10413188,
        v7,
        "GAME",
        name,
        512,
        0,
        0);
      ImageA = LoadImageA(0, name, 1u, 32, 32, 0x10u);
      if ( v5
        && (v8 = (*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(v5) + 1),
            (v9 = v8) != 0) )
      {
        v10 = v5;
        v11 = v8 - (_DWORD)v5;
        do
        {
          v12 = *v10;
          v10[v11] = *v10;
          ++v10;
        }
        while ( v12 );
        v13 = v9;
      }
      else
      {
        v13 = 0;
      }
      v25 = v13;
      v26 = (int)ImageA;
      sub_100CC1D0(v4, (int)&v25, &v24, (_BYTE *)&a2 + 3);
      v14 = sub_100CC520(v4);
      v15 = v24;
      v16 = 24 * v14;
      v17 = (_DWORD *)((char *)v4[1] + 24 * v14);
      v17[2] = v24;
      v17[1] = -1;
      *v17 = -1;
      v17[3] = 0;
      if ( v15 == (unsigned __int8 (__cdecl *)(int, int))-1 )
      {
        v4[4] = (unsigned __int8 (__cdecl *)(int, int))v14;
      }
      else
      {
        v18 = v4[1];
        v19 = 3 * (_DWORD)v15;
        if ( HIBYTE(a2) )
          *((_DWORD *)v18 + 2 * v19) = v14;
        else
          *((_DWORD *)v18 + 2 * v19 + 1) = v14;
      }
      sub_100CD560(v4, v14);
      v20 = v4[1];
      v4[5] = (unsigned __int8 (__cdecl *)(int, int))((char *)v4[5] + 1);
      v21 = (int *)((char *)v20 + v16 + 16);
      if ( v21 )
      {
        *v21 = v25;
        v21[1] = v26;
      }
      result = sub_1021F0F0(v27);
      v27 = result;
      if ( !result )
        break;
      result = v27;
    }
  }
  return result;
}
