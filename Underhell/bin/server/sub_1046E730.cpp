void __cdecl sub_1046E730()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106901C8[36];
  *(_DWORD *)byte_106901C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106901C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106901C8[36] = 0;
  }
  *(_DWORD *)byte_106901C8 = &ConCommandBase::`vftable';
}
