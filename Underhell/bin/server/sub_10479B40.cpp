void __cdecl sub_10479B40()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106F0AA8[36];
  *(_DWORD *)byte_106F0AA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0AA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106F0AA8[36] = 0;
  }
  *(_DWORD *)byte_106F0AA8 = &ConCommandBase::`vftable';
}
