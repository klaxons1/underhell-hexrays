void __cdecl sub_1046F2E0()
{
  int v0; // eax

  v0 = unk_10693464;
  *(_DWORD *)byte_10693440 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693440[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693464 = 0;
  }
  *(_DWORD *)byte_10693440 = &ConCommandBase::`vftable';
}
