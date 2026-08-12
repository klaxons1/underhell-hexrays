void __cdecl sub_10478F70()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106ECC30[36];
  *(_DWORD *)byte_106ECC30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ECC30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106ECC30[36] = 0;
  }
  *(_DWORD *)byte_106ECC30 = &ConCommandBase::`vftable';
}
