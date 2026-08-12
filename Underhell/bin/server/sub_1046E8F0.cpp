void __cdecl sub_1046E8F0()
{
  int v0; // eax

  v0 = unk_1069096C;
  *(_DWORD *)byte_10690948 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690948[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069096C = 0;
  }
  *(_DWORD *)byte_10690948 = &ConCommandBase::`vftable';
}
