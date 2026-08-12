int __thiscall sub_102655F0(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int v7; // ebp
  int *v8; // ecx
  int *v9; // ecx
  int v10; // edi
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // ecx
  int v15; // ecx
  int *v16; // ecx
  int *v17; // eax
  int *v18; // ecx
  int v19; // ecx
  int *v20; // ecx
  int *v21; // eax
  int *v22; // ecx
  int *v23; // ecx
  int *v24; // ecx
  int *v25; // ecx
  int *v26; // ecx
  int *v27; // ecx
  int *v28; // ecx
  int *v29; // ecx
  int *v30; // ecx
  int v31; // ecx
  int *v32; // ecx
  int *v33; // eax
  int *v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int *v37; // eax
  int *v38; // ecx
  int *v39; // ecx
  int *v40; // ecx
  int *v41; // ecx
  int result; // eax

  v2 = a2;
  while ( a2 != this[4] )
  {
    v4 = dword_10480478;
    if ( (dword_10480478 & 1) == 0 )
    {
      v4 = dword_10480478 | 1;
      dword_10480478 |= 1u;
      dword_10480468 = -1;
      dword_1048046C = -1;
      dword_10480470 = -1;
      dword_10480474 = 1;
    }
    if ( v2 == -1 )
      v5 = &dword_10480468;
    else
      v5 = (int *)(this[1] + 24 * v2);
    if ( v5[3] != 1 )
      break;
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10480478 = v4;
      dword_10480468 = -1;
      dword_1048046C = -1;
      dword_10480470 = -1;
      dword_10480474 = 1;
    }
    if ( v2 == -1 )
      v6 = &dword_10480468;
    else
      v6 = (int *)(this[1] + 24 * v2);
    v7 = v6[2];
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10480478 = v4;
      dword_10480468 = -1;
      dword_1048046C = -1;
      dword_10480470 = -1;
      dword_10480474 = 1;
    }
    if ( v7 == -1 )
      v8 = &dword_10480468;
    else
      v8 = (int *)(this[1] + 24 * v7);
    if ( v2 == *v8 )
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v7 == -1 )
        v9 = &dword_10480468;
      else
        v9 = (int *)(this[1] + 24 * v7);
      v10 = v9[1];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v11 = &dword_10480468;
      else
        v11 = (int *)(this[1] + 24 * v10);
      if ( !v11[3] )
      {
        *(_DWORD *)(this[1] + 24 * v10 + 12) = 1;
        *(_DWORD *)(this[1] + 24 * v7 + 12) = 0;
        sub_10263D70(this, v7);
        v4 = dword_10480478;
        if ( (dword_10480478 & 1) == 0 )
        {
          v4 = dword_10480478 | 1;
          dword_10480478 |= 1u;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( a2 == -1 )
          v12 = &dword_10480468;
        else
          v12 = (int *)(this[1] + 24 * a2);
        v7 = v12[2];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10480478 = v4;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v7 == -1 )
          v13 = &dword_10480468;
        else
          v13 = (int *)(this[1] + 24 * v7);
        v10 = v13[1];
      }
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v14 = &dword_10480468;
      else
        v14 = (int *)(this[1] + 24 * v10);
      v15 = *v14;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v15 == -1 )
        v16 = &dword_10480468;
      else
        v16 = (int *)(this[1] + 24 * v15);
      if ( v16[3] == 1 )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10480478 = v4 | 1;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v10 == -1 )
          v17 = &dword_10480468;
        else
          v17 = (int *)(this[1] + 24 * v10);
        if ( sub_10261D40(this, v17[1]) )
          goto LABEL_136;
        v4 = dword_10480478;
      }
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v18 = &dword_10480468;
      else
        v18 = (int *)(this[1] + 24 * v10);
      v19 = v18[1];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v19 == -1 )
        v20 = &dword_10480468;
      else
        v20 = (int *)(this[1] + 24 * v19);
      if ( v20[3] == 1 )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10480478 = v4 | 1;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v10 == -1 )
          v21 = &dword_10480468;
        else
          v21 = (int *)(this[1] + 24 * v10);
        *(_DWORD *)(this[1] + 24 * *v21 + 12) = 1;
        *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
        sub_10263EA0(this, v10);
        v4 = dword_10480478;
        if ( (dword_10480478 & 1) == 0 )
        {
          v4 = dword_10480478 | 1;
          dword_10480478 |= 1u;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( a2 == -1 )
          v22 = &dword_10480468;
        else
          v22 = (int *)(this[1] + 24 * a2);
        v7 = v22[2];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10480478 = v4;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v7 == -1 )
          v23 = &dword_10480468;
        else
          v23 = (int *)(this[1] + 24 * v7);
        v10 = v23[1];
      }
      if ( (v4 & 1) == 0 )
      {
        dword_10480478 = v4 | 1;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v7 == -1 )
        v24 = &dword_10480468;
      else
        v24 = (int *)(this[1] + 24 * v7);
      *(_DWORD *)(24 * v10 + this[1] + 12) = v24[3];
      *(_DWORD *)(this[1] + 24 * v7 + 12) = 1;
      if ( (dword_10480478 & 1) == 0 )
      {
        dword_10480478 |= 1u;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v25 = &dword_10480468;
      else
        v25 = (int *)(24 * v10 + this[1]);
      *(_DWORD *)(this[1] + 24 * v25[1] + 12) = 1;
      sub_10263D70(this, v7);
    }
    else
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v7 == -1 )
        v26 = &dword_10480468;
      else
        v26 = (int *)(this[1] + 24 * v7);
      v10 = *v26;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v27 = &dword_10480468;
      else
        v27 = (int *)(this[1] + 24 * v10);
      if ( !v27[3] )
      {
        *(_DWORD *)(this[1] + 24 * v10 + 12) = 1;
        *(_DWORD *)(this[1] + 24 * v7 + 12) = 0;
        sub_10263EA0(this, v7);
        v4 = dword_10480478;
        if ( (dword_10480478 & 1) == 0 )
        {
          v4 = dword_10480478 | 1;
          dword_10480478 |= 1u;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( a2 == -1 )
          v28 = &dword_10480468;
        else
          v28 = (int *)(this[1] + 24 * a2);
        v7 = v28[2];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10480478 = v4;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v7 == -1 )
          v29 = &dword_10480468;
        else
          v29 = (int *)(this[1] + 24 * v7);
        v10 = *v29;
      }
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v30 = &dword_10480468;
      else
        v30 = (int *)(this[1] + 24 * v10);
      v31 = v30[1];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v31 == -1 )
        v32 = &dword_10480468;
      else
        v32 = (int *)(this[1] + 24 * v31);
      if ( v32[3] == 1 )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10480478 = v4 | 1;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v10 == -1 )
          v33 = &dword_10480468;
        else
          v33 = (int *)(this[1] + 24 * v10);
        if ( sub_10261D40(this, *v33) )
        {
LABEL_136:
          if ( v10 != -1 )
            *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
          a2 = v7;
          goto LABEL_179;
        }
        v4 = dword_10480478;
      }
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v34 = &dword_10480468;
      else
        v34 = (int *)(this[1] + 24 * v10);
      v35 = *v34;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10480478 = v4;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v35 == -1 )
        v36 = &dword_10480468;
      else
        v36 = (int *)(this[1] + 24 * v35);
      if ( v36[3] == 1 )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10480478 = v4 | 1;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v10 == -1 )
          v37 = &dword_10480468;
        else
          v37 = (int *)(this[1] + 24 * v10);
        *(_DWORD *)(this[1] + 24 * v37[1] + 12) = 1;
        *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
        sub_10263D70(this, v10);
        v4 = dword_10480478;
        if ( (dword_10480478 & 1) == 0 )
        {
          v4 = dword_10480478 | 1;
          dword_10480478 |= 1u;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( a2 == -1 )
          v38 = &dword_10480468;
        else
          v38 = (int *)(this[1] + 24 * a2);
        v7 = v38[2];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10480478 = v4;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v7 == -1 )
          v39 = &dword_10480468;
        else
          v39 = (int *)(this[1] + 24 * v7);
        v10 = *v39;
      }
      if ( (v4 & 1) == 0 )
      {
        dword_10480478 = v4 | 1;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v7 == -1 )
        v40 = &dword_10480468;
      else
        v40 = (int *)(this[1] + 24 * v7);
      *(_DWORD *)(this[1] + 24 * v10 + 12) = v40[3];
      *(_DWORD *)(this[1] + 24 * v7 + 12) = 1;
      if ( (dword_10480478 & 1) == 0 )
      {
        dword_10480478 |= 1u;
        dword_10480468 = -1;
        dword_1048046C = -1;
        dword_10480470 = -1;
        dword_10480474 = 1;
      }
      if ( v10 == -1 )
        v41 = &dword_10480468;
      else
        v41 = (int *)(24 * v10 + this[1]);
      *(_DWORD *)(this[1] + 24 * *v41 + 12) = 1;
      sub_10263EA0(this, v7);
    }
    a2 = this[4];
LABEL_179:
    v2 = a2;
  }
  result = 3 * v2;
  *(_DWORD *)(this[1] + 24 * v2 + 12) = 1;
  return result;
}
