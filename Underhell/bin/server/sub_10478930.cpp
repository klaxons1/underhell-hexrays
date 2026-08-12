void __cdecl sub_10478930()
{
  int v0; // eax

  v0 = unk_106EA4A4;
  *(_DWORD *)byte_106EA480 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA480[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA4A4 = 0;
  }
  *(_DWORD *)byte_106EA480 = &ConCommandBase::`vftable';
}
