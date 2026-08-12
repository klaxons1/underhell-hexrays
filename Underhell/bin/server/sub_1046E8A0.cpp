void __cdecl sub_1046E8A0()
{
  int v0; // eax

  v0 = unk_10690804;
  *(_DWORD *)byte_106907E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106907E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690804 = 0;
  }
  *(_DWORD *)byte_106907E0 = &ConCommandBase::`vftable';
}
