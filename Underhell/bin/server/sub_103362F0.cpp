void __thiscall sub_103362F0(int this)
{
  bool v2; // al
  _DWORD *v3; // ecx
  float *v4; // esi
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // ebx
  int v14; // eax
  int v15; // [esp+4h] [ebp-8h] BYREF
  int v16; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    if ( sub_100296A0((_DWORD *)this) )
    {
      v2 = sub_103341B0((float *)this);
      v3 = (_DWORD *)(this + 4508);
      if ( v2 )
      {
        v16 = sub_10050FC0(v3);
        v4 = (float *)sub_1012BC90(&dword_1069E3E0, 0, "info_target_command_point");
        if ( !v4 )
        {
          DevMsg("**\nVERY BAD THING\nCommand point vanished! Creating a new one\n**\n");
          v4 = (float *)sub_101811E0("info_target_command_point", -1);
        }
        if ( (float *)v16 != v4 )
        {
          sub_100577F0(this + 4508, (int)v4, 0);
          v15 = 3;
          LOBYTE(v16) = 0;
          sub_10057630(this + 4508, &v15);
        }
        if ( ((_DWORD)v4[63] & 0x800) != 0 )
          sub_100DAE60((int)v4);
        v5 = v4[146] - *(float *)(this + 2460);
        v6 = v5 * v5;
        v7 = v4[145] - *(float *)(this + 2456);
        v8 = v6;
        v9 = v4[147] - *(float *)(this + 2464);
        if ( v7 * v7 + v8 + v9 * v9 > 0.01 )
          sub_1025F370(v4, (float *)(this + 2456), 0);
      }
      else
      {
        v10 = sub_10050FC0(v3);
        if ( v10
          && (*(char **)(v10 + 92) == "info_target_command_point"
           || sub_100D6240((_DWORD *)v10, "info_target_command_point")) )
        {
          sub_10334340((void *)this);
        }
        v11 = sub_10050FC0((_DWORD *)(this + 4508));
        if ( v11 != sub_10261B20() )
        {
          DevMsg("Expected to be following player, but not\n");
          v12 = sub_10261B20();
          sub_100577F0(this + 4508, v12, 0);
          v15 = 0;
          LOBYTE(v16) = 0;
          sub_10057630(this + 4508, &v15);
        }
      }
    }
    else
    {
      v13 = (_DWORD *)(this + 4508);
      v14 = sub_10050FC0(v13);
      if ( v14
        && (*(char **)(v14 + 92) == "info_target_command_point"
         || sub_100D6240((_DWORD *)v14, "info_target_command_point")) )
      {
        sub_100577F0((int)v13, 0, 0);
        v15 = 0;
        LOBYTE(v16) = 0;
        sub_10057630((int)v13, &v15);
      }
    }
  }
}
