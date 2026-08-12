void __cdecl sub_104722F0()
{
  int v0; // eax

  v0 = unk_106B7424;
  *(_DWORD *)byte_106B7400 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7400[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7424 = 0;
  }
  *(_DWORD *)byte_106B7400 = &ConCommandBase::`vftable';
}
