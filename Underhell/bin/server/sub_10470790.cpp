void __cdecl sub_10470790()
{
  int v0; // eax

  v0 = unk_1069C514;
  *(_DWORD *)byte_1069C4F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_1069C4F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069C514 = 0;
  }
  *(_DWORD *)byte_1069C4F0 = &ConCommandBase::`vftable';
}
