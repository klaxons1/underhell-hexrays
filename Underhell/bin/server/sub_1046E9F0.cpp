void __cdecl sub_1046E9F0()
{
  int v0; // eax

  v0 = unk_10690EB4;
  *(_DWORD *)byte_10690E90 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690E90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690EB4 = 0;
  }
  *(_DWORD *)byte_10690E90 = &ConCommandBase::`vftable';
}
