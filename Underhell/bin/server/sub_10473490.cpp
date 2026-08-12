void __cdecl sub_10473490()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BBDE0[36];
  *(_DWORD *)byte_106BBDE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBDE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BBDE0[36] = 0;
  }
  *(_DWORD *)byte_106BBDE0 = &ConCommandBase::`vftable';
}
