void __cdecl sub_104784C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E8D80[36];
  *(_DWORD *)byte_106E8D80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8D80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E8D80[36] = 0;
  }
  *(_DWORD *)byte_106E8D80 = &ConCommandBase::`vftable';
}
