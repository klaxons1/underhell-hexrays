void __cdecl sub_1046F320()
{
  int v0; // eax

  v0 = unk_1069358C;
  *(_DWORD *)byte_10693568 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693568[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069358C = 0;
  }
  *(_DWORD *)byte_10693568 = &ConCommandBase::`vftable';
}
