void __cdecl sub_10474BA0()
{
  int v0; // eax

  v0 = unk_106CF994;
  *(_DWORD *)byte_106CF970 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CF970[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CF994 = 0;
  }
  *(_DWORD *)byte_106CF970 = &ConCommandBase::`vftable';
}
