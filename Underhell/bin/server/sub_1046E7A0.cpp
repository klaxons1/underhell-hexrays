void __cdecl sub_1046E7A0()
{
  int v0; // eax

  v0 = unk_106903EC;
  *(_DWORD *)byte_106903C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106903C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106903EC = 0;
  }
  *(_DWORD *)byte_106903C8 = &ConCommandBase::`vftable';
}
