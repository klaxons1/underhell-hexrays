void __cdecl sub_104751F0()
{
  int v0; // eax

  v0 = unk_106D14E4;
  *(_DWORD *)byte_106D14C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D14C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D14E4 = 0;
  }
  *(_DWORD *)byte_106D14C0 = &ConCommandBase::`vftable';
}
