void __cdecl sub_10479230()
{
  int v0; // eax

  v0 = unk_106EE1D4;
  *(_DWORD *)byte_106EE1B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE1B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE1D4 = 0;
  }
  *(_DWORD *)byte_106EE1B0 = &ConCommandBase::`vftable';
}
