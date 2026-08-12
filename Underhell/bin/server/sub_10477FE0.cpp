void __cdecl sub_10477FE0()
{
  int v0; // eax

  v0 = unk_106E6744;
  *(_DWORD *)byte_106E6720 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6720[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6744 = 0;
  }
  *(_DWORD *)byte_106E6720 = &ConCommandBase::`vftable';
}
