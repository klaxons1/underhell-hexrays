void __cdecl sub_10476F50()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DEFD8[36];
  *(_DWORD *)byte_106DEFD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEFD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DEFD8[36] = 0;
  }
  *(_DWORD *)byte_106DEFD8 = &ConCommandBase::`vftable';
}
