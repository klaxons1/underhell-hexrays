void __cdecl sub_1046E7F0()
{
  int v0; // eax

  v0 = unk_106904EC;
  *(_DWORD *)byte_106904C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106904C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106904EC = 0;
  }
  *(_DWORD *)byte_106904C8 = &ConCommandBase::`vftable';
}
