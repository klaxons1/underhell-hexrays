void __cdecl sub_104773F0()
{
  int v0; // eax

  v0 = unk_106E0B94;
  *(_DWORD *)byte_106E0B70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0B70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0B94 = 0;
  }
  *(_DWORD *)byte_106E0B70 = &ConCommandBase::`vftable';
}
