void __cdecl sub_10475330()
{
  int v0; // eax

  v0 = unk_106D1A64;
  *(_DWORD *)byte_106D1A40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1A40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1A64 = 0;
  }
  *(_DWORD *)byte_106D1A40 = &ConCommandBase::`vftable';
}
