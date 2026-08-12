void __cdecl sub_10474280()
{
  int v0; // eax

  v0 = unk_106C5CAC;
  *(_DWORD *)byte_106C5C88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C5C88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C5CAC = 0;
  }
  *(_DWORD *)byte_106C5C88 = &ConCommandBase::`vftable';
}
