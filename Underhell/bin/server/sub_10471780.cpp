void __cdecl sub_10471780()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3338[36];
  *(_DWORD *)byte_106B3338 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3338[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3338[36] = 0;
  }
  *(_DWORD *)byte_106B3338 = &ConCommandBase::`vftable';
}
