void __cdecl sub_1046FC30()
{
  int v0; // eax

  v0 = unk_106973EC;
  *(_DWORD *)byte_106973C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106973C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106973EC = 0;
  }
  *(_DWORD *)byte_106973C8 = &ConCommandBase::`vftable';
}
