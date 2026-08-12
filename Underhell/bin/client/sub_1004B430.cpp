void __userpurge sub_1004B430(int a1@<ecx>, _DWORD *a2@<edi>, float a3)
{
  unsigned int v4; // eax
  char *v5; // ecx
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  double v11; // st7
  float *v12; // eax
  int v13; // eax
  float *v14; // [esp+14h] [ebp-21Ch]
  float v15[128]; // [esp+28h] [ebp-208h] BYREF
  _DWORD *v16; // [esp+228h] [ebp-8h]
  _DWORD *v17; // [esp+22Ch] [ebp-4h]
  int savedregs; // [esp+230h] [ebp+0h] BYREF

  v4 = *(_DWORD *)(a1 - 868);
  if ( v4 != -1 )
  {
    v5 = (char *)off_103DCD74 + 16 * (*(_DWORD *)(a1 - 868) & 0xFFF) + 4;
    if ( *((_DWORD *)v5 + 1) == v4 >> 12 )
    {
      v6 = *(_DWORD **)v5;
      if ( *(_DWORD *)v5 )
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 164))(v6);
        v17 = v7;
        if ( v7
          && sub_10028810((int)v7, v15)
          && (v8 = *(_DWORD *)dword_10413178,
              v9 = (*(int (__thiscall **)(_DWORD *))(v17[1] + 36))(v17 + 1),
              a2 = (_DWORD *)(*(int (__thiscall **)(int, int))(v8 + 112))(dword_10413178, v9),
              (v16 = a2) != 0)
          && (v10 = sub_10025760(v17), (a2 = (_DWORD *)((char *)&v16[3 * v10] + a2[44])) != 0) )
        {
          while ( 1 )
          {
            v11 = a3;
            if ( a3 < (double)*(float *)(a1 + 268) )
              break;
            a3 = v11 - *(float *)(a1 + 268);
            *(float *)(a1 + 268) = *(float *)(a1 + 264);
            v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                    dword_10413198,
                    0,
                    a2[1] - 1);
            sub_1004B1C0(
              a1 - 1192,
              (int)&savedregs,
              (int)a2,
              a1,
              a3,
              (float *)((char *)&a2[17 * v13 + 2] + a2[2]),
              (float *)((char *)&a2[17 * v13 + 5] + a2[2]),
              v15[*(_DWORD *)((char *)&a2[17 * v13] + a2[2])]);
          }
        }
        else
        {
          while ( 1 )
          {
            v11 = a3;
            if ( a3 < (double)*(float *)(a1 + 268) )
              break;
            a3 = v11 - *(float *)(a1 + 268);
            *(float *)(a1 + 268) = *(float *)(a1 + 264);
            sub_10037F50((int)v6);
            v14 = (float *)(*(int (__thiscall **)(_DWORD *))(v6[88] + 8))(v6 + 88);
            v12 = (float *)(*(int (__thiscall **)(_DWORD *))(v6[88] + 4))(v6 + 88);
            sub_1004B1C0(a1 - 1192, (int)&savedregs, (int)a2, a1, a3, v12, v14, COERCE_FLOAT(v6 + 165));
          }
        }
        *(float *)(a1 + 268) = *(float *)(a1 + 268) - v11;
      }
    }
  }
}
