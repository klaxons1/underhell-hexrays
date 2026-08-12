void __cdecl sub_10474720()
{
  int v0; // eax

  v0 = unk_106C76AC;
  *(_DWORD *)byte_106C7688 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C7688[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C76AC = 0;
  }
  *(_DWORD *)byte_106C7688 = &ConCommandBase::`vftable';
}
