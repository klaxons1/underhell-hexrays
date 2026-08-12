void __cdecl sub_10471090()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B0468[36];
  *(_DWORD *)byte_106B0468 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0468[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B0468[36] = 0;
  }
  *(_DWORD *)byte_106B0468 = &ConCommandBase::`vftable';
}
