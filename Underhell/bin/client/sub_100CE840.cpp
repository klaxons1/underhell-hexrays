_BYTE *__thiscall sub_100CE840(int this, int a2, char a3, void *Src)
{
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD v14[2]; // [esp+8h] [ebp-8h] BYREF
  char *Srca; // [esp+20h] [ebp+10h]

  v5 = (_BYTE *)sub_100DDA40(84);
  if ( v5 && (v6 = sub_100CE3F0(v5)) != 0 )
    v7 = v6;
  else
    v7 = 0;
  Srca = (char *)sub_1022B4C0("text", (int)Locale);
  v7[72] = strstr(Srca, "%") != 0;
  if ( sub_1022A800("header", 0) )
    v8 = -1;
  else
    v8 = *(_DWORD *)(a2 + 60) - 1;
  *((_DWORD *)v7 + 8) = v8;
  *((_DWORD *)v7 + 6) = sub_1022A800("w", 150);
  *((_DWORD *)v7 + 4) = sub_1022A800("x", 0);
  *((_DWORD *)v7 + 5) = sub_1022A800("y", 0);
  v9 = sub_1022B4C0("size", (int)"small");
  *((_DWORD *)v7 + 19) = 0;
  if ( v9 )
  {
    v14[0] = v9;
    v10 = sub_10009730((unsigned __int8 (__cdecl **)(int, int))(this + 64), (int)v14);
    if ( v10 != -1 )
      *((_DWORD *)v7 + 19) = *(_DWORD *)(*(_DWORD *)(this + 68) + 24 * v10 + 20);
  }
  v11 = sub_1022B4C0("align", (int)"left");
  *((_DWORD *)v7 + 20) = 0;
  if ( v11 )
  {
    v14[0] = v11;
    v12 = sub_10009730((unsigned __int8 (__cdecl **)(int, int))(this + 100), (int)v14);
    if ( v12 != -1 )
      *((_DWORD *)v7 + 20) = *(_DWORD *)(*(_DWORD *)(this + 104) + 24 * v12 + 20);
  }
  sub_1022D0A0(Srca);
  if ( a3 )
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v7 + 4))(v7, *(_DWORD *)(this + 4));
  return v7;
}
