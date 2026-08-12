void __cdecl sub_104799A0()
{
  int v0; // eax

  v0 = unk_106F0674;
  *(_DWORD *)byte_106F0650 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0650[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0674 = 0;
  }
  *(_DWORD *)byte_106F0650 = &ConCommandBase::`vftable';
}
