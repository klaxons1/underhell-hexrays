void __cdecl sub_104717E0()
{
  int v0; // eax

  v0 = unk_106B34CC;
  *(_DWORD *)byte_106B34A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B34A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B34CC = 0;
  }
  *(_DWORD *)byte_106B34A8 = &ConCommandBase::`vftable';
}
