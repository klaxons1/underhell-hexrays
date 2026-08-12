void __cdecl sub_10471670()
{
  int v0; // eax

  v0 = unk_106B2DD4;
  *(_DWORD *)byte_106B2DB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2DB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2DD4 = 0;
  }
  *(_DWORD *)byte_106B2DB0 = &ConCommandBase::`vftable';
}
