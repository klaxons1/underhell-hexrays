void __cdecl sub_10473300()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BB708[36];
  *(_DWORD *)byte_106BB708 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB708[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BB708[36] = 0;
  }
  *(_DWORD *)byte_106BB708 = &ConCommandBase::`vftable';
}
