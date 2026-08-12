void __cdecl sub_104722D0()
{
  int v0; // eax

  v0 = unk_106B7394;
  *(_DWORD *)byte_106B7370 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7370[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7394 = 0;
  }
  *(_DWORD *)byte_106B7370 = &ConCommandBase::`vftable';
}
