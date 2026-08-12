void __cdecl sub_10476F40()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DEF90[36];
  *(_DWORD *)byte_106DEF90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEF90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DEF90[36] = 0;
  }
  *(_DWORD *)byte_106DEF90 = &ConCommandBase::`vftable';
}
