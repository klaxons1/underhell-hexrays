void __cdecl sub_104781F0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E7EC0[36];
  *(_DWORD *)byte_106E7EC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7EC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E7EC0[36] = 0;
  }
  *(_DWORD *)byte_106E7EC0 = &ConCommandBase::`vftable';
}
