char __thiscall sub_10180FE0(int (__thiscall ***this)(_DWORD))
{
  int v2; // ebx
  int v3; // eax
  int i; // esi
  const char *v6; // eax
  int v7; // eax
  void *v8; // [esp-Ch] [ebp-18h]
  int v9; // [esp+8h] [ebp-4h]

  if ( sub_10229D00(32) )
    v2 = sub_10229D20("scripts/hudanimations_manifest.txt");
  else
    v2 = 0;
  if ( dword_1047C968 )
    v3 = dword_1047C968 + 4;
  else
    v3 = 0;
  if ( (unsigned __int8)sub_10229D70(v3, "scripts/hudanimations_manifest.txt", "GAME") )
  {
    LOBYTE(v9) = 1;
    for ( i = sub_10229C90(v2); i; i = sub_1021F0F0(i) )
    {
      v6 = (const char *)sub_10229A00(i);
      if ( !_stricmp(v6, "file") )
      {
        v8 = (void *)sub_1022B4C0(0, (int)Locale);
        v7 = (**this)(this);
        sub_102487F0(v7, v8, v9);
        LOBYTE(v9) = 0;
      }
    }
    sub_1022AF00(v2);
    return 1;
  }
  else
  {
    sub_1022AF00(v2);
    return 0;
  }
}
