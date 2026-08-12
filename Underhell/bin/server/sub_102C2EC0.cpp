int __thiscall sub_102C2EC0(_DWORD *this, int a2)
{
  int v2; // edx
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // esi
  int *v10; // eax
  int v11; // edi
  bool v12; // al
  int v13; // ecx
  int *v14; // eax
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int *v19; // eax
  int *v20; // eax
  int *v21; // ecx
  int v22; // eax
  int *v23; // ecx
  int *v24; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != this[4] )
  {
    while ( 1 )
    {
      v4 = dword_106DE00C;
      if ( (dword_106DE00C & 1) == 0 )
      {
        v4 = dword_106DE00C | 1;
        dword_106DE00C |= 1u;
        dword_106DDFFC = -1;
        dword_106DE000 = -1;
        dword_106DE004 = -1;
        dword_106DE008 = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_106DDFFC;
      else
        v5 = (int *)(this[1] + 28 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE00C = v4;
        dword_106DDFFC = -1;
        dword_106DE000 = -1;
        dword_106DE004 = -1;
        dword_106DE008 = 1;
      }
      if ( v6 == -1 )
        v7 = &dword_106DDFFC;
      else
        v7 = (int *)(this[1] + 28 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE00C = v4;
        dword_106DDFFC = -1;
        dword_106DE000 = -1;
        dword_106DE004 = -1;
        dword_106DE008 = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_106DDFFC;
      else
        v8 = (int *)(this[1] + 28 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        dword_106DE00C = v4 | 1;
        dword_106DDFFC = -1;
        dword_106DE000 = -1;
        dword_106DE004 = -1;
        dword_106DE008 = 1;
      }
      if ( v9 == -1 )
        v10 = &dword_106DDFFC;
      else
        v10 = (int *)(this[1] + 28 * v9);
      v11 = v10[2];
      v12 = sub_102C0F60(this, v9);
      v13 = dword_106DE00C;
      if ( v12 )
      {
        if ( (dword_106DE00C & 1) == 0 )
        {
          v13 = dword_106DE00C | 1;
          dword_106DE00C |= 1u;
          dword_106DDFFC = -1;
          dword_106DE000 = -1;
          dword_106DE004 = -1;
          dword_106DE008 = 1;
        }
        if ( v11 == -1 )
          v14 = &dword_106DDFFC;
        else
          v14 = (int *)(this[1] + 28 * v11);
        v15 = v14[1];
        if ( (v13 & 1) == 0 )
        {
          dword_106DE00C = v13 | 1;
          dword_106DDFFC = -1;
          dword_106DE000 = -1;
          dword_106DE004 = -1;
          dword_106DE008 = 1;
        }
        if ( v15 == -1 )
          v16 = &dword_106DDFFC;
        else
          v16 = (int *)(this[1] + 28 * v15);
        if ( !v16[3] )
          goto LABEL_61;
        if ( sub_102C02F0(this, a2) )
        {
          a2 = v9;
          sub_102C1020(this, v9);
          v17 = dword_106DE00C;
          if ( (dword_106DE00C & 1) == 0 )
          {
            v17 = dword_106DE00C | 1;
            dword_106DE00C |= 1u;
            dword_106DDFFC = -1;
            dword_106DE000 = -1;
            dword_106DE004 = -1;
            dword_106DE008 = 1;
          }
          if ( v9 == -1 )
            v18 = &dword_106DDFFC;
          else
            v18 = (int *)(this[1] + 28 * v9);
          v9 = v18[2];
          if ( (v17 & 1) == 0 )
          {
            dword_106DE00C = v17 | 1;
            dword_106DDFFC = -1;
            dword_106DE000 = -1;
            dword_106DE004 = -1;
            dword_106DE008 = 1;
          }
          if ( v9 == -1 )
            v19 = &dword_106DDFFC;
          else
            v19 = (int *)(this[1] + 28 * v9);
          v11 = v19[2];
        }
        *(_DWORD *)(this[1] + 28 * v9 + 12) = 1;
        *(_DWORD *)(this[1] + 28 * v11 + 12) = 0;
        sub_102C11D0(this, v11);
      }
      else
      {
        if ( (dword_106DE00C & 1) == 0 )
        {
          v13 = dword_106DE00C | 1;
          dword_106DE00C |= 1u;
          dword_106DDFFC = -1;
          dword_106DE000 = -1;
          dword_106DE004 = -1;
          dword_106DE008 = 1;
        }
        if ( v11 == -1 )
          v20 = &dword_106DDFFC;
        else
          v20 = (int *)(this[1] + 28 * v11);
        v15 = *v20;
        if ( (v13 & 1) == 0 )
        {
          dword_106DE00C = v13 | 1;
          dword_106DDFFC = -1;
          dword_106DE000 = -1;
          dword_106DE004 = -1;
          dword_106DE008 = 1;
        }
        if ( v15 == -1 )
          v21 = &dword_106DDFFC;
        else
          v21 = (int *)(this[1] + 28 * v15);
        if ( !v21[3] )
        {
LABEL_61:
          *(_DWORD *)(this[1] + 28 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 28 * v15 + 12) = 1;
          *(_DWORD *)(this[1] + 28 * v11 + 12) = 0;
          a2 = v11;
          goto LABEL_75;
        }
        if ( sub_102C0F60(this, a2) )
        {
          a2 = v9;
          sub_102C11D0(this, v9);
          v22 = dword_106DE00C;
          if ( (dword_106DE00C & 1) == 0 )
          {
            v22 = dword_106DE00C | 1;
            dword_106DE00C |= 1u;
            dword_106DDFFC = -1;
            dword_106DE000 = -1;
            dword_106DE004 = -1;
            dword_106DE008 = 1;
          }
          if ( v9 == -1 )
            v23 = &dword_106DDFFC;
          else
            v23 = (int *)(this[1] + 28 * v9);
          v9 = v23[2];
          if ( (v22 & 1) == 0 )
          {
            dword_106DE00C = v22 | 1;
            dword_106DDFFC = -1;
            dword_106DE000 = -1;
            dword_106DE004 = -1;
            dword_106DE008 = 1;
          }
          if ( v9 == -1 )
            v24 = &dword_106DDFFC;
          else
            v24 = (int *)(this[1] + 28 * v9);
          v11 = v24[2];
        }
        *(_DWORD *)(this[1] + 28 * v9 + 12) = 1;
        *(_DWORD *)(this[1] + 28 * v11 + 12) = 0;
        sub_102C1020(this, v11);
      }
LABEL_75:
      if ( a2 == this[4] )
        break;
      v2 = a2;
    }
  }
  result = this[4];
  *(_DWORD *)(this[1] + 28 * result + 12) = 1;
  return result;
}
