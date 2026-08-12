void __cdecl sub_1046EB80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10691C58[36];
  *(_DWORD *)byte_10691C58 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691C58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10691C58[36] = 0;
  }
  *(_DWORD *)byte_10691C58 = &ConCommandBase::`vftable';
}
