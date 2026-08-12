void __cdecl sub_10471AE0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B4C48[36];
  *(_DWORD *)byte_106B4C48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B4C48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B4C48[36] = 0;
  }
  *(_DWORD *)byte_106B4C48 = &ConCommandBase::`vftable';
}
