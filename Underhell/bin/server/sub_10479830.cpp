void __cdecl sub_10479830()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106EFE98[36];
  *(_DWORD *)byte_106EFE98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFE98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106EFE98[36] = 0;
  }
  *(_DWORD *)byte_106EFE98 = &ConCommandBase::`vftable';
}
