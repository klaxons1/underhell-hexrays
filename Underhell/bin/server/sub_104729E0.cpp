void __cdecl sub_104729E0()
{
  int v0; // eax

  v0 = unk_106B8F14;
  *(_DWORD *)byte_106B8EF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8EF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8F14 = 0;
  }
  *(_DWORD *)byte_106B8EF0 = &ConCommandBase::`vftable';
}
