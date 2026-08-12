void __cdecl sub_10476FD0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF218[36];
  *(_DWORD *)byte_106DF218 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF218[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF218[36] = 0;
  }
  *(_DWORD *)byte_106DF218 = &ConCommandBase::`vftable';
}
