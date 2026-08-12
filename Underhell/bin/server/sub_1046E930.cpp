void __cdecl sub_1046E930()
{
  int v0; // eax

  v0 = unk_10690A8C;
  *(_DWORD *)byte_10690A68 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690A68[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690A8C = 0;
  }
  *(_DWORD *)byte_10690A68 = &ConCommandBase::`vftable';
}
