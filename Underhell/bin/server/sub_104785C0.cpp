void __cdecl sub_104785C0()
{
  int v0; // eax

  v0 = unk_106E9224;
  *(_DWORD *)byte_106E9200 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9200[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9224 = 0;
  }
  *(_DWORD *)byte_106E9200 = &ConCommandBase::`vftable';
}
