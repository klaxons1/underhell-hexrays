void __cdecl sub_10477CF0()
{
  int v0; // eax

  v0 = unk_106E5984;
  *(_DWORD *)byte_106E5960 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5960[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5984 = 0;
  }
  *(_DWORD *)byte_106E5960 = &ConCommandBase::`vftable';
}
