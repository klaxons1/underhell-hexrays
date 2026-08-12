void __cdecl sub_10473930()
{
  int v0; // eax

  v0 = unk_106C1DFC;
  *(_DWORD *)byte_106C1DD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1DD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1DFC = 0;
  }
  *(_DWORD *)byte_106C1DD8 = &ConCommandBase::`vftable';
}
