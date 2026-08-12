void __cdecl sub_10473C00()
{
  int v0; // eax

  v0 = unk_106C2B34;
  *(_DWORD *)byte_106C2B10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C2B10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C2B34 = 0;
  }
  *(_DWORD *)byte_106C2B10 = &ConCommandBase::`vftable';
}
