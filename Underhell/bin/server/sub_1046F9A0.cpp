void __cdecl sub_1046F9A0()
{
  int v0; // eax

  v0 = unk_10696764;
  *(_DWORD *)byte_10696740 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696740[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10696764 = 0;
  }
  *(_DWORD *)byte_10696740 = &ConCommandBase::`vftable';
}
