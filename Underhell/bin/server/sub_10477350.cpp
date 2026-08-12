void __cdecl sub_10477350()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E0910[36];
  *(_DWORD *)byte_106E0910 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0910[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E0910[36] = 0;
  }
  *(_DWORD *)byte_106E0910 = &ConCommandBase::`vftable';
}
