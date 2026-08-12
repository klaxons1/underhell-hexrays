char __userpurge sub_1033D870@<al>(float *a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // ebx
  float *v5; // eax
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // ecx
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD v16[12]; // [esp+1Ch] [ebp-30h] BYREF

  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
  if ( v4 )
  {
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
    v8 = *v7 - *v6;
    v9 = v7[1] - v6[1];
    if ( *(float *)(a3 + 4) * *(float *)(a3 + 4) < v8 * v8 + v9 * v9 + (v7[2] - v6[2]) * (v7[2] - v6[2])
      || *((_BYTE *)a1 + 4188) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 1768))(a1, v4, a2) )
      {
        LOBYTE(v5) = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1312))(a1, 11);
      }
      else
      {
        *(float *)&v16[8] = -1.0;
        *(float *)&v16[9] = -1.0;
        v16[1] = dword_1060887C;
        v16[11] = dword_1066F6E8;
        v10 = *((_DWORD *)a1 + 647);
        v16[2] = dword_10608880;
        v16[3] = dword_10608884;
        v16[0] = 2;
        memset(&v16[4], 255, 16);
        v16[10] = 0;
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 20))(v10, v16) )
        {
          if ( sub_10039AE0(a1, 11, 0) == -1 )
            sub_1007DD70(6);
          else
            sub_1007DD70(11);
          v11 = (_DWORD *)*((_DWORD *)a1 + 647);
          *((_DWORD *)a1 + 679) &= ~2u;
          if ( sub_1007E000(v11) )
          {
            sub_1007C990(a1 + 708, 0.0);
            if ( sub_1007E040(*((_DWORD **)a1 + 647)) )
            {
              (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 1748))(a1);
            }
            else
            {
              v12 = sub_10021B60(a1);
              sub_10039F40((int *)a1, v12);
            }
            sub_1007DFB0(*(float *)(a3 + 4));
            v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
            v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
            a1[716] = *v5;
            a1[717] = v5[1];
            a1[718] = v5[2];
          }
          else
          {
            sub_10027CD0(a1, 0);
            LOBYTE(v5) = sub_10081C10(*((_DWORD *)a1 + 647));
          }
        }
        else
        {
          DevWarning(2, "GetPathToEnemy failed!!\n");
          sub_1003ABB0((int *)a1, v4, -1.0);
          LOBYTE(v5) = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1312))(a1, 11);
        }
      }
    }
    else
    {
      LOBYTE(v5) = sub_10027CD0(a1, 0);
    }
  }
  else
  {
    LOBYTE(v5) = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1312))(a1, 6);
  }
  return (char)v5;
}
