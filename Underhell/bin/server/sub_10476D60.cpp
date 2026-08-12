void __cdecl sub_10476D60()
{
  int v0; // eax

  v0 = unk_106DE8E4;
  *(_DWORD *)byte_106DE8C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE8C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE8E4 = 0;
  }
  *(_DWORD *)byte_106DE8C0 = &ConCommandBase::`vftable';
}
