void __cdecl sub_10474980()
{
  int v0; // eax

  v0 = unk_106CE644;
  *(_DWORD *)byte_106CE620 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CE620[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CE644 = 0;
  }
  *(_DWORD *)byte_106CE620 = &ConCommandBase::`vftable';
}
