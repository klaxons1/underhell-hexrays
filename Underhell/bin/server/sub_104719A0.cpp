void __cdecl sub_104719A0()
{
  *(_DWORD *)byte_106B3CF0 = &ConVar::`vftable';
  dword_106B3D08 = &ConVar::`vftable';
  if ( dword_106B3D14[0] )
  {
    sub_10184660(dword_106B3D14[0]);
    dword_106B3D14[0] = 0;
  }
  *(_DWORD *)byte_106B3CF0 = &ConCommandBase::`vftable';
}
