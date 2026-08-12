void __cdecl sub_104765D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DB230[36];
  *(_DWORD *)byte_106DB230 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB230[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DB230[36] = 0;
  }
  *(_DWORD *)byte_106DB230 = &ConCommandBase::`vftable';
}
