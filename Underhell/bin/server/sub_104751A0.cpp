void __cdecl sub_104751A0()
{
  int v0; // eax

  v0 = unk_106D138C;
  *(_DWORD *)byte_106D1368 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1368[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D138C = 0;
  }
  *(_DWORD *)byte_106D1368 = &ConCommandBase::`vftable';
}
