void __cdecl sub_10478F60()
{
  int v0; // eax

  v0 = unk_106ECC0C;
  *(_DWORD *)byte_106ECBE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ECBE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ECC0C = 0;
  }
  *(_DWORD *)byte_106ECBE8 = &ConCommandBase::`vftable';
}
