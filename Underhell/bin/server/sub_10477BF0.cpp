void __cdecl sub_10477BF0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E54B8[36];
  *(_DWORD *)byte_106E54B8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E54B8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E54B8[36] = 0;
  }
  *(_DWORD *)byte_106E54B8 = &ConCommandBase::`vftable';
}
