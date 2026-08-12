void __cdecl sub_10471960()
{
  int v0; // eax

  v0 = unk_106B3954;
  *(_DWORD *)byte_106B3930 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3930[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3954 = 0;
  }
  *(_DWORD *)byte_106B3930 = &ConCommandBase::`vftable';
}
