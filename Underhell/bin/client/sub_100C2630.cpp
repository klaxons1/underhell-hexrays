int *__userpurge sub_100C2630@<eax>(int *result@<eax>, _DWORD *a2@<ecx>, int a3)
{
  int v3; // esi
  int v5; // ecx
  int *v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // esi
  int *v10; // eax
  int v11; // ebx
  bool v12; // al
  int v13; // ecx
  int *v14; // eax
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  int *v18; // esi
  int *v19; // eax
  int *v20; // eax
  int *v21; // ecx
  int v22; // eax
  int *v23; // esi
  int *v24; // eax

  v3 = a3;
  if ( a3 != a2[4] )
  {
    while ( 1 )
    {
      v5 = dword_10430764;
      if ( (dword_10430764 & 1) == 0 )
      {
        v5 = dword_10430764 | 1;
        dword_10430764 |= 1u;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      if ( v3 == -1 )
        v6 = &dword_10430754;
      else
        v6 = (int *)(a2[1] + 32 * v3);
      v7 = v6[2];
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10430764 = v5;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      if ( v7 == -1 )
        result = &dword_10430754;
      else
        result = (int *)(a2[1] + 32 * v7);
      if ( result[3] )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10430764 = v5;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      if ( v3 == -1 )
        v8 = &dword_10430754;
      else
        v8 = (int *)(a2[1] + 32 * v3);
      v9 = v8[2];
      if ( (v5 & 1) == 0 )
      {
        dword_10430764 = v5 | 1;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      if ( v9 == -1 )
        v10 = &dword_10430754;
      else
        v10 = (int *)(a2[1] + 32 * v9);
      v11 = v10[2];
      v12 = sub_100C1280(a2, v9);
      v13 = dword_10430764;
      if ( v12 )
      {
        if ( (dword_10430764 & 1) == 0 )
        {
          v13 = dword_10430764 | 1;
          dword_10430764 |= 1u;
          dword_10430754 = -1;
          dword_10430758 = -1;
          dword_1043075C = -1;
          dword_10430760 = 1;
        }
        if ( v11 == -1 )
          v14 = &dword_10430754;
        else
          v14 = (int *)(a2[1] + 32 * v11);
        v15 = v14[1];
        if ( (v13 & 1) == 0 )
        {
          dword_10430764 = v13 | 1;
          dword_10430754 = -1;
          dword_10430758 = -1;
          dword_1043075C = -1;
          dword_10430760 = 1;
        }
        if ( v15 == -1 )
          v16 = &dword_10430754;
        else
          v16 = (int *)(a2[1] + 32 * v15);
        if ( !v16[3] )
          goto LABEL_61;
        if ( sub_100C1330(a2, a3) )
        {
          a3 = v9;
          sub_100C13E0(a2, v9);
          v17 = dword_10430764;
          if ( (dword_10430764 & 1) == 0 )
          {
            v17 = dword_10430764 | 1;
            dword_10430764 |= 1u;
            dword_10430754 = -1;
            dword_10430758 = -1;
            dword_1043075C = -1;
            dword_10430760 = 1;
          }
          if ( v9 == -1 )
            v18 = &dword_10430754;
          else
            v18 = (int *)(a2[1] + 32 * v9);
          v9 = v18[2];
          if ( (v17 & 1) == 0 )
          {
            dword_10430764 = v17 | 1;
            dword_10430754 = -1;
            dword_10430758 = -1;
            dword_1043075C = -1;
            dword_10430760 = 1;
          }
          if ( v9 == -1 )
            v19 = &dword_10430754;
          else
            v19 = (int *)(a2[1] + 32 * v9);
          v11 = v19[2];
        }
        *(_DWORD *)(32 * v9 + a2[1] + 12) = 1;
        *(_DWORD *)(32 * v11 + a2[1] + 12) = 0;
        sub_100C15E0(a2, v11);
      }
      else
      {
        if ( (dword_10430764 & 1) == 0 )
        {
          v13 = dword_10430764 | 1;
          dword_10430764 |= 1u;
          dword_10430754 = -1;
          dword_10430758 = -1;
          dword_1043075C = -1;
          dword_10430760 = 1;
        }
        if ( v11 == -1 )
          v20 = &dword_10430754;
        else
          v20 = (int *)(a2[1] + 32 * v11);
        v15 = *v20;
        if ( (v13 & 1) == 0 )
        {
          dword_10430764 = v13 | 1;
          dword_10430754 = -1;
          dword_10430758 = -1;
          dword_1043075C = -1;
          dword_10430760 = 1;
        }
        if ( v15 == -1 )
          v21 = &dword_10430754;
        else
          v21 = (int *)(a2[1] + 32 * v15);
        if ( !v21[3] )
        {
LABEL_61:
          *(_DWORD *)(32 * v9 + a2[1] + 12) = 1;
          *(_DWORD *)(32 * v15 + a2[1] + 12) = 1;
          *(_DWORD *)(32 * v11 + a2[1] + 12) = 0;
          a3 = v11;
          goto LABEL_75;
        }
        if ( sub_100C1280(a2, a3) )
        {
          a3 = v9;
          sub_100C15E0(a2, v9);
          v22 = dword_10430764;
          if ( (dword_10430764 & 1) == 0 )
          {
            v22 = dword_10430764 | 1;
            dword_10430764 |= 1u;
            dword_10430754 = -1;
            dword_10430758 = -1;
            dword_1043075C = -1;
            dword_10430760 = 1;
          }
          if ( v9 == -1 )
            v23 = &dword_10430754;
          else
            v23 = (int *)(a2[1] + 32 * v9);
          v9 = v23[2];
          if ( (v22 & 1) == 0 )
          {
            dword_10430764 = v22 | 1;
            dword_10430754 = -1;
            dword_10430758 = -1;
            dword_1043075C = -1;
            dword_10430760 = 1;
          }
          if ( v9 == -1 )
            v24 = &dword_10430754;
          else
            v24 = (int *)(a2[1] + 32 * v9);
          v11 = v24[2];
        }
        *(_DWORD *)(32 * v9 + a2[1] + 12) = 1;
        *(_DWORD *)(32 * v11 + a2[1] + 12) = 0;
        sub_100C13E0(a2, v11);
      }
LABEL_75:
      result = (int *)a3;
      if ( a3 == a2[4] )
        break;
      v3 = a3;
    }
  }
  *(_DWORD *)(32 * a2[4] + a2[1] + 12) = 1;
  return result;
}
