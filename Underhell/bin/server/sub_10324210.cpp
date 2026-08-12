void __userpurge sub_10324210(_DWORD *a1@<ecx>, int a2@<edi>, char a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  float *v13; // edi
  int *v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // esi
  int *v24; // ecx
  int v25; // eax

  v4 = a1[2472];
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v4);
    a1[2472] = 0;
  }
  v5 = a1[935];
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v7 )
    {
      if ( *v6 )
      {
        if ( off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v7 )
          v8 = *v6;
        else
          v8 = 0;
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 836))(v8, 0, a2);
        if ( *(_DWORD *)(dword_106E511C + 48) )
        {
          v9 = a1[935];
          if ( v9 == -1 || off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v9 >> 12 )
            v10 = 0;
          else
            v10 = (_DWORD *)off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
          sub_100EC3F0(v10, 0, 0.0, 0);
          v11 = a1[935];
          if ( v11 == -1 || off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v11 >> 12 )
            v12 = 0;
          else
            v12 = off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
          v13 = (float *)(v12 + 5064);
          if ( *(_DWORD *)(v12 + 5064) != COERCE_INT(1.0) )
          {
            if ( *(_BYTE *)(v12 + 84) )
            {
              *(_BYTE *)(v12 + 88) |= 1u;
            }
            else
            {
              v14 = *(int **)(v12 + 24);
              if ( v14 )
                sub_100194B0(v14, 5064);
            }
            *v13 = 1.0;
          }
        }
        v15 = a1[935];
        if ( v15 == -1 || off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
        sub_101CB440(v16);
        if ( a3 )
        {
          v17 = a1[935];
          if ( v17 == -1 || off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
          sub_1025FAC0(v18);
        }
        a1[935] = -1;
        v19 = a1[934];
        if ( v19 == -1 || off_1061BE18[4 * (a1[934] & 0xFFF) + 2] != v19 >> 12 )
          v20 = 0;
        else
          v20 = off_1061BE18[4 * (a1[934] & 0xFFF) + 1];
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v20 + 1120) + 8))(7000.0);
        if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
        {
          v21 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
          v22 = *(_DWORD *)(v21 + 192);
          v23 = v22 & 0xFFFFFFDF;
          if ( v22 != (v22 & 0xFFFFFFDF) )
          {
            if ( *(_BYTE *)(v21 + 84) )
            {
              *(_BYTE *)(v21 + 88) |= 1u;
            }
            else
            {
              v24 = *(int **)(v21 + 24);
              if ( v24 )
                sub_100194B0(v24, 192);
            }
            *(_DWORD *)(v21 + 192) = v23;
          }
          if ( *(_DWORD *)(v21 + 24) )
            **(_DWORD **)(v21 + 24) |= 0x80u;
          sub_100D8500((_DWORD *)v21);
          v25 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
          sub_101129A0((unsigned __int16 *)(v25 + 320), *(_WORD *)(v25 + 356) & 0xFFFB);
        }
      }
    }
  }
}
