void __cdecl sub_10472FA0()
{
  int v0; // eax

  v0 = unk_106BA66C;
  *(_DWORD *)byte_106BA648 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA648[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA66C = 0;
  }
  *(_DWORD *)byte_106BA648 = &ConCommandBase::`vftable';
}
