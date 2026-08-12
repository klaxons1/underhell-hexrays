void __cdecl sub_10472270()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B71C0[36];
  *(_DWORD *)byte_106B71C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B71C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B71C0[36] = 0;
  }
  *(_DWORD *)byte_106B71C0 = &ConCommandBase::`vftable';
}
