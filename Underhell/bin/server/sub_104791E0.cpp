void __cdecl sub_104791E0()
{
  int v0; // eax

  v0 = unk_106EDF6C;
  *(_DWORD *)byte_106EDF48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDF48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EDF6C = 0;
  }
  *(_DWORD *)byte_106EDF48 = &ConCommandBase::`vftable';
}
