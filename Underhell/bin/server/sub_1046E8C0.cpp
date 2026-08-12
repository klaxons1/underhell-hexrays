void __cdecl sub_1046E8C0()
{
  int v0; // eax

  v0 = unk_10690894;
  *(_DWORD *)byte_10690870 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690870[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690894 = 0;
  }
  *(_DWORD *)byte_10690870 = &ConCommandBase::`vftable';
}
