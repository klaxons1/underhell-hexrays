void __cdecl sub_10478650()
{
  int v0; // eax

  v0 = unk_106E94AC;
  *(_DWORD *)byte_106E9488 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9488[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E94AC = 0;
  }
  *(_DWORD *)byte_106E9488 = &ConCommandBase::`vftable';
}
