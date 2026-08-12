void __cdecl sub_10472B60()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B9660[36];
  *(_DWORD *)byte_106B9660 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9660[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B9660[36] = 0;
  }
  *(_DWORD *)byte_106B9660 = &ConCommandBase::`vftable';
}
