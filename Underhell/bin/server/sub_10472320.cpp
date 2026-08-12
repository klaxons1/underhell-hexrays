void __cdecl sub_10472320()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B74D8[36];
  *(_DWORD *)byte_106B74D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B74D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B74D8[36] = 0;
  }
  *(_DWORD *)byte_106B74D8 = &ConCommandBase::`vftable';
}
