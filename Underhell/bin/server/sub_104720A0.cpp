void __cdecl sub_104720A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B6C70[36];
  *(_DWORD *)byte_106B6C70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B6C70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B6C70[36] = 0;
  }
  *(_DWORD *)byte_106B6C70 = &ConCommandBase::`vftable';
}
