void __cdecl sub_10478800()
{
  int v0; // eax

  v0 = unk_106E9FBC;
  *(_DWORD *)byte_106E9F98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9F98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9FBC = 0;
  }
  *(_DWORD *)byte_106E9F98 = &ConCommandBase::`vftable';
}
