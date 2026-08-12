void __cdecl sub_10478270()
{
  int v0; // eax

  v0 = unk_106E81B4;
  *(_DWORD *)byte_106E8190 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8190[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E81B4 = 0;
  }
  *(_DWORD *)byte_106E8190 = &ConCommandBase::`vftable';
}
