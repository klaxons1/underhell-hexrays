void __cdecl sub_104791B0()
{
  int v0; // eax

  v0 = unk_106EDE94;
  *(_DWORD *)byte_106EDE70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDE70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EDE94 = 0;
  }
  *(_DWORD *)byte_106EDE70 = &ConCommandBase::`vftable';
}
