void __cdecl sub_10478100()
{
  int v0; // eax

  v0 = unk_106E7934;
  *(_DWORD *)byte_106E7910 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7910[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E7934 = 0;
  }
  *(_DWORD *)byte_106E7910 = &ConCommandBase::`vftable';
}
