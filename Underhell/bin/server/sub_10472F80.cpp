void __cdecl sub_10472F80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106BA560[36];
  *(_DWORD *)byte_106BA560 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA560[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106BA560[36] = 0;
  }
  *(_DWORD *)byte_106BA560 = &ConCommandBase::`vftable';
}
