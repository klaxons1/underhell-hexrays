void __cdecl sub_10478B60()
{
  int v0; // eax

  v0 = unk_106EB1C4;
  *(_DWORD *)byte_106EB1A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB1A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB1C4 = 0;
  }
  *(_DWORD *)byte_106EB1A0 = &ConCommandBase::`vftable';
}
