void __cdecl sub_10472280()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B7208[36];
  *(_DWORD *)byte_106B7208 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7208[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B7208[36] = 0;
  }
  *(_DWORD *)byte_106B7208 = &ConCommandBase::`vftable';
}
