void __cdecl sub_10472F90()
{
  int v0; // eax

  v0 = unk_106BA5CC;
  *(_DWORD *)byte_106BA5A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA5A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA5CC = 0;
  }
  *(_DWORD *)byte_106BA5A8 = &ConCommandBase::`vftable';
}
