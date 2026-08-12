void __cdecl sub_104718E0()
{
  int v0; // eax

  v0 = unk_106B3714;
  *(_DWORD *)byte_106B36F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B36F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3714 = 0;
  }
  *(_DWORD *)byte_106B36F0 = &ConCommandBase::`vftable';
}
