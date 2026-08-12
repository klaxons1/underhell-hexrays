unsigned int __usercall sub_1029ED70@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int result; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  bool v10; // al
  float v13[3]; // [esp+4h] [ebp-18h] BYREF
  float v14[3]; // [esp+10h] [ebp-Ch] BYREF

  result = a1[17];
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (a1[17] & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      v6 = 0;
      if ( *v5 )
      {
        (*(void (__thiscall **)(int *, float *, float *, int))(*a1 + 280))(a1, v14, v13, a3);
        sub_100E10C0(a1[1], v14);
        sub_100E11A0(a1[1], v13);
        sub_100E0970(a1[1], v7, 0, 0);
        *(_BYTE *)(*(_DWORD *)(a1[1] + 2604) + 92) = 1;
        a1[4] = 2;
        if ( a1[26] == 1 )
          a1[26] = 0;
        if ( a1[17] == -1 || off_1061BE18[4 * (a1[17] & 0xFFF) + 2] != (unsigned int)a1[17] >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (a1[17] & 0xFFF) + 1];
        v9 = v8 + 1488;
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v6 = sub_10261B20();
        v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1[1] + 1080))(a1[1], v6, a2) == 1
           || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1[1] + 1080))(a1[1], v6) == 2;
        return (*(int (__thiscall **)(int, int, bool))(*(_DWORD *)v9 + 16))(v9, a1[1], !v10);
      }
    }
  }
  return result;
}
