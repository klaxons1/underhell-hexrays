int __fastcall sub_10166E20(int a1, int a2, int a3)
{
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int result; // eax
  float v8; // [esp+Ch] [ebp-14h]

  sub_100E0970(a1, a2, 5, 1);
  if ( *(_DWORD *)(a1 + 556) != COERCE_INT(0.55000001) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 696))(a1, a1 + 556);
    *(float *)(a1 + 556) = 0.55000001;
  }
  if ( *(_BYTE *)(a1 + 119) != 0xFF )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 116);
    }
    *(_BYTE *)(a1 + 119) = -1;
  }
  if ( *(_BYTE *)(a1 + 113) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        sub_100194B0(v5, 113);
    }
    *(_BYTE *)(a1 + 113) = 0;
  }
  if ( *(_BYTE *)(a1 + 112) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        sub_100194B0(v6, 112);
    }
    *(_BYTE *)(a1 + 112) = 0;
  }
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  sub_10112C00(a1 + 320, 2);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 0x10);
  sub_100EBE30(a1, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 104))(a1, a3);
  v8 = *(float *)(dword_106B31C8 + 12) + 4.0;
  result = sub_100EC4A0((int *)a1, v8, 0);
  *(float *)(a1 + 1132) = 25.0;
  *(_DWORD *)(a1 + 196) = sub_10166740;
  *(_BYTE *)(a1 + 1136) = 0;
  *(_DWORD *)(a1 + 1128) = 10;
  *(_DWORD *)(a1 + 1124) = 5;
  return result;
}
