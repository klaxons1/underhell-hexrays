void __cdecl sub_1046EF60()
{
  int v0; // eax

  v0 = unk_10692AD4;
  *(_DWORD *)byte_10692AB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692AB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10692AD4 = 0;
  }
  *(_DWORD *)byte_10692AB0 = &ConCommandBase::`vftable';
}
