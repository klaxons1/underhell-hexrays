void __cdecl sub_10473910()
{
  int v0; // eax

  v0 = unk_106C1D6C;
  *(_DWORD *)byte_106C1D48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1D48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1D6C = 0;
  }
  *(_DWORD *)byte_106C1D48 = &ConCommandBase::`vftable';
}
