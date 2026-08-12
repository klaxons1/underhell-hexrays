void __userpurge sub_102E6CA0(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // ebx
  int v11; // eax
  int v14; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = a1;
  if ( a3 && (int)a1[276] <= 0 )
  {
    for ( i = 0; i < 12; ++i )
    {
      v4 = sub_101811E0("ent_watery_leech", -1);
      if ( v4 )
      {
        v5 = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a2);
        v6 = v3[276];
        v14 = *v5;
        v7 = v3[274];
        if ( v6 + 1 > v7 )
          sub_102ABFC0(v3 + 273, v6 - v7 + 1);
        ++v3[276];
        v8 = v3[273];
        v9 = v3[276] - v6 - 1;
        v3[277] = v8;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
        v10 = (_DWORD *)(v3[273] + 4 * v6);
        if ( v10 )
          *v10 = v14;
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
        if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
          sub_100DAE60(a3);
        sub_100E0D20(v4, (float *)(a3 + 580));
        a2 = a3;
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4);
        if ( i > 8 )
          v11 = (i & 3) + 4;
        else
          v11 = i & 3;
        sub_100C1170(v4, v11);
        sub_100C2AB0(v4);
        v3 = a1;
      }
    }
  }
}
