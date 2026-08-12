int __usercall sub_10210E40@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int *v7; // ebx
  int v8; // ebx
  double v9; // st7
  _BYTE v10[4]; // [esp+4h] [ebp-4h] BYREF

  *(float *)(a1 + 1420) = *(float *)(a1 + 1072);
  *(float *)(a1 + 1236) = 1.0;
  *(float *)(a1 + 1240) = 1.0;
  *(float *)(a1 + 1244) = 1.0;
  result = sub_1020CF10(a1, a2);
  if ( (*(_BYTE *)(a1 + 252) & 1) != 0 )
    return result;
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v5 = *(_DWORD **)(a1 + 1100);
  if ( v5 && *v5 )
    v6 = *(_DWORD *)(a1 + 1100);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( (*(_DWORD *)(*(_DWORD *)v6 + 152) & 0x800) != 0 )
    sub_1020B300(a1);
  else
    sub_100C1C00((float *)(a1 + 1072), (float *)(a1 + 1420));
  if ( !*(_DWORD *)(a1 + 1284)
    && *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 1120) + 52))(a1 + 1120, v10)
    && (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 1120) + 68))(a1 + 1120) )
  {
    *(_DWORD *)(a1 + 1284) = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 1120) + 68))(a1 + 1120);
  }
  v7 = (int *)(a1 + 220);
  if ( !*(_DWORD *)(a1 + 220) )
    goto LABEL_31;
  if ( !*(_DWORD *)(a1 + 1284)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 6)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 1)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 8)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 10)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 9) )
  {
    if ( *v7 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
      *v7 = 0;
    }
LABEL_31:
    if ( *(_BYTE *)(a1 + 225) != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *(_BYTE *)(a1 + 225) = 1;
    }
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 2;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2
    && ((*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 6)
     || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 10)) )
  {
    sub_100EA940((int *)a1, 0x10000);
  }
LABEL_33:
  v8 = *v7;
  if ( v8 <= 0 )
    v8 = 1;
  if ( *(_DWORD *)(a1 + 216) != v8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 456))(a1, a1 + 216);
    *(_DWORD *)(a1 + 216) = v8;
  }
  v9 = *(float *)(a1 + 1200);
  *(_DWORD *)(a1 + 1220) = *(_DWORD *)(dword_106B31C8 + 24);
  if ( 0.0 == v9 )
    *(float *)(a1 + 1200) = 0.1;
  *(float *)(a1 + 1208) = -5.0;
  *(float *)(a1 + 1212) = 0.0;
  *(float *)(a1 + 1216) = 0.0;
  result = sub_100BDCE0(a1, 389);
  if ( result == -1 )
  {
    result = sub_100BDCE0(a1, 388);
    *(_BYTE *)(a1 + 1299) = result != -1 ? 0 : 2;
  }
  else
  {
    *(_BYTE *)(a1 + 1299) = 3;
  }
  *(_DWORD *)(a1 + 1428) = -1;
  *(_DWORD *)(a1 + 1228) = -1;
  *(_DWORD *)(a1 + 196) = sub_1020F1A0;
  return result;
}
