void __cdecl sub_1046FF00()
{
  int v0; // eax

  v0 = unk_10698544;
  *(_DWORD *)byte_10698520 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698520[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698544 = 0;
  }
  *(_DWORD *)byte_10698520 = &ConCommandBase::`vftable';
}
