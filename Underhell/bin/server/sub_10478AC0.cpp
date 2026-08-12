void __cdecl sub_10478AC0()
{
  int v0; // eax

  v0 = unk_106EAEF4;
  *(_DWORD *)byte_106EAED0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAED0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAEF4 = 0;
  }
  *(_DWORD *)byte_106EAED0 = &ConCommandBase::`vftable';
}
