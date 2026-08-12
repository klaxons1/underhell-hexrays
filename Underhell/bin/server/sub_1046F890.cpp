void __cdecl sub_1046F890()
{
  int v0; // eax

  v0 = unk_106962CC;
  *(_DWORD *)byte_106962A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106962A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106962CC = 0;
  }
  *(_DWORD *)byte_106962A8 = &ConCommandBase::`vftable';
}
