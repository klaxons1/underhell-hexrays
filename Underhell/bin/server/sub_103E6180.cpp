int __usercall sub_103E6180@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int v4; // edx
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  float v11; // [esp+20h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  v3 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 28))(a1, &v11);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v3);
  sub_100EBE30(a1, 7);
  sub_1020CF10(a1, a2);
  sub_10112C00(a1 + 320, 2);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  sub_100E0970(a1, v4, 8, 0);
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  *(_BYTE *)(a1 + 1668) = 0;
  *(float *)(a1 + 1652) = 0.0;
  *(float *)(a1 + 1660) = 0.0;
  *(float *)(a1 + 1672) = 0.0;
  *(float *)(a1 + 1676) = 0.0;
  *(float *)(a1 + 1680) = 0.0;
  *(float *)(a1 + 1684) = 0.0;
  if ( *(_BYTE *)(a1 + 1568) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        sub_100194B0(v5, 1568);
    }
    *(_BYTE *)(a1 + 1568) = 0;
  }
  *(float *)(a1 + 1688) = 0.02;
  *(float *)(a1 + 1692) = 2.4000001;
  *(float *)(a1 + 1696) = 0.012;
  *(float *)(a1 + 1700) = 0.039999999;
  *(float *)(a1 + 1704) = 0.40000001;
  *(float *)(a1 + 1708) = 1.0;
  v6 = dword_10700AC8;
  v7 = *(_DWORD *)dword_10700AC8;
  v11 = *(float *)(a1 + 1660);
  (*(void (__thiscall **)(int))(v7 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v8 = *(_DWORD **)(a1 + 1100);
  if ( v8 && *v8 )
    v9 = *(_DWORD *)(a1 + 1100);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100C1460((_DWORD *)a1, v9, "armextensionpose", v11);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
  return sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
}
