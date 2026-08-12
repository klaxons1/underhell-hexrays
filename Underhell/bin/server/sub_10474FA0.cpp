void __cdecl sub_10474FA0()
{
  int v0; // eax

  v0 = unk_106D0AA4;
  *(_DWORD *)byte_106D0A80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0A80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0AA4 = 0;
  }
  *(_DWORD *)byte_106D0A80 = &ConCommandBase::`vftable';
}
