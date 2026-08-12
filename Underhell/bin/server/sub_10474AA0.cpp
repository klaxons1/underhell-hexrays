void __cdecl sub_10474AA0()
{
  int v0; // eax

  v0 = unk_106CEFFC;
  *(_DWORD *)byte_106CEFD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CEFD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CEFFC = 0;
  }
  *(_DWORD *)byte_106CEFD8 = &ConCommandBase::`vftable';
}
