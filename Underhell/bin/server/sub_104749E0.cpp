void __cdecl sub_104749E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106CED40[36];
  *(_DWORD *)byte_106CED40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CED40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106CED40[36] = 0;
  }
  *(_DWORD *)byte_106CED40 = &ConCommandBase::`vftable';
}
