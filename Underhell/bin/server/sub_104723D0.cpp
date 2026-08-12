void __cdecl sub_104723D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B7818[36];
  *(_DWORD *)byte_106B7818 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7818[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B7818[36] = 0;
  }
  *(_DWORD *)byte_106B7818 = &ConCommandBase::`vftable';
}
