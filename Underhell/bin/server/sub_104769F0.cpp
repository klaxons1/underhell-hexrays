void __cdecl sub_104769F0()
{
  int v0; // eax

  v0 = unk_106DD7F4;
  *(_DWORD *)byte_106DD7D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DD7D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DD7F4 = 0;
  }
  *(_DWORD *)byte_106DD7D0 = &ConCommandBase::`vftable';
}
