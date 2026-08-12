void __cdecl sub_10474DE0()
{
  int v0; // eax

  v0 = unk_106D0294;
  *(_DWORD *)byte_106D0270 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0270[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0294 = 0;
  }
  *(_DWORD *)byte_106D0270 = &ConCommandBase::`vftable';
}
