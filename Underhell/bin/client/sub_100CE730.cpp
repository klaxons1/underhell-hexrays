_DWORD *__thiscall sub_100CE730(unsigned __int8 (__cdecl **this)(int, int), int a2, char a3, int a4)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _DWORD *v6; // esi
  void *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 (__cdecl **v10)(int, int); // edi
  int v11; // eax
  int v13; // [esp+8h] [ebp-Ch] BYREF
  unsigned __int8 (__cdecl **v14)(int, int); // [esp+10h] [ebp-4h]

  v14 = this;
  v4 = (_BYTE *)sub_100DDA40(76);
  if ( v4 && (v5 = sub_100CE450(v4)) != 0 )
    v6 = v5;
  else
    v6 = 0;
  v7 = (void *)sub_1022B4C0("name", (int)Locale);
  sub_1022D0A0(v7);
  if ( sub_1022A800("header", 0) )
    v8 = -1;
  else
    v8 = *(_DWORD *)(a2 + 60) - 1;
  v6[8] = v8;
  v6[6] = sub_1022A800("w", 24);
  v6[7] = sub_1022A800("h", 24);
  v6[4] = sub_1022A800("x", 0);
  v6[5] = sub_1022A800("y", 0);
  v9 = sub_1022CF00(v6 + 14);
  v10 = v14;
  if ( v9 )
  {
    v13 = v9;
    v11 = sub_100CCF40(v14 + 34, (int)&v13);
  }
  else
  {
    v11 = -1;
  }
  v6[18] = 0;
  if ( v11 != -1 )
    v6[18] = *((_DWORD *)v10[35] + 6 * v11 + 5);
  if ( a3 )
    (*(void (__thiscall **)(_DWORD *, unsigned __int8 (__cdecl *)(int, int)))(*v6 + 4))(v6, v10[1]);
  return v6;
}
