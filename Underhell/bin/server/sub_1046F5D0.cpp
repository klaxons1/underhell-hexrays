void __cdecl sub_1046F5D0()
{
  int v0; // eax

  v0 = unk_106951BC;
  *(_DWORD *)byte_10695198 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695198[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106951BC = 0;
  }
  *(_DWORD *)byte_10695198 = &ConCommandBase::`vftable';
}
