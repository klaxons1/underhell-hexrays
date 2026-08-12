void __cdecl sub_10472A30()
{
  int v0; // eax

  v0 = unk_106B9054;
  *(_DWORD *)byte_106B9030 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9030[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9054 = 0;
  }
  *(_DWORD *)byte_106B9030 = &ConCommandBase::`vftable';
}
