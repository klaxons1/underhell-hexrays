void __cdecl sub_10472380()
{
  int v0; // eax

  v0 = unk_106B76AC;
  *(_DWORD *)byte_106B7688 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7688[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B76AC = 0;
  }
  *(_DWORD *)byte_106B7688 = &ConCommandBase::`vftable';
}
