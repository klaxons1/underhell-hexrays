int __thiscall sub_1009FD90(int this, __int16 a2)
{
  __int16 v2; // dx
  int v4; // eax
  __int16 *v5; // ecx
  __int16 v6; // cx
  __int16 *v7; // ecx
  __int16 *v8; // ecx
  __int16 v9; // di
  __int16 *v10; // ecx
  __int16 v11; // bx
  __int16 *v12; // ecx
  __int16 v13; // cx
  __int16 *v14; // ecx
  __int16 *v15; // ecx
  __int16 v16; // dx
  __int16 *v17; // ecx
  __int16 *v18; // ecx
  __int16 v19; // cx
  __int16 *v20; // eax
  int v21; // ecx
  __int16 *v22; // eax
  __int16 *v23; // eax
  __int16 *v24; // ecx
  __int16 *v25; // ecx
  __int16 *v26; // ecx
  __int16 v27; // cx
  __int16 *v28; // eax
  int v29; // ecx
  __int16 *v30; // eax
  __int16 *v31; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_10693D18;
      if ( (dword_10693D18 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 = dword_10693D18 | 1;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 |= 1u;
        word_10693D16 = 1;
      }
      if ( v2 == -1 )
        v5 = &word_10693D10;
      else
        v5 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v4;
        word_10693D16 = 1;
      }
      if ( v6 == -1 )
        v7 = &word_10693D10;
      else
        v7 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v4;
        word_10693D16 = 1;
      }
      if ( v2 == -1 )
        v8 = &word_10693D10;
      else
        v8 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10693D10 = -1;
        word_10693D12 = -1;
        dword_10693D18 = v4;
        word_10693D14 = -1;
        word_10693D16 = 1;
      }
      if ( v9 == -1 )
        v10 = &word_10693D10;
      else
        v10 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
      v11 = v10[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10693D10 = -1;
        word_10693D12 = -1;
        dword_10693D18 = v4;
        word_10693D14 = -1;
        word_10693D16 = 1;
      }
      if ( v9 == -1 )
        v12 = &word_10693D10;
      else
        v12 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
      v13 = v12[2];
      if ( (v4 & 1) == 0 )
      {
        word_10693D10 = -1;
        v4 |= 1u;
        word_10693D12 = -1;
        word_10693D14 = -1;
        dword_10693D18 = v4;
        word_10693D16 = 1;
      }
      if ( v13 == -1 )
        v14 = &word_10693D10;
      else
        v14 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v13);
      if ( *v14 == v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10693D10 = -1;
          word_10693D12 = -1;
          dword_10693D18 = v4;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( v11 == -1 )
          v15 = &word_10693D10;
        else
          v15 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v11);
        v16 = v15[1];
        if ( (v4 & 1) == 0 )
        {
          word_10693D10 = -1;
          v4 |= 1u;
          word_10693D12 = -1;
          word_10693D14 = -1;
          dword_10693D18 = v4;
          word_10693D16 = 1;
        }
        if ( v16 == -1 )
          v17 = &word_10693D10;
        else
          v17 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v16);
        if ( !v17[3] )
          goto LABEL_81;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10693D10 = -1;
          word_10693D12 = -1;
          dword_10693D18 = v4;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( a2 == -1 )
          v18 = &word_10693D10;
        else
          v18 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * a2);
        v19 = v18[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10693D18 = v4 | 1;
          word_10693D10 = -1;
          word_10693D12 = -1;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( v19 == -1 )
          v20 = &word_10693D10;
        else
          v20 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v19);
        if ( v20[1] == a2 )
        {
          a2 = v9;
          sub_1009C7B0(this, v9);
          v21 = dword_10693D18;
          if ( (dword_10693D18 & 1) == 0 )
          {
            v21 = dword_10693D18 | 1;
            word_10693D10 = -1;
            word_10693D12 = -1;
            dword_10693D18 |= 1u;
            word_10693D14 = -1;
            word_10693D16 = 1;
          }
          if ( v9 == -1 )
            v22 = &word_10693D10;
          else
            v22 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
          v9 = v22[2];
          if ( (v21 & 1) == 0 )
          {
            dword_10693D18 = v21 | 1;
            word_10693D10 = -1;
            word_10693D12 = -1;
            word_10693D14 = -1;
            word_10693D16 = 1;
          }
          if ( v9 == -1 )
            v23 = &word_10693D10;
          else
            v23 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
          v11 = v23[2];
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v11 + 6) = 0;
        sub_1009C8A0(this, v11);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10693D10 = -1;
          word_10693D12 = -1;
          dword_10693D18 = v4;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( v11 == -1 )
          v24 = &word_10693D10;
        else
          v24 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v11);
        v16 = *v24;
        if ( (v4 & 1) == 0 )
        {
          word_10693D10 = -1;
          v4 |= 1u;
          word_10693D12 = -1;
          word_10693D14 = -1;
          dword_10693D18 = v4;
          word_10693D16 = 1;
        }
        if ( v16 == -1 )
          v25 = &word_10693D10;
        else
          v25 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v16);
        if ( !v25[3] )
        {
LABEL_81:
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v16 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v11 + 6) = 0;
          a2 = v11;
          goto LABEL_105;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10693D10 = -1;
          word_10693D12 = -1;
          dword_10693D18 = v4;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( a2 == -1 )
          v26 = &word_10693D10;
        else
          v26 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * a2);
        v27 = v26[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10693D18 = v4 | 1;
          word_10693D10 = -1;
          word_10693D12 = -1;
          word_10693D14 = -1;
          word_10693D16 = 1;
        }
        if ( v27 == -1 )
          v28 = &word_10693D10;
        else
          v28 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v27);
        if ( *v28 == a2 )
        {
          a2 = v9;
          sub_1009C8A0(this, v9);
          v29 = dword_10693D18;
          if ( (dword_10693D18 & 1) == 0 )
          {
            v29 = dword_10693D18 | 1;
            word_10693D10 = -1;
            word_10693D12 = -1;
            dword_10693D18 |= 1u;
            word_10693D14 = -1;
            word_10693D16 = 1;
          }
          if ( v9 == -1 )
            v30 = &word_10693D10;
          else
            v30 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
          v9 = v30[2];
          if ( (v29 & 1) == 0 )
          {
            dword_10693D18 = v29 | 1;
            word_10693D10 = -1;
            word_10693D12 = -1;
            word_10693D14 = -1;
            word_10693D16 = 1;
          }
          if ( v9 == -1 )
            v31 = &word_10693D10;
          else
            v31 = (__int16 *)(*(_DWORD *)(this + 4) + 16 * v9);
          v11 = v31[2];
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v11 + 6) = 0;
        sub_1009C7B0(this, v11);
      }
LABEL_105:
      if ( a2 == *(_WORD *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 2 * *(__int16 *)(this + 16);
  *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *(__int16 *)(this + 16) + 6) = 1;
  return result;
}
