void __cdecl sub_10479710()
{
  int v0; // eax

  v0 = unk_106EFA7C;
  *(_DWORD *)byte_106EFA58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFA58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFA7C = 0;
  }
  *(_DWORD *)byte_106EFA58 = &ConCommandBase::`vftable';
}
