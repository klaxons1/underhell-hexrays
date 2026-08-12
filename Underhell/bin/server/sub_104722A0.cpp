void __cdecl sub_104722A0()
{
  int v0; // eax

  v0 = unk_106B72BC;
  *(_DWORD *)byte_106B7298 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7298[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B72BC = 0;
  }
  *(_DWORD *)byte_106B7298 = &ConCommandBase::`vftable';
}
