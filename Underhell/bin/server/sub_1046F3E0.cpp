void __cdecl sub_1046F3E0()
{
  int v0; // eax

  v0 = unk_106937BC;
  *(_DWORD *)byte_10693798 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693798[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106937BC = 0;
  }
  *(_DWORD *)byte_10693798 = &ConCommandBase::`vftable';
}
