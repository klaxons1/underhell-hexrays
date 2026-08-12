int __thiscall sub_101EC330(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // esi
  int *v10; // ecx
  int v11; // ebp
  int *v12; // ecx
  int v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  int v16; // ecx
  int *v17; // edx
  int *v18; // ecx
  int v19; // ecx
  int *v20; // eax
  int v21; // ecx
  int *v22; // eax
  int *v23; // eax
  int *v24; // ecx
  int v25; // ecx
  int *v26; // eax
  int v27; // ecx
  int *v28; // eax
  int *v29; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != this[4] )
  {
    while ( 1 )
    {
      v4 = dword_10458E20;
      if ( (dword_10458E20 & 1) == 0 )
      {
        v4 = dword_10458E20 | 1;
        dword_10458E20 |= 1u;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_10458E10;
      else
        v5 = (int *)(this[1] + 48 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10458E20 = v4;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      v7 = v6 == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10458E20 = v4;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_10458E10;
      else
        v8 = (int *)(this[1] + 48 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10458E20 = v4;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( v9 == -1 )
        v10 = &dword_10458E10;
      else
        v10 = (int *)(this[1] + 48 * v9);
      v11 = v10[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10458E20 = v4;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      if ( v9 == -1 )
        v12 = &dword_10458E10;
      else
        v12 = (int *)(this[1] + 48 * v9);
      v13 = v12[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10458E20 = v4;
        dword_10458E10 = -1;
        dword_10458E14 = -1;
        dword_10458E18 = -1;
        dword_10458E1C = 1;
      }
      v14 = v13 == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * v13);
      if ( *v14 == v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10458E20 = v4;
          dword_10458E10 = -1;
          dword_10458E14 = -1;
          dword_10458E18 = -1;
          dword_10458E1C = 1;
        }
        if ( v11 == -1 )
          v15 = &dword_10458E10;
        else
          v15 = (int *)(this[1] + 48 * v11);
        v16 = v15[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10458E20 = v4;
          dword_10458E10 = -1;
          dword_10458E14 = -1;
          dword_10458E18 = -1;
          dword_10458E1C = 1;
        }
        v17 = v16 == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * v16);
        if ( v17[3] )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10458E20 = v4;
            dword_10458E10 = -1;
            dword_10458E14 = -1;
            dword_10458E18 = -1;
            dword_10458E1C = 1;
          }
          if ( a2 == -1 )
            v18 = &dword_10458E10;
          else
            v18 = (int *)(this[1] + 48 * a2);
          v19 = v18[2];
          if ( (v4 & 1) == 0 )
          {
            dword_10458E20 = v4 | 1;
            dword_10458E10 = -1;
            dword_10458E14 = -1;
            dword_10458E18 = -1;
            dword_10458E1C = 1;
          }
          if ( v19 == -1 )
            v20 = &dword_10458E10;
          else
            v20 = (int *)(this[1] + 48 * v19);
          if ( v20[1] == a2 )
          {
            a2 = v9;
            sub_101EB550(this, v9);
            v21 = dword_10458E20;
            if ( (dword_10458E20 & 1) == 0 )
            {
              v21 = dword_10458E20 | 1;
              dword_10458E20 |= 1u;
              dword_10458E10 = -1;
              dword_10458E14 = -1;
              dword_10458E18 = -1;
              dword_10458E1C = 1;
            }
            if ( v9 == -1 )
              v22 = &dword_10458E10;
            else
              v22 = (int *)(this[1] + 48 * v9);
            v9 = v22[2];
            if ( (v21 & 1) == 0 )
            {
              dword_10458E20 = v21 | 1;
              dword_10458E10 = -1;
              dword_10458E14 = -1;
              dword_10458E18 = -1;
              dword_10458E1C = 1;
            }
            if ( v9 == -1 )
              v23 = &dword_10458E10;
            else
              v23 = (int *)(this[1] + 48 * v9);
            v11 = v23[2];
          }
          *(_DWORD *)(48 * v9 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v11 + this[1] + 12) = 0;
          sub_101EB690(this, v11);
        }
        else
        {
          *(_DWORD *)(48 * v9 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v16 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v11 + this[1] + 12) = 0;
          a2 = v11;
        }
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10458E20 = v4;
          dword_10458E10 = -1;
          dword_10458E14 = -1;
          dword_10458E18 = -1;
          dword_10458E1C = 1;
        }
        if ( v11 == -1 )
          v24 = &dword_10458E10;
        else
          v24 = (int *)(this[1] + 48 * v11);
        v25 = *v24;
        if ( (v4 & 1) == 0 )
        {
          dword_10458E20 = v4 | 1;
          dword_10458E10 = -1;
          dword_10458E14 = -1;
          dword_10458E18 = -1;
          dword_10458E1C = 1;
        }
        v26 = v25 == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * v25);
        if ( v26[3] )
        {
          if ( sub_101EB4E0(this, a2) )
          {
            a2 = v9;
            sub_101EB690(this, v9);
            v27 = dword_10458E20;
            if ( (dword_10458E20 & 1) == 0 )
            {
              v27 = dword_10458E20 | 1;
              dword_10458E20 |= 1u;
              dword_10458E10 = -1;
              dword_10458E14 = -1;
              dword_10458E18 = -1;
              dword_10458E1C = 1;
            }
            if ( v9 == -1 )
              v28 = &dword_10458E10;
            else
              v28 = (int *)(this[1] + 48 * v9);
            v9 = v28[2];
            if ( (v27 & 1) == 0 )
            {
              dword_10458E20 = v27 | 1;
              dword_10458E10 = -1;
              dword_10458E14 = -1;
              dword_10458E18 = -1;
              dword_10458E1C = 1;
            }
            if ( v9 == -1 )
              v29 = &dword_10458E10;
            else
              v29 = (int *)(this[1] + 48 * v9);
            v11 = v29[2];
          }
          *(_DWORD *)(48 * v9 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v11 + this[1] + 12) = 0;
          sub_101EB550(this, v11);
        }
        else
        {
          *(_DWORD *)(48 * v9 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v25 + this[1] + 12) = 1;
          *(_DWORD *)(48 * v11 + this[1] + 12) = 0;
          a2 = v11;
        }
      }
      if ( a2 == this[4] )
        break;
      v2 = a2;
    }
  }
  result = 48 * this[4];
  *(_DWORD *)(result + this[1] + 12) = 1;
  return result;
}
