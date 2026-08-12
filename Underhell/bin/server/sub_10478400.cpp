void __cdecl sub_10478400()
{
  int v0; // eax

  v0 = unk_106E8A44;
  *(_DWORD *)byte_106E8A20 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8A20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8A44 = 0;
  }
  *(_DWORD *)byte_106E8A20 = &ConCommandBase::`vftable';
}
