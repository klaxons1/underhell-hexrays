void __cdecl sub_10478A80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106EADB0[36];
  *(_DWORD *)byte_106EADB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EADB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106EADB0[36] = 0;
  }
  *(_DWORD *)byte_106EADB0 = &ConCommandBase::`vftable';
}
