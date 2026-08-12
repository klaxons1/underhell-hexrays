char __userpurge sub_10232840@<al>(int a1@<ecx>, double a2@<st0>, int a3, char *String2, char a5)
{
  char *v5; // eax
  bool v7; // zf
  int v9; // edi
  const char *v10; // eax
  const char *v11; // eax
  int v12; // eax
  unsigned int v13; // esi
  int *v14; // ecx
  _DWORD *v15; // eax
  const char *v16; // [esp-Ch] [ebp-10h]

  v5 = String2;
  v7 = String2 == *(char **)(a1 + 800);
  *(_BYTE *)(a1 + 877) = 1;
  *(_BYTE *)(a1 + 832) = v7;
  if ( !String2 )
  {
    if ( a5 )
    {
      sub_10230940(a1, a3);
      return 0;
    }
    v5 = (char *)String;
  }
  v9 = sub_100BDF40(a3, v5);
  if ( v9 == -1 )
  {
    v10 = String2;
    if ( !String2 )
      v10 = String;
    v16 = v10;
    v11 = sub_100D6390((_DWORD *)a3);
    Warning("%s: unknown scripted sequence \"%s\"\n", v11, v16);
    v9 = 0;
  }
  v12 = sub_100C0B90(a3, v9);
  if ( v12 == -1 )
    v12 = 1;
  sub_10033690(a3, a2, v12, v9, v12, v12);
  if ( *(_BYTE *)(a1 + 902) && String2 != *(char **)(a1 + 804) )
  {
    *(_BYTE *)(a1 + 902) = 0;
    v13 = *(_DWORD *)(a3 + 192) & 0xFFFFFFDF;
    if ( *(_DWORD *)(a3 + 192) != v13 )
    {
      if ( *(_BYTE *)(a3 + 84) )
      {
        *(_BYTE *)(a3 + 88) |= 1u;
      }
      else
      {
        v14 = *(int **)(a3 + 24);
        if ( v14 )
          sub_100194B0(v14, 192);
      }
      *(_DWORD *)(a3 + 192) = v13;
    }
    v15 = *(_DWORD **)(a3 + 24);
    if ( v15 )
      *v15 |= 0x80u;
    sub_100D8500((_DWORD *)a3);
    sub_100EAB80((_DWORD *)a3, 8);
  }
  return 1;
}
