void __cdecl sub_104784D0()
{
  int v0; // eax

  v0 = unk_106E8DEC;
  *(_DWORD *)byte_106E8DC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8DC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8DEC = 0;
  }
  *(_DWORD *)byte_106E8DC8 = &ConCommandBase::`vftable';
}
