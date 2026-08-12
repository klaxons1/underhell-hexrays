void __cdecl sub_101C2C40(int a1)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // eax
  _BYTE *v9; // edi
  int i; // eax
  int v11; // [esp+Ch] [ebp+8h]

  if ( !*(_DWORD *)(a1 + 24) )
  {
    sub_101C8820(a1, 0);
    return;
  }
  if ( *(_BYTE *)(a1 + 756) )
  {
    v2 = *(_DWORD *)(a1 + 760);
    if ( v2 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 760) & 0xFFF) + 2] == v2 >> 12 )
    {
      v3 = (int *)off_1061BE18[4 * (*(_DWORD *)(a1 + 760) & 0xFFF) + 1];
      if ( v3 )
      {
        if ( *(float *)(dword_106B31C8 + 12) - 1.0 < sub_100F5E10(v3) )
          return;
      }
    }
    sub_100EAE60(a1);
  }
  v4 = dword_10700AC8;
  v11 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( (unsigned __int8)sub_102064A0(a1 + 136) )
  {
    v5 = *(_DWORD *)(a1 + 412);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v5 >> 12 )
      {
        v7 = *v6;
        if ( *v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(*v6) )
        {
          v8 = sub_102064B0(a1 + 136);
          v9 = (_BYTE *)sub_1025FB50(v8 + 1);
          if ( !v9 || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 320))(v9) )
            v9 = 0;
          if ( v9 == (_BYTE *)v7 && v9[3361] )
            sub_101C1190(v7);
        }
        v4 = v11;
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 400))(a1);
    for ( i = dword_106E1C58; i; i = *(_DWORD *)(i + 4) )
      *(_DWORD *)(i + 12) = 0;
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 400))(a1);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 104))(v4, v11);
}
