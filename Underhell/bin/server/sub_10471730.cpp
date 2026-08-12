void __cdecl sub_10471730()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3110[36];
  *(_DWORD *)byte_106B3110 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3110[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3110[36] = 0;
  }
  *(_DWORD *)byte_106B3110 = &ConCommandBase::`vftable';
}
