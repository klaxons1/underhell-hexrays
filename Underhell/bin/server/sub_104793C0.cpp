void __cdecl sub_104793C0()
{
  int v0; // eax

  v0 = unk_106EEB74;
  *(_DWORD *)byte_106EEB50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EEB50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EEB74 = 0;
  }
  *(_DWORD *)byte_106EEB50 = &ConCommandBase::`vftable';
}
