void __cdecl sub_1046F200()
{
  int v0; // eax

  v0 = unk_10693194;
  *(_DWORD *)byte_10693170 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693170[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693194 = 0;
  }
  *(_DWORD *)byte_10693170 = &ConCommandBase::`vftable';
}
