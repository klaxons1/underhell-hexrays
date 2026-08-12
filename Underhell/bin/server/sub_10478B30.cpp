void __cdecl sub_10478B30()
{
  int v0; // eax

  v0 = unk_106EB0EC;
  *(_DWORD *)byte_106EB0C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB0C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB0EC = 0;
  }
  *(_DWORD *)byte_106EB0C8 = &ConCommandBase::`vftable';
}
