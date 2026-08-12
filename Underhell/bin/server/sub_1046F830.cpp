void __cdecl sub_1046F830()
{
  int v0; // eax

  v0 = unk_10696184;
  *(_DWORD *)byte_10696160 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696160[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10696184 = 0;
  }
  *(_DWORD *)byte_10696160 = &ConCommandBase::`vftable';
}
