void __cdecl sub_10478DA0()
{
  int v0; // eax

  v0 = unk_106EBF94;
  *(_DWORD *)byte_106EBF70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBF70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EBF94 = 0;
  }
  *(_DWORD *)byte_106EBF70 = &ConCommandBase::`vftable';
}
