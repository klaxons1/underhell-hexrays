void __cdecl sub_10471900()
{
  int v0; // eax

  v0 = unk_106B37A4;
  *(_DWORD *)byte_106B3780 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3780[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B37A4 = 0;
  }
  *(_DWORD *)byte_106B3780 = &ConCommandBase::`vftable';
}
