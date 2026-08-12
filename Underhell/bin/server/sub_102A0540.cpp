unsigned int __usercall sub_102A0540@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int result; // eax
  int *v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  bool v18; // al
  int v19; // ecx

  result = *(_DWORD *)(a1 + 68);
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      if ( *v5 )
      {
        v6 = *(_DWORD *)(a1 + 72);
        if ( v6 != -1 )
        {
          v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 72) & 0xFFF) + 1];
          v8 = v6 >> 12;
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 72) & 0xFFF) + 2] == v8 )
          {
            if ( *v7 )
            {
              if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 72) & 0xFFF) + 2] == v8 )
                v9 = *v7;
              else
                v9 = 0;
              sub_1025FAC0(v9);
              *(_DWORD *)(a1 + 72) = -1;
            }
          }
        }
        sub_10023CB0(*(char **)(a1 + 4), 25);
        sub_100E0970(*(_DWORD *)(a1 + 4), v10, 3, 0);
        sub_100EA9A0(*(int **)(a1 + 4), 1024);
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 2604) + 92) = 0;
        v11 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 424);
        if ( v11 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 48))(v11, 1);
        v12 = *(_DWORD *)(a1 + 68);
        if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(v13 + 1488) + 12))(v13 + 1488, *(_DWORD *)(a1 + 4));
        v14 = *(_DWORD *)(a1 + 68);
        if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
        v16 = v15 + 1488;
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v17 = sub_10261B20();
        else
          v17 = 0;
        v18 = (*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 4) + 1080))(
                *(_DWORD *)(a1 + 4),
                v17,
                a3,
                a2) == 1
           || (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 1080))(*(_DWORD *)(a1 + 4), v17) == 2;
        (*(void (__thiscall **)(int, _DWORD, bool))(*(_DWORD *)v16 + 20))(v16, *(_DWORD *)(a1 + 4), !v18);
        v19 = *(_DWORD *)(a1 + 4);
        result = 0;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(v19 + 2704) = 0;
        if ( *(_DWORD *)(a1 + 104) == 2 )
        {
          *(_DWORD *)(a1 + 104) = 0;
          *(_BYTE *)(a1 + 100) = 0;
          *(_DWORD *)(a1 + 68) = -1;
        }
      }
    }
  }
  return result;
}
