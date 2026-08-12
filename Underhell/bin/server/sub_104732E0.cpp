void __cdecl sub_104732E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BB678[36];
  *(_DWORD *)byte_106BB678 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB678[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BB678[36] = 0;
  }
  *(_DWORD *)byte_106BB678 = &ConCommandBase::`vftable';
}
