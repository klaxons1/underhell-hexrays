void __cdecl sub_10479860()
{
  int v0; // eax

  v0 = unk_106EFF94;
  *(_DWORD *)byte_106EFF70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFF70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFF94 = 0;
  }
  *(_DWORD *)byte_106EFF70 = &ConCommandBase::`vftable';
}
