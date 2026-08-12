char __thiscall sub_1011FC70(float this)
{
  int v3; // ebx
  int *v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  int (__thiscall *v8)(int); // eax
  int v9; // eax
  int v10; // edx
  double v11; // st7
  float v12[14]; // [esp+4h] [ebp-38h] BYREF

  if ( *(char **)(LODWORD(this) + 92) == "func_water" || sub_100D6240((_DWORD *)LODWORD(this), "func_water") )
  {
    sub_101129A0((unsigned __int16 *)(LODWORD(this) + 320), *(_WORD *)(LODWORD(this) + 356) | 0x20);
    v3 = *(_DWORD *)(LODWORD(this) + 248) | 0x1000;
    if ( *(_DWORD *)(LODWORD(this) + 248) != v3 )
    {
      if ( *(_BYTE *)(LODWORD(this) + 84) )
      {
        *(_BYTE *)(LODWORD(this) + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(LODWORD(this) + 24);
        if ( v4 )
          sub_100194B0(v4, 248);
      }
      *(_DWORD *)(LODWORD(this) + 248) = v3;
    }
    v5 = sub_100E9630((float *)LODWORD(this), 0, 0, 0);
    v6 = *(_DWORD *)(LODWORD(this) + 320);
    v12[7] = 0.0099999998;
    v7 = v5;
    v8 = *(int (__thiscall **)(int))(v6 + 8);
    v12[0] = 0.0;
    v12[1] = 0.0;
    v12[2] = 1.0;
    v9 = v8(LODWORD(this) + 320);
    v10 = *(_DWORD *)(LODWORD(this) + 320);
    LODWORD(v12[13]) = v9 + 8;
    v11 = *(float *)((*(int (__thiscall **)(int))(v10 + 32))(LODWORD(this) + 320) + 8) + *(float *)(v9 + 8);
    v12[10] = this;
    LODWORD(v12[12]) = 32;
    v12[3] = v11 - 1.0;
    v12[4] = 0.0;
    v12[5] = 0.0;
    v12[6] = 0.0;
    v12[8] = 0.1;
    v12[9] = 0.0099999998;
    (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_106BAFF4 + 44))(dword_106BAFF4, v7, v12);
    return 1;
  }
  else
  {
    sub_100E9630((float *)LODWORD(this), 0, 0, 0);
    return 1;
  }
}
