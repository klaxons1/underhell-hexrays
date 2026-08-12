void __cdecl sub_10473420()
{
  int v0; // eax

  v0 = unk_106BBC3C;
  *(_DWORD *)byte_106BBC18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBC18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBC3C = 0;
  }
  *(_DWORD *)byte_106BBC18 = &ConCommandBase::`vftable';
}
