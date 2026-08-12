void __cdecl sub_1046F410()
{
  int v0; // eax

  v0 = unk_10693894;
  *(_DWORD *)byte_10693870 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693870[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693894 = 0;
  }
  *(_DWORD *)byte_10693870 = &ConCommandBase::`vftable';
}
