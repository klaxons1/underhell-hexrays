void __cdecl sub_1046E890()
{
  int v0; // eax

  v0 = unk_106907BC;
  *(_DWORD *)byte_10690798 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690798[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106907BC = 0;
  }
  *(_DWORD *)byte_10690798 = &ConCommandBase::`vftable';
}
