void __cdecl sub_104787B0()
{
  int v0; // eax

  v0 = unk_106E9E54;
  *(_DWORD *)byte_106E9E30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9E30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9E54 = 0;
  }
  *(_DWORD *)byte_106E9E30 = &ConCommandBase::`vftable';
}
