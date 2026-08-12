void __cdecl sub_10470100()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10699230[36];
  *(_DWORD *)byte_10699230 = &ConVar::`vftable';
  *(_DWORD *)&byte_10699230[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10699230[36] = 0;
  }
  *(_DWORD *)byte_10699230 = &ConCommandBase::`vftable';
}
