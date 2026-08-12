void __cdecl sub_10474350()
{
  int v0; // eax

  v0 = unk_106C62A4;
  *(_DWORD *)byte_106C6280 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C6280[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C62A4 = 0;
  }
  *(_DWORD *)byte_106C6280 = &ConCommandBase::`vftable';
}
