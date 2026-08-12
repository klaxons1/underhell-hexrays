void __cdecl sub_10474DB0()
{
  int v0; // eax

  v0 = unk_106D01CC;
  *(_DWORD *)byte_106D01A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D01A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D01CC = 0;
  }
  *(_DWORD *)byte_106D01A8 = &ConCommandBase::`vftable';
}
