void __cdecl sub_10477FC0()
{
  int v0; // eax

  v0 = unk_106E66A4;
  *(_DWORD *)byte_106E6680 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6680[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E66A4 = 0;
  }
  *(_DWORD *)byte_106E6680 = &ConCommandBase::`vftable';
}
