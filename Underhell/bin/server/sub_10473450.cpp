void __cdecl sub_10473450()
{
  int v0; // eax

  v0 = unk_106BBCE4;
  *(_DWORD *)byte_106BBCC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBCC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBCE4 = 0;
  }
  *(_DWORD *)byte_106BBCC0 = &ConCommandBase::`vftable';
}
