void __cdecl sub_104771D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DFB18[36];
  *(_DWORD *)byte_106DFB18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DFB18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DFB18[36] = 0;
  }
  *(_DWORD *)byte_106DFB18 = &ConCommandBase::`vftable';
}
