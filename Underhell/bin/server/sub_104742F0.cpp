void __cdecl sub_104742F0()
{
  int v0; // eax

  v0 = unk_106C61C4;
  *(_DWORD *)byte_106C61A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C61A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C61C4 = 0;
  }
  *(_DWORD *)byte_106C61A0 = &ConCommandBase::`vftable';
}
