void __cdecl sub_104717D0()
{
  int v0; // eax

  v0 = unk_106B3464;
  *(_DWORD *)byte_106B3440 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3440[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3464 = 0;
  }
  *(_DWORD *)byte_106B3440 = &ConCommandBase::`vftable';
}
