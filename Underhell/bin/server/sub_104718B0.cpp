void __cdecl sub_104718B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3618[36];
  *(_DWORD *)byte_106B3618 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3618[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3618[36] = 0;
  }
  *(_DWORD *)byte_106B3618 = &ConCommandBase::`vftable';
}
