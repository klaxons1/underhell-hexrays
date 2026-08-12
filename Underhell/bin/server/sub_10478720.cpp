void __cdecl sub_10478720()
{
  int v0; // eax

  v0 = unk_106E9A64;
  *(_DWORD *)byte_106E9A40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9A40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9A64 = 0;
  }
  *(_DWORD *)byte_106E9A40 = &ConCommandBase::`vftable';
}
