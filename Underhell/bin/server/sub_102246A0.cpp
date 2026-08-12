char __stdcall sub_102246A0(int a1, int a2, char *Destination, size_t Count)
{
  char *v4; // eax
  bool v5; // bl
  int v6; // eax
  _BYTE *v7; // eax
  char Source[66]; // [esp+Ch] [ebp-44h] BYREF
  char v10; // [esp+4Eh] [ebp-2h]
  char v11; // [esp+4Fh] [ebp-1h]

  v11 = 1;
  v10 = 0;
  Source[0] = 0;
  if ( sub_10418880(a1) == 1 || sub_10418880(a1) == 2 )
    v11 = 0;
  else
    v10 = sub_10418CD0(Source, 0x40u);
  v4 = (char *)sub_104183D0(a1);
  sub_104299C0(Destination, v4, Count);
  v5 = 1;
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
  v7 = (_BYTE *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                  dword_106B31D0,
                  v6,
                  "english");
  if ( v7 && *v7 )
    v5 = sub_10429310(v7) == 1;
  if ( !*(_DWORD *)(dword_106C4164 + 48) && v5 )
    return 1;
  if ( v11 )
  {
    if ( v10 )
      sub_104299C0(Destination, Source, Count);
    return 1;
  }
  return 0;
}
