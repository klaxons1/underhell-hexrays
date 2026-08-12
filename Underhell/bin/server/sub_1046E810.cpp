void __cdecl sub_1046E810()
{
  int v0; // eax

  v0 = unk_1069057C;
  *(_DWORD *)byte_10690558 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690558[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069057C = 0;
  }
  *(_DWORD *)byte_10690558 = &ConCommandBase::`vftable';
}
