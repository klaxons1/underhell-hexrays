void __cdecl sub_104712B0()
{
  int v0; // eax

  v0 = unk_106B1424;
  *(_DWORD *)byte_106B1400 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B1400[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B1424 = 0;
  }
  *(_DWORD *)byte_106B1400 = &ConCommandBase::`vftable';
}
