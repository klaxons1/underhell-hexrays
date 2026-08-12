void __cdecl sub_10471920()
{
  int v0; // eax

  v0 = unk_106B3834;
  *(_DWORD *)byte_106B3810 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3810[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3834 = 0;
  }
  *(_DWORD *)byte_106B3810 = &ConCommandBase::`vftable';
}
