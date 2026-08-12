void __cdecl sub_10474E20()
{
  int v0; // eax

  v0 = unk_106D03C4;
  *(_DWORD *)byte_106D03A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D03A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D03C4 = 0;
  }
  *(_DWORD *)byte_106D03A0 = &ConCommandBase::`vftable';
}
