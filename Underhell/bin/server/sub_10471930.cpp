void __cdecl sub_10471930()
{
  int v0; // eax

  v0 = unk_106B387C;
  *(_DWORD *)byte_106B3858 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3858[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B387C = 0;
  }
  *(_DWORD *)byte_106B3858 = &ConCommandBase::`vftable';
}
