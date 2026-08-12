void __cdecl sub_10472BA0()
{
  int v0; // eax

  v0 = unk_106B9784;
  *(_DWORD *)byte_106B9760 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9760[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9784 = 0;
  }
  *(_DWORD *)byte_106B9760 = &ConCommandBase::`vftable';
}
