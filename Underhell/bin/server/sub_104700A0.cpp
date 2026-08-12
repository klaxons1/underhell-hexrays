void __cdecl sub_104700A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10699078[36];
  *(_DWORD *)byte_10699078 = &ConVar::`vftable';
  *(_DWORD *)&byte_10699078[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10699078[36] = 0;
  }
  *(_DWORD *)byte_10699078 = &ConCommandBase::`vftable';
}
