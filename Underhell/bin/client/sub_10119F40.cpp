bool __stdcall sub_10119F40(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v5; // esi
  int (__thiscall *v6)(char *); // eax
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // [esp-4h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  v1 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)off_103DCD78 + 16389) + 20))((char *)off_103DCD78 + 65556, 1);
  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1041315C + 276))(dword_1041315C, 56 * v1, 1);
  v3 = 0;
  if ( !v2 )
    return 0;
  v16 = v1;
  v5 = a1;
  sub_10118100((_DWORD *)(a1 + 24), v2, v16);
  v6 = *(int (__thiscall **)(char *))(*((_DWORD *)off_103DCD78 + 16389) + 24);
  v18 = 0;
  v7 = v6((char *)off_103DCD78 + 65556);
  if ( v7 >= 0 )
  {
    do
    {
      v8 = (_DWORD *)sub_1007A6A0(off_103DCD78, v3);
      if ( v8 )
        sub_10119EA0(v8, a1, &v18);
      ++v3;
    }
    while ( v3 <= v7 );
  }
  v9 = *((_DWORD *)off_103DCD78 + 16385);
  if ( v9 )
  {
    v10 = ((v9 - (int)off_103DCD78 - 4) >> 4)
        | (*((_DWORD *)off_103DCD78 + 4 * ((v9 - (int)off_103DCD78 - 4) >> 4) + 2) << 12);
    if ( v10 != -1 )
    {
      v17 = 56 * v18;
      do
      {
        v11 = (_DWORD *)sub_1007A770(off_103DCD78, v10);
        if ( v11 && ((*(int (__thiscall **)(_DWORD *))(*v11 + 216))(v11) & 0x400) != 0 )
        {
          v12 = (_DWORD *)(v17 + *(_DWORD *)(v5 + 1400));
          *v12 = v18;
          v12[1] = -1;
          v12[13] = sub_10034E90(v11);
          v12[3] = -1;
          v12[2] = (*(int (__thiscall **)(_DWORD *))(v11[2] + 36))(v11 + 2);
          v13 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v11 + 8))(v11);
          ++v18;
          v17 += 56;
          v12[4] = v13;
          v12[7] = 0;
          v12[5] = 0;
          v12[6] = 0;
          v12[8] = 0;
          v5 = a1;
        }
        v14 = *((_DWORD *)off_103DCD78 + 4 * (v10 & 0xFFF) + 4);
        if ( v14 )
          v15 = ((v14 - (int)off_103DCD78 - 4) >> 4)
              | (*((_DWORD *)off_103DCD78 + 4 * ((v14 - (int)off_103DCD78 - 4) >> 4) + 2) << 12);
        else
          v15 = -1;
        v10 = v15;
      }
      while ( v15 != -1 );
    }
  }
  return v18 == *(_DWORD *)(v5 + 1396);
}
