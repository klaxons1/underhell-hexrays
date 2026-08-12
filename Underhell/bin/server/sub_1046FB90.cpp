void __cdecl sub_1046FB90()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10697288[36];
  *(_DWORD *)byte_10697288 = &ConVar::`vftable';
  *(_DWORD *)&byte_10697288[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10697288[36] = 0;
  }
  *(_DWORD *)byte_10697288 = &ConCommandBase::`vftable';
}
