void __cdecl sub_104790D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106ED308[36];
  *(_DWORD *)byte_106ED308 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED308[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106ED308[36] = 0;
  }
  *(_DWORD *)byte_106ED308 = &ConCommandBase::`vftable';
}
