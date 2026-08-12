void __cdecl sub_1046E750()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10690258[36];
  *(_DWORD *)byte_10690258 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690258[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10690258[36] = 0;
  }
  *(_DWORD *)byte_10690258 = &ConCommandBase::`vftable';
}
