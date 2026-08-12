void __cdecl sub_104732A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BB558[36];
  *(_DWORD *)byte_106BB558 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB558[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BB558[36] = 0;
  }
  *(_DWORD *)byte_106BB558 = &ConCommandBase::`vftable';
}
