void __cdecl sub_104729A0()
{
  int v0; // eax

  v0 = unk_106B8DF4;
  *(_DWORD *)byte_106B8DD0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8DD0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8DF4 = 0;
  }
  *(_DWORD *)byte_106B8DD0 = &ConCommandBase::`vftable';
}
