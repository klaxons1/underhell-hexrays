void __cdecl sub_10472B40()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B95D0[36];
  *(_DWORD *)byte_106B95D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B95D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B95D0[36] = 0;
  }
  *(_DWORD *)byte_106B95D0 = &ConCommandBase::`vftable';
}
