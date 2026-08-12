void __cdecl sub_1046FED0()
{
  int v0; // eax

  v0 = unk_1069846C;
  *(_DWORD *)byte_10698448 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698448[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069846C = 0;
  }
  *(_DWORD *)byte_10698448 = &ConCommandBase::`vftable';
}
