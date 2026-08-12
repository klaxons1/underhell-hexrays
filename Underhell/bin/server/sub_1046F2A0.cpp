void __cdecl sub_1046F2A0()
{
  int v0; // eax

  v0 = unk_106933A4;
  *(_DWORD *)byte_10693380 = &ConVar::`vftable';
  *(_DWORD *)&byte_10693380[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106933A4 = 0;
  }
  *(_DWORD *)byte_10693380 = &ConCommandBase::`vftable';
}
