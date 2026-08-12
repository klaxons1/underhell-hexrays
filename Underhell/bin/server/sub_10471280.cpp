void __cdecl sub_10471280()
{
  int v0; // eax

  v0 = unk_106B134C;
  *(_DWORD *)byte_106B1328 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B1328[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B134C = 0;
  }
  *(_DWORD *)byte_106B1328 = &ConCommandBase::`vftable';
}
