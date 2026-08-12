void __cdecl sub_104776C0()
{
  int v0; // eax

  v0 = unk_106E26F4;
  *(_DWORD *)byte_106E26D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E26D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E26F4 = 0;
  }
  *(_DWORD *)byte_106E26D0 = &ConCommandBase::`vftable';
}
