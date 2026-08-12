void __cdecl sub_104780F0()
{
  int v0; // eax

  v0 = unk_106E78EC;
  *(_DWORD *)byte_106E78C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E78C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E78EC = 0;
  }
  *(_DWORD *)byte_106E78C8 = &ConCommandBase::`vftable';
}
