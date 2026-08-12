void __cdecl sub_1046FA00()
{
  int v0; // eax

  v0 = unk_10696854;
  *(_DWORD *)byte_10696830 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696830[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10696854 = 0;
  }
  *(_DWORD *)byte_10696830 = &ConCommandBase::`vftable';
}
