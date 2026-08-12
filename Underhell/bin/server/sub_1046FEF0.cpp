void __cdecl sub_1046FEF0()
{
  int v0; // eax

  v0 = unk_106984FC;
  *(_DWORD *)byte_106984D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106984D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106984FC = 0;
  }
  *(_DWORD *)byte_106984D8 = &ConCommandBase::`vftable';
}
