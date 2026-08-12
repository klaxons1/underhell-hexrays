char __userpurge sub_10083110@<al>(int a1@<ecx>, double a2@<st0>, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // eax
  int *v6; // ecx
  int *v8; // ecx
  int v9; // eax
  int v10; // edx
  float *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  float *v15; // eax
  float v16; // [esp+8h] [ebp-4h]

  if ( *a3 == -3 )
  {
    v4 = **(_DWORD **)(a1 + 28);
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 32) & 0x10) != 0 )
      {
        v5 = *(_DWORD *)(v4 + 28);
        if ( v5 != -1 )
        {
          v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 )
          {
            if ( *v6 )
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 1780))(*(_DWORD *)(a1 - 4), *v6);
              *a3 = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 2104) + 24))(
         *(_DWORD *)(a1 - 4) + 2104,
         a3) )
  {
    return 1;
  }
  if ( !(unsigned __int8)sub_100A61C0(*(_DWORD *)(a1 + 28)) )
  {
    v8 = *(int **)(a1 + 28);
    v9 = *v8;
    v10 = *(_DWORD *)(*v8 + 40);
    if ( v10 )
    {
      if ( *(_DWORD *)(v9 + 36) == *(_DWORD *)(v10 + 36) && (*(_BYTE *)(v9 + 32) & 0x2A) == 0 )
      {
        v11 = (float *)sub_100A6030(v8);
        sub_10079A70(*(_DWORD *)(a1 + 4), (float *)(*(_DWORD *)(a1 - 4) + 716), v11);
        v16 = a2;
        a2 = sub_100737B0(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 1676));
        if ( a2 > v16 )
        {
          sub_100820C0(a1 - 8);
          *a3 = 1;
        }
      }
    }
  }
  v12 = sub_10021B60(*(_DWORD **)(a1 - 4));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 - 4) + 1416))(*(_DWORD *)(a1 - 4), v12);
  v13 = *(_DWORD *)(a1 - 4);
  v14 = *(_DWORD *)(a1 + 4);
  v15 = (float *)sub_100A6140(*(_DWORD *)(a1 + 28));
  sub_10079A70(v14, (float *)(v13 + 716), v15);
  if ( *(float *)(*(_DWORD *)(a1 + 28) + 4) + 0.1 <= a2 )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 8) + 48))(a1 - 8);
  *a3 = 0;
  return 1;
}
