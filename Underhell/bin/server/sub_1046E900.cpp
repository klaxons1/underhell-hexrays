void __cdecl sub_1046E900()
{
  int v0; // eax

  v0 = unk_106909B4;
  *(_DWORD *)byte_10690990 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690990[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106909B4 = 0;
  }
  *(_DWORD *)byte_10690990 = &ConCommandBase::`vftable';
}
