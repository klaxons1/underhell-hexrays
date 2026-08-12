void __cdecl sub_10478B70()
{
  int v0; // eax

  v0 = unk_106EB20C;
  *(_DWORD *)byte_106EB1E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB1E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB20C = 0;
  }
  *(_DWORD *)byte_106EB1E8 = &ConCommandBase::`vftable';
}
