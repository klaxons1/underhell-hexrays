void __cdecl sub_10478DC0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106EC000[36];
  *(_DWORD *)byte_106EC000 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EC000[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106EC000[36] = 0;
  }
  *(_DWORD *)byte_106EC000 = &ConCommandBase::`vftable';
}
