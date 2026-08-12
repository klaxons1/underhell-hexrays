void __cdecl sub_10477020()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF380[36];
  *(_DWORD *)byte_106DF380 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF380[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF380[36] = 0;
  }
  *(_DWORD *)byte_106DF380 = &ConCommandBase::`vftable';
}
