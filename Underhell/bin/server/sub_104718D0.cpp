void __cdecl sub_104718D0()
{
  int v0; // eax

  v0 = unk_106B36CC;
  *(_DWORD *)byte_106B36A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B36A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B36CC = 0;
  }
  *(_DWORD *)byte_106B36A8 = &ConCommandBase::`vftable';
}
