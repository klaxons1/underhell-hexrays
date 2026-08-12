void __cdecl sub_10478440()
{
  int v0; // eax

  v0 = unk_106E8B64;
  *(_DWORD *)byte_106E8B40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8B40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8B64 = 0;
  }
  *(_DWORD *)byte_106E8B40 = &ConCommandBase::`vftable';
}
