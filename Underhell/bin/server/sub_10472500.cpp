void __cdecl sub_10472500()
{
  int v0; // eax

  v0 = unk_106B7BC4;
  *(_DWORD *)byte_106B7BA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7BA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7BC4 = 0;
  }
  *(_DWORD *)byte_106B7BA0 = &ConCommandBase::`vftable';
}
