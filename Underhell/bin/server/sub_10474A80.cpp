void __cdecl sub_10474A80()
{
  int v0; // eax

  v0 = unk_106CEF54;
  *(_DWORD *)byte_106CEF30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CEF30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CEF54 = 0;
  }
  *(_DWORD *)byte_106CEF30 = &ConCommandBase::`vftable';
}
