void __cdecl sub_10472950()
{
  int v0; // eax

  v0 = unk_106B8C3C;
  *(_DWORD *)byte_106B8C18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8C18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8C3C = 0;
  }
  *(_DWORD *)byte_106B8C18 = &ConCommandBase::`vftable';
}
