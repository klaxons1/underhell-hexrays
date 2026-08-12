void __cdecl sub_104710B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B04F8[36];
  *(_DWORD *)byte_106B04F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B04F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B04F8[36] = 0;
  }
  *(_DWORD *)byte_106B04F8 = &ConCommandBase::`vftable';
}
