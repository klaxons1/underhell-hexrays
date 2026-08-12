void __cdecl sub_10473010()
{
  int v0; // eax

  v0 = unk_106BA8CC;
  *(_DWORD *)byte_106BA8A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA8A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA8CC = 0;
  }
  *(_DWORD *)byte_106BA8A8 = &ConCommandBase::`vftable';
}
