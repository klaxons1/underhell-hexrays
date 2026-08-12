void __cdecl sub_104791A0()
{
  int v0; // eax

  v0 = unk_106EDE4C;
  *(_DWORD *)byte_106EDE28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDE28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EDE4C = 0;
  }
  *(_DWORD *)byte_106EDE28 = &ConCommandBase::`vftable';
}
