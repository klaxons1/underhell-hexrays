void __cdecl sub_10476EA0()
{
  int v0; // eax

  v0 = unk_106DECE4;
  *(_DWORD *)byte_106DECC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DECC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DECE4 = 0;
  }
  *(_DWORD *)byte_106DECC0 = &ConCommandBase::`vftable';
}
