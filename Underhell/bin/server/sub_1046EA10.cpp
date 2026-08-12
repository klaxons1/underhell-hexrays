void __cdecl sub_1046EA10()
{
  int v0; // eax

  v0 = unk_10690F44;
  *(_DWORD *)byte_10690F20 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690F20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690F44 = 0;
  }
  *(_DWORD *)byte_10690F20 = &ConCommandBase::`vftable';
}
