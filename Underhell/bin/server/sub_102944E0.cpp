void __stdcall sub_102944E0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  float *v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  int v13; // ecx
  _DWORD *v14; // ebx
  int v15; // [esp+0h] [ebp-8h]
  float *v16; // [esp+4h] [ebp-4h]

  *a2 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v2 = sub_10261B20();
    v16 = (float *)v2;
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v3 = sub_1002A680(&dword_10690DF8);
    v4 = 0;
    v15 = sub_1016BFB0(&dword_10690DF8);
    if ( v15 > 0 )
    {
      do
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 4 * v4) + 264))(*(_DWORD *)(v3 + 4 * v4)) )
          goto LABEL_22;
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 4 * v4) + 1528))(
                *(_DWORD *)(v3 + 4 * v4),
                0) )
          goto LABEL_22;
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 4 * v4) + 220))(*(_DWORD *)(v3 + 4 * v4)) == 3 )
          goto LABEL_22;
        v5 = *(int **)(v3 + 4 * v4);
        if ( (v5[62] & 0x100000) != 0 )
          goto LABEL_22;
        v6 = *v5;
        v7 = sub_10261B20();
        if ( (*(int (__thiscall **)(_DWORD, int))(v6 + 1080))(*(_DWORD *)(v3 + 4 * v4), v7) != 3 )
          goto LABEL_22;
        if ( !sub_100296A0(*(_DWORD **)(v3 + 4 * v4)) && !sub_10262560(*(_DWORD *)(*(_DWORD *)(v3 + 4 * v4) + 24)) )
        {
          v8 = (float *)sub_10019640(*(_DWORD **)(v3 + 4 * v4));
          v9 = *v8 - v16[145];
          v10 = v9 * v9;
          v11 = v8[1] - v16[146];
          v12 = v8[2] - v16[147];
          if ( v12 * v12 + v11 * v11 + v10 > 1800.0
            || fabs(*((float *)sub_10019640(*(_DWORD **)(v3 + 4 * v4)) + 2) - v16[147]) > 192.0 )
          {
            goto LABEL_22;
          }
        }
        v13 = *(_DWORD *)(v3 + 4 * v4);
        if ( *(char **)(v13 + 92) == "npc_citizen" || sub_100D6240((_DWORD *)v13, "npc_citizen") )
        {
          v14 = *(_DWORD **)(v3 + 4 * v4);
          if ( !(unsigned __int8)sub_10335530(v14) || (unsigned __int8)sub_103341A0(v14) && !sub_100296A0(v14) )
            goto LABEL_22;
          if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4 * v4) + 248) & 0x20000) != 0 )
            ++*a2;
        }
        ++*a1;
LABEL_22:
        ++v4;
      }
      while ( v4 < v15 );
    }
  }
}
