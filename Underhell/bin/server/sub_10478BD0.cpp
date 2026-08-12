void __cdecl sub_10478BD0()
{
  int v0; // eax

  v0 = unk_106EB3BC;
  *(_DWORD *)byte_106EB398 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB398[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB3BC = 0;
  }
  *(_DWORD *)byte_106EB398 = &ConCommandBase::`vftable';
}
