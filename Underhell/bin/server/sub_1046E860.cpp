void __cdecl sub_1046E860()
{
  int v0; // eax

  v0 = unk_106906E4;
  *(_DWORD *)byte_106906C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106906C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106906E4 = 0;
  }
  *(_DWORD *)byte_106906C0 = &ConCommandBase::`vftable';
}
