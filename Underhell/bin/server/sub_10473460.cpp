void __cdecl sub_10473460()
{
  *(_DWORD *)byte_106BBD08 = &ConVar::`vftable';
  dword_106BBD20 = &ConVar::`vftable';
  if ( dword_106BBD2C[0] )
  {
    sub_10184660(dword_106BBD2C[0]);
    dword_106BBD2C[0] = 0;
  }
  *(_DWORD *)byte_106BBD08 = &ConCommandBase::`vftable';
}
