void __cdecl sub_1046E8B0()
{
  int v0; // eax

  v0 = unk_1069084C;
  *(_DWORD *)byte_10690828 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690828[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069084C = 0;
  }
  *(_DWORD *)byte_10690828 = &ConCommandBase::`vftable';
}
