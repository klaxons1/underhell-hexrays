void __cdecl sub_10478FA0()
{
  int v0; // eax

  v0 = unk_106ECD2C;
  *(_DWORD *)byte_106ECD08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ECD08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ECD2C = 0;
  }
  *(_DWORD *)byte_106ECD08 = &ConCommandBase::`vftable';
}
