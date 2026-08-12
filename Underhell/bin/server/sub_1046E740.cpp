void __cdecl sub_1046E740()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10690210[36];
  *(_DWORD *)byte_10690210 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690210[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10690210[36] = 0;
  }
  *(_DWORD *)byte_10690210 = &ConCommandBase::`vftable';
}
