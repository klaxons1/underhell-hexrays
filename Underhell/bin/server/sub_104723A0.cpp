void __cdecl sub_104723A0()
{
  int v0; // eax

  v0 = unk_106B7764;
  *(_DWORD *)byte_106B7740 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7740[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7764 = 0;
  }
  *(_DWORD *)byte_106B7740 = &ConCommandBase::`vftable';
}
