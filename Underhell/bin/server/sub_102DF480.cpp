int __userpurge sub_102DF480@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // edi
  int v10; // edi
  int (__thiscall *v11)(float *); // edx
  unsigned int v12; // eax
  int v13; // edi
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edi
  float v22[13]; // [esp+4h] [ebp-50h] BYREF
  float v23; // [esp+38h] [ebp-1Ch]
  char v24; // [esp+44h] [ebp-10h]

  v5 = sub_101679A0((int)"gordon_invulnerable");
  if ( sub_10167A00(v5) == 1 )
    return 0;
  v7 = a4;
  v8 = *(_DWORD *)(a4 + 64);
  v9 = dword_106B31C8;
  if ( (v8 & 0x20) != 0 && *(float *)(dword_106B31C8 + 12) < (double)a1[1397] )
  {
    if ( *((_BYTE *)a1 + 5592) )
      a1[1397] = 0.0;
    return 0;
  }
  if ( (v8 & 0x8000000) != 0 && *((_BYTE *)a1 + 447) > 2u && !*(_BYTE *)(sub_100232D0((_DWORD *)a4) + 447) )
    return 0;
  if ( *(_DWORD *)(dword_106BB604 + 48) )
  {
    if ( *((int *)a1 + 55) > 25
      && ((_DWORD)a1[64] & 0x4000) == 0
      && *(float *)(v9 + 12) - a1[1267] >= 60.0
      && (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1572))(a1) < 10
      && !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1088))(a1)
      && (*(_BYTE *)(v7 + 64) & 0xC6) != 0 )
    {
      v10 = *(_DWORD *)(dword_106E05CC + 48);
      if ( !(sub_10219A30() % v10) )
      {
        v11 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1572);
        a1[1267] = *(float *)(dword_106B31C8 + 12) - 45.0;
        a4 = 5 * (20 - v11(a1)) - *((_DWORD *)a1 + 546) / 2;
        sub_102DE0F0((int *)a1 + 547, &a4);
        if ( *((int *)a1 + 547) > 100 )
        {
          a4 = 100;
          sub_10172570((_DWORD *)a1 + 547, &a4);
        }
      }
    }
  }
  if ( *(float *)(v7 + 52) > 0.0 )
  {
    a1[1405] = *(float *)(dword_106B31C8 + 12);
    v12 = *(_DWORD *)(v7 + 44);
    if ( v12 != -1
      && off_1061BE18[4 * (*(_DWORD *)(v7 + 44) & 0xFFF) + 2] == v12 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v7 + 44) & 0xFFF) + 1] )
    {
      v13 = *(_DWORD *)a1;
      v14 = sub_1001E870((_DWORD *)v7);
      (*(void (__thiscall **)(float *, int))(v13 + 1012))(a1, v14);
    }
  }
  sub_1001E4E0(v22, v7);
  v15 = *(_DWORD *)(v7 + 64) == 0;
  HIBYTE(a4) = 1;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v7 + 44);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(v7 + 44) & 0xFFF) + 2] != v16 >> 12 )
      v17 = 0;
    else
      v17 = off_1061BE18[4 * (*(_DWORD *)(v7 + 44) & 0xFFF) + 1];
    if ( (float *)v17 == a1 && (float *)sub_100232D0((_DWORD *)v7) == a1 )
      HIBYTE(a4) = 0;
  }
  if ( (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 1096))(a1, a3, a2) )
  {
    v18 = sub_101679A0((int)"gordon_protect_driver");
    if ( sub_10167A00(v18) == 1 && *(float *)(dword_106E0B8C + 44) < (double)v23 )
    {
      v19 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1096))(a1);
      if ( sub_100232D0(v22) == v19 && (v24 & 1) != 0 )
        v23 = *(float *)(dword_106E0BD4 + 44) / v23 * v23;
    }
  }
  if ( HIBYTE(a4) )
    sub_10247FB0(v22);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)off_10627F88 + 88))(off_10627F88, a1);
  return sub_101EA3E0((int *)a1, (int)v22);
}
