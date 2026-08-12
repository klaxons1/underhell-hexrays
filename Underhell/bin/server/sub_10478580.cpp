void __cdecl sub_10478580()
{
  int v0; // eax

  v0 = unk_106E9104;
  *(_DWORD *)byte_106E90E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E90E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9104 = 0;
  }
  *(_DWORD *)byte_106E90E0 = &ConCommandBase::`vftable';
}
