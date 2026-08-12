void __cdecl sub_104738C0()
{
  int v0; // eax

  v0 = unk_106C1C04;
  *(_DWORD *)byte_106C1BE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1BE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1C04 = 0;
  }
  *(_DWORD *)byte_106C1BE0 = &ConCommandBase::`vftable';
}
