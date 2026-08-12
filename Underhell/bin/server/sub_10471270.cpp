void __cdecl sub_10471270()
{
  int v0; // eax

  v0 = unk_106B1304;
  *(_DWORD *)byte_106B12E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B12E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B1304 = 0;
  }
  *(_DWORD *)byte_106B12E0 = &ConCommandBase::`vftable';
}
