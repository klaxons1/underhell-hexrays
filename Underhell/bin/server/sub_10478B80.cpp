void __cdecl sub_10478B80()
{
  int v0; // eax

  v0 = unk_106EB254;
  *(_DWORD *)byte_106EB230 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB230[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB254 = 0;
  }
  *(_DWORD *)byte_106EB230 = &ConCommandBase::`vftable';
}
