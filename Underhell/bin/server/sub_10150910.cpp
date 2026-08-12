char __thiscall sub_10150910(float this)
{
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  int v8; // edx
  double v9; // st7
  float v10[14]; // [esp+4h] [ebp-38h] BYREF

  if ( *(char **)(LODWORD(this) + 92) == "func_water_analog"
    || sub_100D6240((_DWORD *)LODWORD(this), "func_water_analog") )
  {
    sub_101129A0((unsigned __int16 *)(LODWORD(this) + 320), *(_WORD *)(LODWORD(this) + 356) | 0x20);
    v3 = sub_100E9630((float *)LODWORD(this), 0, 0, 0);
    v4 = *(_DWORD *)(LODWORD(this) + 320);
    v10[7] = 0.0099999998;
    v5 = v3;
    v6 = *(int (__thiscall **)(int))(v4 + 8);
    v10[0] = 0.0;
    v10[1] = 0.0;
    v10[2] = 1.0;
    v7 = v6(LODWORD(this) + 320);
    v8 = *(_DWORD *)(LODWORD(this) + 320);
    LODWORD(v10[13]) = v7 + 8;
    v9 = *(float *)((*(int (__thiscall **)(int))(v8 + 32))(LODWORD(this) + 320) + 8) + *(float *)(v7 + 8);
    v10[10] = this;
    LODWORD(v10[12]) = 32;
    v10[3] = v9 - 1.0;
    v10[4] = 0.0;
    v10[5] = 0.0;
    v10[6] = 0.0;
    v10[8] = 0.1;
    v10[9] = 0.0099999998;
    *(_DWORD *)(LODWORD(this) + 952) = (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_106BAFF4 + 44))(
                                         dword_106BAFF4,
                                         v5,
                                         v10);
  }
  else if ( (*(_BYTE *)(LODWORD(this) + 356) & 4) == 0 )
  {
    sub_100E9630((float *)LODWORD(this), 0, 0, 0);
    return 1;
  }
  return 1;
}
