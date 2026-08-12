void __cdecl sub_10471380()
{
  int v0; // eax

  v0 = unk_106B16FC;
  *(_DWORD *)byte_106B16D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B16D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B16FC = 0;
  }
  *(_DWORD *)byte_106B16D8 = &ConCommandBase::`vftable';
}
