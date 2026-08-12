void __cdecl sub_104740F0()
{
  int v0; // eax

  v0 = unk_106C538C;
  *(_DWORD *)byte_106C5368 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C5368[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C538C = 0;
  }
  *(_DWORD *)byte_106C5368 = &ConCommandBase::`vftable';
}
