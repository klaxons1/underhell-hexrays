void __cdecl sub_10473920()
{
  int v0; // eax

  v0 = unk_106C1DB4;
  *(_DWORD *)byte_106C1D90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1D90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1DB4 = 0;
  }
  *(_DWORD *)byte_106C1D90 = &ConCommandBase::`vftable';
}
