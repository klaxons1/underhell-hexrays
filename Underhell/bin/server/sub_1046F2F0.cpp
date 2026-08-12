void __cdecl sub_1046F2F0()
{
  int v0; // eax

  v0 = unk_106934AC;
  *(_DWORD *)byte_10693488 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693488[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106934AC = 0;
  }
  *(_DWORD *)byte_10693488 = &ConCommandBase::`vftable';
}
