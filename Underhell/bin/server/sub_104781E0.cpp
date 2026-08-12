void __cdecl sub_104781E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E7E78[36];
  *(_DWORD *)byte_106E7E78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7E78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E7E78[36] = 0;
  }
  *(_DWORD *)byte_106E7E78 = &ConCommandBase::`vftable';
}
