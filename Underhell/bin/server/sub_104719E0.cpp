void __cdecl sub_104719E0()
{
  int v0; // eax

  v0 = unk_106B3E84;
  *(_DWORD *)byte_106B3E60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3E60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3E84 = 0;
  }
  *(_DWORD *)byte_106B3E60 = &ConCommandBase::`vftable';
}
