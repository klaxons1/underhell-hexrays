void __cdecl sub_10472210()
{
  int v0; // eax

  v0 = unk_106B7034;
  *(_DWORD *)byte_106B7010 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7010[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7034 = 0;
  }
  *(_DWORD *)byte_106B7010 = &ConCommandBase::`vftable';
}
