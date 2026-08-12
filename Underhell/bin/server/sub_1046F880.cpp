void __cdecl sub_1046F880()
{
  int v0; // eax

  v0 = unk_10696284;
  *(_DWORD *)byte_10696260 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696260[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10696284 = 0;
  }
  *(_DWORD *)byte_10696260 = &ConCommandBase::`vftable';
}
