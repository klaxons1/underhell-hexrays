void __cdecl sub_1046E940()
{
  int v0; // eax

  v0 = unk_10690AD4;
  *(_DWORD *)byte_10690AB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690AB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690AD4 = 0;
  }
  *(_DWORD *)byte_10690AB0 = &ConCommandBase::`vftable';
}
