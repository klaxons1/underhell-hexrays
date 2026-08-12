void __cdecl sub_10472200()
{
  int v0; // eax

  v0 = unk_106B6FEC;
  *(_DWORD *)byte_106B6FC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B6FC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B6FEC = 0;
  }
  *(_DWORD *)byte_106B6FC8 = &ConCommandBase::`vftable';
}
