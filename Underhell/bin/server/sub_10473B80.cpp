void __cdecl sub_10473B80()
{
  int v0; // eax

  v0 = unk_106C29A4;
  *(_DWORD *)byte_106C2980 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C2980[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C29A4 = 0;
  }
  *(_DWORD *)byte_106C2980 = &ConCommandBase::`vftable';
}
