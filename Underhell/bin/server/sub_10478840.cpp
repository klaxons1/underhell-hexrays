void __cdecl sub_10478840()
{
  int v0; // eax

  v0 = unk_106EA12C;
  *(_DWORD *)byte_106EA108 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA108[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA12C = 0;
  }
  *(_DWORD *)byte_106EA108 = &ConCommandBase::`vftable';
}
