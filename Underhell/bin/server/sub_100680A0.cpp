void *__thiscall sub_100680A0(int this, char a2, char *Source, _DWORD *a4, int a5, char *a6, const char *Src, char a8)
{
  bool (__cdecl **v9)(int, int); // eax
  bool (__cdecl **v10)(int, int); // eax
  char *v11; // eax
  void *result; // eax

  *(_BYTE *)this = a2;
  sub_104299C0((char *)(this + 1), Source, 0x40u);
  v9 = (bool (__cdecl **)(int, int))sub_10184390(28);
  if ( v9 )
    v10 = sub_10067D10(v9, a4);
  else
    v10 = 0;
  *(_DWORD *)(this + 132) = v10;
  v11 = a6;
  if ( !a6 )
    v11 = "NULL";
  sub_104299C0((char *)(this + 65), v11, 0x40u);
  *(_DWORD *)(this + 136) = *(_DWORD *)a5;
  *(_DWORD *)(this + 140) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a5 + 16);
  *(_BYTE *)(this + 156) = *(_BYTE *)(a5 + 20);
  result = sub_10065480((_DWORD *)this, Src);
  *(_BYTE *)(this + 164) = a8;
  return result;
}
