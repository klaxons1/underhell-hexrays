void __cdecl sub_10471390()
{
  int v0; // eax

  v0 = unk_106B1744;
  *(_DWORD *)byte_106B1720 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B1720[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B1744 = 0;
  }
  *(_DWORD *)byte_106B1720 = &ConCommandBase::`vftable';
}
