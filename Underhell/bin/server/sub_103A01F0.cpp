void __usercall sub_103A01F0(int a1@<ecx>, int a2@<edi>)
{
  int *v3; // ecx
  int *v4; // ecx
  int v5; // eax
  int *v6; // ecx
  char v7; // al
  double v8; // st7
  double v9; // st7
  int *v10; // ecx
  int v11; // eax
  _BYTE v12[84]; // [esp+14h] [ebp-58h] BYREF
  float v13; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  sub_10112C00(a1 + 320, 6);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 0x50);
  *(_DWORD *)(a1 + 1708) = -1;
  *(_DWORD *)(a1 + 1740) = 0;
  *(_BYTE *)(a1 + 1713) = 0;
  j_nullsub_4((void *)a1);
  sub_100E88A0((_DWORD *)a1, 0);
  *(_DWORD *)(a1 + 252) |= 0x8000000u;
  sub_100204A0((_DWORD *)a1);
  sub_10020460((_DWORD *)a1, 67239937);
  *(_DWORD *)(a1 + 3728) = 0;
  if ( *(_BYTE *)(a1 + 3800) != 1 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(a1 + 24);
      if ( v3 )
        sub_100194B0(v3, 3800);
    }
    *(_BYTE *)(a1 + 3800) = 1;
  }
  sub_1039FCC0((_DWORD *)a1);
  if ( *(_BYTE *)(a1 + 3838) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 3838);
    }
    *(_BYTE *)(a1 + 3838) = 0;
  }
  *(float *)(a1 + 1684) = -1.0;
  *(_DWORD *)(a1 + 1680) = -1;
  *(float *)(a1 + 3788) = -1200.0;
  *(_DWORD *)(a1 + 1676) = 1;
  sub_10027A90(a1, 0);
  v5 = *(_DWORD *)(a1 + 3804);
  v13 = 0.0;
  if ( v5 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        sub_100194B0(v6, 3804);
    }
    *(float *)(a1 + 3804) = 0.0;
  }
  v7 = *(_BYTE *)(a1 + 3824);
  *(_BYTE *)(a1 + 3825) = v7;
  if ( v7 )
    sub_1039EE40((float *)a1, (int)&savedregs, a2, a1, (int)v12);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  sub_1001FBB0((_DWORD *)a1, 2048.0);
  if ( *(_BYTE *)(a1 + 3837) )
    v8 = 2048.0;
  else
    v8 = 300.0;
  *(float *)(a1 + 3772) = v8;
  *(_DWORD *)(a1 + 2324) = 0;
  *(float *)(a1 + 800) = 20.0;
  *(_DWORD *)(a1 + 3796) = 1;
  v9 = 0.0;
  *(_DWORD *)(a1 + 3832) = 0;
  *(_DWORD *)(a1 + 3812) = -1;
  *(float *)(a1 + 3816) = 0.0;
  *(float *)(a1 + 3820) = 0.0;
  *(float *)(a1 + 3844) = 0.0;
  if ( *(_BYTE *)(a1 + 3838) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(a1 + 24);
      if ( v10 )
      {
        sub_100194B0(v10, 3838);
        v9 = 0.0;
      }
    }
    *(_BYTE *)(a1 + 3838) = 0;
  }
  v11 = *(_DWORD *)(a1 + 2604);
  *(float *)(a1 + 3840) = v9;
  *(float *)(v11 + 24) = v9;
  sub_1039FC20(a1);
}
