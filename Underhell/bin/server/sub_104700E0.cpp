void __cdecl sub_104700E0()
{
  int v0; // eax

  v0 = unk_106991C4;
  *(_DWORD *)byte_106991A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106991A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106991C4 = 0;
  }
  *(_DWORD *)byte_106991A0 = &ConCommandBase::`vftable';
}
