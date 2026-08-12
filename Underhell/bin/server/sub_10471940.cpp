void __cdecl sub_10471940()
{
  int v0; // eax

  v0 = unk_106B38C4;
  *(_DWORD *)byte_106B38A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B38A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B38C4 = 0;
  }
  *(_DWORD *)byte_106B38A0 = &ConCommandBase::`vftable';
}
