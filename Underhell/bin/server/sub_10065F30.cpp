int __thiscall sub_10065F30(int this, __int16 a2)
{
  __int16 v2; // dx
  int v4; // eax
  __int16 *v5; // ecx
  __int16 v6; // cx
  __int16 *v7; // ecx
  __int16 *v8; // ecx
  __int16 v9; // bx
  __int16 *v10; // ecx
  __int16 v11; // dx
  __int16 *v12; // ecx
  __int16 v13; // cx
  __int16 *v14; // ecx
  __int16 *v15; // ecx
  __int16 v16; // di
  __int16 *v17; // ecx
  __int16 *v18; // ecx
  __int16 v19; // cx
  __int16 *v20; // eax
  __int16 *v21; // ecx
  __int16 *v22; // ecx
  __int16 *v23; // ecx
  __int16 v24; // cx
  __int16 *v25; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_10692DD0;
      if ( (dword_10692DD0 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 = dword_10692DD0 | 1;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 |= 1u;
        word_10692DCE = 1;
      }
      if ( v2 == -1 )
        v5 = &word_10692DC8;
      else
        v5 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      if ( v6 == -1 )
        v7 = &word_10692DC8;
      else
        v7 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      if ( v2 == -1 )
        v8 = &word_10692DC8;
      else
        v8 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        dword_10692DD0 = v4;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      if ( v9 == -1 )
        v10 = &word_10692DC8;
      else
        v10 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v9);
      v11 = v10[2];
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      if ( v9 == -1 )
        v12 = &word_10692DC8;
      else
        v12 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v9);
      v13 = v12[2];
      if ( (v4 & 1) == 0 )
      {
        word_10692DC8 = -1;
        v4 |= 1u;
        word_10692DCA = -1;
        word_10692DCC = -1;
        dword_10692DD0 = v4;
        word_10692DCE = 1;
      }
      if ( v13 == -1 )
        v14 = &word_10692DC8;
      else
        v14 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v13);
      if ( *v14 == v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v11 == -1 )
          v15 = &word_10692DC8;
        else
          v15 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v11);
        v16 = v15[1];
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v16 == -1 )
          v17 = &word_10692DC8;
        else
          v17 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v16);
        if ( !v17[3] )
          goto LABEL_71;
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( a2 == -1 )
          v18 = &word_10692DC8;
        else
          v18 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * a2);
        v19 = v18[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10692DD0 = v4 | 1;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v19 == -1 )
          v20 = &word_10692DC8;
        else
          v20 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v19);
        if ( v20[1] == a2 )
        {
          a2 = v9;
          sub_10065D30(this, v9);
          v9 = sub_100659B0((_DWORD *)this, v9);
          v11 = sub_100659B0((_DWORD *)this, v9);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v11 + 6) = 0;
        sub_10065E30(this, v11);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v11 == -1 )
          v21 = &word_10692DC8;
        else
          v21 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v11);
        v16 = *v21;
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v16 == -1 )
          v22 = &word_10692DC8;
        else
          v22 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v16);
        if ( !v22[3] )
        {
LABEL_71:
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v16 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v11 + 6) = 0;
          a2 = v11;
          goto LABEL_85;
        }
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( a2 == -1 )
          v23 = &word_10692DC8;
        else
          v23 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * a2);
        v24 = v23[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10692DD0 = v4 | 1;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v24 == -1 )
          v25 = &word_10692DC8;
        else
          v25 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v24);
        if ( *v25 == a2 )
        {
          a2 = v9;
          sub_10065E30(this, v9);
          v9 = sub_100659B0((_DWORD *)this, v9);
          v11 = sub_100659B0((_DWORD *)this, v9);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v11 + 6) = 0;
        sub_10065D30(this, v11);
      }
LABEL_85:
      if ( a2 == *(_WORD *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 10 * *(__int16 *)(this + 16);
  *(_WORD *)(*(_DWORD *)(this + 4) + 80 * *(__int16 *)(this + 16) + 6) = 1;
  return result;
}
