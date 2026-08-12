void __cdecl sub_104769E0()
{
  int v0; // eax

  v0 = unk_106DD7AC;
  *(_DWORD *)byte_106DD788 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DD788[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DD7AC = 0;
  }
  *(_DWORD *)byte_106DD788 = &ConCommandBase::`vftable';
}
