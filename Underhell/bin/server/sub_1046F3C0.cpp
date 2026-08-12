void __cdecl sub_1046F3C0()
{
  int v0; // eax

  v0 = unk_10693764;
  *(_DWORD *)byte_10693740 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693740[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693764 = 0;
  }
  *(_DWORD *)byte_10693740 = &ConCommandBase::`vftable';
}
