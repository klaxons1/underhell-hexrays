void __cdecl sub_104719D0()
{
  int v0; // eax

  v0 = unk_106B3E3C;
  *(_DWORD *)byte_106B3E18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3E18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3E3C = 0;
  }
  *(_DWORD *)byte_106B3E18 = &ConCommandBase::`vftable';
}
