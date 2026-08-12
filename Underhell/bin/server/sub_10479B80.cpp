void __cdecl sub_10479B80()
{
  int v0; // eax

  v0 = unk_106F0BEC;
  *(_DWORD *)byte_106F0BC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0BC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0BEC = 0;
  }
  *(_DWORD *)byte_106F0BC8 = &ConCommandBase::`vftable';
}
