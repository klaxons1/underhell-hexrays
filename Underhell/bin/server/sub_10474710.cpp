void __cdecl sub_10474710()
{
  int v0; // eax

  v0 = unk_106C7664;
  *(_DWORD *)byte_106C7640 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C7640[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C7664 = 0;
  }
  *(_DWORD *)byte_106C7640 = &ConCommandBase::`vftable';
}
