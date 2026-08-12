void __cdecl sub_1046F6A0()
{
  int v0; // eax

  v0 = unk_106954AC;
  *(_DWORD *)byte_10695488 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695488[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106954AC = 0;
  }
  *(_DWORD *)byte_10695488 = &ConCommandBase::`vftable';
}
