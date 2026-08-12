void __cdecl sub_10474A90()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106CEF98[4];
  *(_DWORD *)byte_106CEF78 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CEF78[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106CEF98[4] = 0;
  }
  *(_DWORD *)byte_106CEF78 = &ConCommandBase::`vftable';
}
