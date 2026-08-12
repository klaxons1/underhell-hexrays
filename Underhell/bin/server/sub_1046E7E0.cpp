void __cdecl sub_1046E7E0()
{
  int v0; // eax

  v0 = unk_106904A4;
  *(_DWORD *)byte_10690480 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690480[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106904A4 = 0;
  }
  *(_DWORD *)byte_10690480 = &ConCommandBase::`vftable';
}
