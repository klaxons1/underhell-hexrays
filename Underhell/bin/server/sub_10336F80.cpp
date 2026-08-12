char __thiscall sub_10336F80(int this)
{
  char result; // al
  int v3; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF
  char v5; // [esp+8h] [ebp-4h]

  if ( !sub_1012BC90(&dword_1069E3E0, 0, "info_target_command_point") )
    sub_101811E0("info_target_command_point", -1);
  result = sub_100296A0((_DWORD *)this);
  if ( result )
  {
    if ( sub_100B16F0(*(int **)(this + 2796), 1) > 4 )
      DevMsg("Error: Spawning citizen in player squad but exceeds squad limit of %d members\n", 4);
    return sub_103360E0(this);
  }
  else if ( (*(_DWORD *)(this + 248) & 0x10000) != 0 )
  {
    result = dword_106B31C8;
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    {
      v3 = sub_10261B20();
      sub_100577F0(this + 4508, v3, 0);
      v4 = 0;
      v5 = 0;
      return sub_10057630(this + 4508, &v4);
    }
  }
  return result;
}
