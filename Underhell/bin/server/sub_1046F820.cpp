void __cdecl sub_1046F820()
{
  int v0; // eax

  v0 = unk_1069613C;
  *(_DWORD *)byte_10696118 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696118[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069613C = 0;
  }
  *(_DWORD *)byte_10696118 = &ConCommandBase::`vftable';
}
