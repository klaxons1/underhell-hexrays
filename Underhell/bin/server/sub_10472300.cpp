void __cdecl sub_10472300()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B7448[36];
  *(_DWORD *)byte_106B7448 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7448[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B7448[36] = 0;
  }
  *(_DWORD *)byte_106B7448 = &ConCommandBase::`vftable';
}
