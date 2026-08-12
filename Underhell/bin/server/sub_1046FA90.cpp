void __cdecl sub_1046FA90()
{
  int v0; // eax

  v0 = unk_10696BD4;
  *(_DWORD *)byte_10696BB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696BB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10696BD4 = 0;
  }
  *(_DWORD *)byte_10696BB0 = &ConCommandBase::`vftable';
}
