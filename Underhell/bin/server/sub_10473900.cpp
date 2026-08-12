void __cdecl sub_10473900()
{
  int v0; // eax

  v0 = unk_106C1D24;
  *(_DWORD *)byte_106C1D00 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1D00[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1D24 = 0;
  }
  *(_DWORD *)byte_106C1D00 = &ConCommandBase::`vftable';
}
