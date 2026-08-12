void __cdecl sub_1046EA20()
{
  int v0; // eax

  v0 = unk_10690F8C;
  *(_DWORD *)byte_10690F68 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690F68[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690F8C = 0;
  }
  *(_DWORD *)byte_10690F68 = &ConCommandBase::`vftable';
}
