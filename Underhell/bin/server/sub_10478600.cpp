void __cdecl sub_10478600()
{
  int v0; // eax

  v0 = unk_106E9344;
  *(_DWORD *)byte_106E9320 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9320[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9344 = 0;
  }
  *(_DWORD *)byte_106E9320 = &ConCommandBase::`vftable';
}
