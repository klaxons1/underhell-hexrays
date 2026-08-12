void __cdecl sub_1046E980()
{
  int v0; // eax

  v0 = unk_10690BF4;
  *(_DWORD *)byte_10690BD0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690BD0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690BF4 = 0;
  }
  *(_DWORD *)byte_10690BD0 = &ConCommandBase::`vftable';
}
