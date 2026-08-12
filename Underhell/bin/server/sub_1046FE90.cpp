void __cdecl sub_1046FE90()
{
  int v0; // eax

  v0 = unk_1069834C;
  *(_DWORD *)byte_10698328 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698328[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069834C = 0;
  }
  *(_DWORD *)byte_10698328 = &ConCommandBase::`vftable';
}
