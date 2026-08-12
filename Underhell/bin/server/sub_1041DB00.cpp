int __thiscall sub_1041DB00(_DWORD *this, int a2)
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
  int v18; // edx
  int *v19; // ecx
  int v20; // ecx
  int *v21; // eax
  int v22; // eax
  int *v23; // ecx
  int *v24; // eax
  int *v25; // ecx
  int v26; // ecx
  int *v27; // eax
  int v28; // eax
  int *v29; // ecx
  int *v30; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != this[4] )
  {
    while ( 1 )
    {
      v4 = dword_106F1860;
      if ( (dword_106F1860 & 1) == 0 )
      {
        v4 = dword_106F1860 | 1;
        dword_106F1860 |= 1u;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_106F1850;
      else
        v5 = (int *)(this[1] + 24 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1860 = v4;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      v7 = v6 == -1 ? &dword_106F1850 : (int *)(this[1] + 24 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1860 = v4;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      if ( v2 == -1 )
        v8 = &dword_106F1850;
      else
        v8 = (int *)(this[1] + 24 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1860 = v4;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      if ( v9 == -1 )
        v10 = &dword_106F1850;
      else
        v10 = (int *)(this[1] + 24 * v9);
      v11 = v10[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1860 = v4;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      if ( v9 == -1 )
        v12 = &dword_106F1850;
      else
        v12 = (int *)(this[1] + 24 * v9);
      v13 = v12[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1860 = v4;
        dword_106F1850 = -1;
        dword_106F1854 = -1;
        dword_106F1858 = -1;
        dword_106F185C = 1;
      }
      v14 = v13 == -1 ? &dword_106F1850 : (int *)(this[1] + 24 * v13);
      if ( *v14 == v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1860 = v4;
          dword_106F1850 = -1;
          dword_106F1854 = -1;
          dword_106F1858 = -1;
          dword_106F185C = 1;
        }
        if ( v11 == -1 )
          v15 = &dword_106F1850;
        else
          v15 = (int *)(this[1] + 24 * v11);
        v16 = v15[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1860 = v4;
          dword_106F1850 = -1;
          dword_106F1854 = -1;
          dword_106F1858 = -1;
          dword_106F185C = 1;
        }
        v17 = v16 == -1 ? &dword_106F1850 : (int *)(this[1] + 24 * v16);
        if ( v17[3] )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106F1860 = v4;
            dword_106F1850 = -1;
            dword_106F1854 = -1;
            dword_106F1858 = -1;
            dword_106F185C = 1;
          }
          v18 = a2;
          if ( a2 == -1 )
          {
            v19 = &dword_106F1850;
          }
          else
          {
            v19 = (int *)(this[1] + 24 * a2);
            v18 = a2;
          }
          v20 = v19[2];
          if ( (v4 & 1) == 0 )
          {
            dword_106F1860 = v4 | 1;
            dword_106F1850 = -1;
            dword_106F1854 = -1;
            dword_106F1858 = -1;
            dword_106F185C = 1;
          }
          if ( v20 == -1 )
            v21 = &dword_106F1850;
          else
            v21 = (int *)(this[1] + 24 * v20);
          if ( v21[1] == v18 )
          {
            a2 = v9;
            sub_1041D5A0(this, v9);
            v22 = dword_106F1860;
            if ( (dword_106F1860 & 1) == 0 )
            {
              v22 = dword_106F1860 | 1;
              dword_106F1860 |= 1u;
              dword_106F1850 = -1;
              dword_106F1854 = -1;
              dword_106F1858 = -1;
              dword_106F185C = 1;
            }
            if ( v9 == -1 )
              v23 = &dword_106F1850;
            else
              v23 = (int *)(this[1] + 24 * v9);
            v9 = v23[2];
            if ( (v22 & 1) == 0 )
            {
              dword_106F1860 = v22 | 1;
              dword_106F1850 = -1;
              dword_106F1854 = -1;
              dword_106F1858 = -1;
              dword_106F185C = 1;
            }
            if ( v9 == -1 )
              v24 = &dword_106F1850;
            else
              v24 = (int *)(this[1] + 24 * v9);
            v11 = v24[2];
          }
          *(_DWORD *)(this[1] + 24 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v11 + 12) = 0;
          sub_1041D6D0(this, v11);
        }
        else
        {
          *(_DWORD *)(this[1] + 24 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v16 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v11 + 12) = 0;
          a2 = v11;
        }
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1860 = v4;
          dword_106F1850 = -1;
          dword_106F1854 = -1;
          dword_106F1858 = -1;
          dword_106F185C = 1;
        }
        if ( v11 == -1 )
          v25 = &dword_106F1850;
        else
          v25 = (int *)(this[1] + 24 * v11);
        v26 = *v25;
        if ( (v4 & 1) == 0 )
        {
          dword_106F1860 = v4 | 1;
          dword_106F1850 = -1;
          dword_106F1854 = -1;
          dword_106F1858 = -1;
          dword_106F185C = 1;
        }
        v27 = v26 == -1 ? &dword_106F1850 : (int *)(this[1] + 24 * v26);
        if ( v27[3] )
        {
          if ( sub_1041D530(this, a2) )
          {
            a2 = v9;
            sub_1041D6D0(this, v9);
            v28 = dword_106F1860;
            if ( (dword_106F1860 & 1) == 0 )
            {
              v28 = dword_106F1860 | 1;
              dword_106F1860 |= 1u;
              dword_106F1850 = -1;
              dword_106F1854 = -1;
              dword_106F1858 = -1;
              dword_106F185C = 1;
            }
            if ( v9 == -1 )
              v29 = &dword_106F1850;
            else
              v29 = (int *)(this[1] + 24 * v9);
            v9 = v29[2];
            if ( (v28 & 1) == 0 )
            {
              dword_106F1860 = v28 | 1;
              dword_106F1850 = -1;
              dword_106F1854 = -1;
              dword_106F1858 = -1;
              dword_106F185C = 1;
            }
            if ( v9 == -1 )
              v30 = &dword_106F1850;
            else
              v30 = (int *)(this[1] + 24 * v9);
            v11 = v30[2];
          }
          *(_DWORD *)(this[1] + 24 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v11 + 12) = 0;
          sub_1041D5A0(this, v11);
        }
        else
        {
          *(_DWORD *)(this[1] + 24 * v9 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v26 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v11 + 12) = 0;
          a2 = v11;
        }
      }
      if ( a2 == this[4] )
        break;
      v2 = a2;
    }
  }
  result = this[1];
  *(_DWORD *)(result + 24 * this[4] + 12) = 1;
  return result;
}
