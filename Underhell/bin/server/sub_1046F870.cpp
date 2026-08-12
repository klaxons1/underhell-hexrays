void __cdecl sub_1046F870()
{
  int v0; // eax

  v0 = unk_1069623C;
  *(_DWORD *)byte_10696218 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696218[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069623C = 0;
  }
  *(_DWORD *)byte_10696218 = &ConCommandBase::`vftable';
}
