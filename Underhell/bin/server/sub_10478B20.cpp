void __cdecl sub_10478B20()
{
  int v0; // eax

  v0 = unk_106EB0A4;
  *(_DWORD *)byte_106EB080 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB080[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB0A4 = 0;
  }
  *(_DWORD *)byte_106EB080 = &ConCommandBase::`vftable';
}
