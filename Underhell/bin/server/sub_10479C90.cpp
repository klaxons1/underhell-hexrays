void __cdecl sub_10479C90()
{
  int v0; // eax

  v0 = unk_106F106C;
  *(_DWORD *)byte_106F1048 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F1048[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F106C = 0;
  }
  *(_DWORD *)byte_106F1048 = &ConCommandBase::`vftable';
}
