void __cdecl sub_1046F1F0()
{
  int v0; // eax

  v0 = unk_10693144;
  *(_DWORD *)byte_10693120 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693120[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693144 = 0;
  }
  *(_DWORD *)byte_10693120 = &ConCommandBase::`vftable';
}
