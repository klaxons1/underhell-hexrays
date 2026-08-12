void __cdecl sub_1046F840()
{
  int v0; // eax

  v0 = unk_106961CC;
  *(_DWORD *)byte_106961A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106961A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106961CC = 0;
  }
  *(_DWORD *)byte_106961A8 = &ConCommandBase::`vftable';
}
