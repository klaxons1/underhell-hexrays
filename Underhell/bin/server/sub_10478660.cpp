void __cdecl sub_10478660()
{
  int v0; // eax

  v0 = unk_106E94F4;
  *(_DWORD *)byte_106E94D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E94D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E94F4 = 0;
  }
  *(_DWORD *)byte_106E94D0 = &ConCommandBase::`vftable';
}
