int __thiscall sub_102C37F0(_DWORD *this, int a2)
{
  int v2; // edx
  int v4; // ecx
  int *v5; // eax
  int v6; // eax
  int *v7; // eax
  int *v8; // eax
  int v9; // esi
  int *v10; // eax
  int v11; // edi
  bool v12; // al
  int v13; // ecx
  int *v14; // eax
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  int *v18; // esi
  int *v19; // eax
  int *v20; // eax
  int v21; // eax
  int *v22; // ecx
  int v23; // eax
  int *v24; // esi
  int *v25; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != this[4] )
  {
    while ( 1 )
    {
      v4 = dword_106DE034;
      if ( (dword_106DE034 & 1) == 0 )
      {
        v4 = dword_106DE034 | 1;
        dword_106DE034 |= 1u;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_106DE024;
      else
        v5 = (int *)(this[1] + 48 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE034 = v4;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      v7 = v6 == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE034 = v4;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_106DE024;
      else
        v8 = (int *)(this[1] + 48 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        dword_106DE034 = v4 | 1;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      v10 = v9 == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * v9);
      v11 = v10[2];
      v12 = sub_102C1750(this, v9);
      v13 = dword_106DE034;
      if ( v12 )
      {
        if ( (dword_106DE034 & 1) == 0 )
        {
          v13 = dword_106DE034 | 1;
          dword_106DE034 |= 1u;
          dword_106DE024 = -1;
          dword_106DE028 = -1;
          dword_106DE02C = -1;
          dword_106DE030 = 1;
        }
        if ( v11 == -1 )
          v14 = &dword_106DE024;
        else
          v14 = (int *)(this[1] + 48 * v11);
        v15 = v14[1];
        if ( (v13 & 1) == 0 )
        {
          dword_106DE034 = v13 | 1;
          dword_106DE024 = -1;
          dword_106DE028 = -1;
          dword_106DE02C = -1;
          dword_106DE030 = 1;
        }
        v16 = v15 == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * v15);
        if ( v16[3] )
        {
          if ( sub_102C07D0(this, a2) )
          {
            a2 = v9;
            sub_102C1800(this, v9);
            v17 = dword_106DE034;
            if ( (dword_106DE034 & 1) == 0 )
            {
              v17 = dword_106DE034 | 1;
              dword_106DE034 |= 1u;
              dword_106DE024 = -1;
              dword_106DE028 = -1;
              dword_106DE02C = -1;
              dword_106DE030 = 1;
            }
            if ( v9 == -1 )
              v18 = &dword_106DE024;
            else
              v18 = (int *)(this[1] + 48 * v9);
            v9 = v18[2];
            if ( (v17 & 1) == 0 )
            {
              dword_106DE034 = v17 | 1;
              dword_106DE024 = -1;
              dword_106DE028 = -1;
              dword_106DE02C = -1;
              dword_106DE030 = 1;
            }
            if ( v9 == -1 )
              v19 = &dword_106DE024;
            else
              v19 = (int *)(this[1] + 48 * v9);
            v11 = v19[2];
          }
          *(_DWORD *)(this[1] + 48 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v11 + 12) = 0;
          sub_102C19D0(this, v11);
        }
        else
        {
          *(_DWORD *)(this[1] + 48 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v15 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v11 + 12) = 0;
          a2 = v11;
        }
      }
      else
      {
        if ( (dword_106DE034 & 1) == 0 )
        {
          v13 = dword_106DE034 | 1;
          dword_106DE034 |= 1u;
          dword_106DE024 = -1;
          dword_106DE028 = -1;
          dword_106DE02C = -1;
          dword_106DE030 = 1;
        }
        if ( v11 == -1 )
          v20 = &dword_106DE024;
        else
          v20 = (int *)(this[1] + 48 * v11);
        v21 = *v20;
        if ( (v13 & 1) == 0 )
        {
          dword_106DE034 = v13 | 1;
          dword_106DE024 = -1;
          dword_106DE028 = -1;
          dword_106DE02C = -1;
          dword_106DE030 = 1;
        }
        v22 = v21 == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * v21);
        if ( v22[3] )
        {
          if ( sub_102C1750(this, a2) )
          {
            a2 = v9;
            sub_102C19D0(this, v9);
            v23 = dword_106DE034;
            if ( (dword_106DE034 & 1) == 0 )
            {
              v23 = dword_106DE034 | 1;
              dword_106DE034 |= 1u;
              dword_106DE024 = -1;
              dword_106DE028 = -1;
              dword_106DE02C = -1;
              dword_106DE030 = 1;
            }
            if ( v9 == -1 )
              v24 = &dword_106DE024;
            else
              v24 = (int *)(this[1] + 48 * v9);
            v9 = v24[2];
            if ( (v23 & 1) == 0 )
            {
              dword_106DE034 = v23 | 1;
              dword_106DE024 = -1;
              dword_106DE028 = -1;
              dword_106DE02C = -1;
              dword_106DE030 = 1;
            }
            if ( v9 == -1 )
              v25 = &dword_106DE024;
            else
              v25 = (int *)(this[1] + 48 * v9);
            v11 = v25[2];
          }
          *(_DWORD *)(this[1] + 48 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v11 + 12) = 0;
          sub_102C1800(this, v11);
        }
        else
        {
          *(_DWORD *)(this[1] + 48 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v21 + 12) = 1;
          *(_DWORD *)(this[1] + 48 * v11 + 12) = 0;
          a2 = v11;
        }
      }
      if ( a2 == this[4] )
        break;
      v2 = a2;
    }
  }
  result = this[1];
  *(_DWORD *)(result + 48 * this[4] + 12) = 1;
  return result;
}
