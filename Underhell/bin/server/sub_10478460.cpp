void __cdecl sub_10478460()
{
  int v0; // eax

  v0 = unk_106E8BF4;
  *(_DWORD *)byte_106E8BD0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8BD0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8BF4 = 0;
  }
  *(_DWORD *)byte_106E8BD0 = &ConCommandBase::`vftable';
}
