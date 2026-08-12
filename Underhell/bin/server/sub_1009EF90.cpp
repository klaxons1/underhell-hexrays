int __thiscall sub_1009EF90(int this, __int16 a2)
{
  __int16 v2; // bx
  int v4; // eax
  __int16 *v5; // ecx
  __int16 v6; // cx
  __int16 *v7; // ecx
  __int16 *v8; // ecx
  __int16 v9; // di
  __int16 *v10; // ecx
  __int16 v11; // cx
  __int16 *v12; // edx
  __int16 v13; // dx
  __int16 *v14; // edx
  __int16 *v15; // edx
  __int16 v16; // dx
  __int16 *v17; // ebx
  __int16 *v18; // edx
  __int16 v19; // dx
  __int16 *v20; // eax
  __int16 *v21; // edx
  __int16 v22; // dx
  __int16 *v23; // ebx
  __int16 *v24; // edx
  __int16 v25; // dx
  __int16 *v26; // eax
  int result; // eax

  v2 = a2;
  while ( v2 != *(_WORD *)(this + 16) )
  {
    v4 = dword_10693D00;
    if ( (dword_10693D00 & 1) == 0 )
    {
      v4 = dword_10693D00 | 1;
      word_10693CF8 = -1;
      word_10693CFA = -1;
      dword_10693D00 |= 1u;
      word_10693CFC = -1;
      word_10693CFE = 1;
    }
    if ( v2 == -1 )
      v5 = &word_10693CF8;
    else
      v5 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v2);
    v6 = v5[2];
    if ( (v4 & 1) == 0 )
    {
      word_10693CF8 = -1;
      v4 |= 1u;
      word_10693CFA = -1;
      word_10693CFC = -1;
      dword_10693D00 = v4;
      word_10693CFE = 1;
    }
    if ( v6 == -1 )
      v7 = &word_10693CF8;
    else
      v7 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v6);
    if ( v7[3] )
      break;
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      word_10693CF8 = -1;
      word_10693CFA = -1;
      dword_10693D00 = v4;
      word_10693CFC = -1;
      word_10693CFE = 1;
    }
    if ( v2 == -1 )
      v8 = &word_10693CF8;
    else
      v8 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v2);
    v9 = v8[2];
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      word_10693CF8 = -1;
      word_10693CFA = -1;
      dword_10693D00 = v4;
      word_10693CFC = -1;
      word_10693CFE = 1;
    }
    if ( v9 == -1 )
      v10 = &word_10693CF8;
    else
      v10 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v9);
    v11 = v10[2];
    if ( (v4 & 1) == 0 )
    {
      word_10693CF8 = -1;
      v4 |= 1u;
      word_10693CFA = -1;
      word_10693CFC = -1;
      dword_10693D00 = v4;
      word_10693CFE = 1;
    }
    if ( v9 == -1 )
      v12 = &word_10693CF8;
    else
      v12 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v9);
    v13 = v12[2];
    if ( (v4 & 1) == 0 )
    {
      word_10693CF8 = -1;
      v4 |= 1u;
      word_10693CFA = -1;
      word_10693CFC = -1;
      dword_10693D00 = v4;
      word_10693CFE = 1;
    }
    v14 = v13 == -1 ? &word_10693CF8 : (__int16 *)(*(_DWORD *)(this + 4) + 56 * v13);
    if ( *v14 == v9 )
    {
      if ( (v4 & 1) == 0 )
      {
        word_10693CF8 = -1;
        v4 |= 1u;
        word_10693CFA = -1;
        word_10693CFC = -1;
        dword_10693D00 = v4;
        word_10693CFE = 1;
      }
      if ( v11 == -1 )
        v15 = &word_10693CF8;
      else
        v15 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v11);
      v16 = v15[1];
      if ( (v4 & 1) == 0 )
      {
        word_10693CF8 = -1;
        v4 |= 1u;
        word_10693CFA = -1;
        word_10693CFC = -1;
        dword_10693D00 = v4;
        word_10693CFE = 1;
      }
      v17 = v16 == -1 ? &word_10693CF8 : (__int16 *)(*(_DWORD *)(this + 4) + 56 * v16);
      if ( v17[3] )
      {
        if ( (v4 & 1) == 0 )
        {
          word_10693CF8 = -1;
          v4 |= 1u;
          word_10693CFA = -1;
          word_10693CFC = -1;
          dword_10693D00 = v4;
          word_10693CFE = 1;
        }
        v2 = a2;
        if ( a2 == -1 )
        {
          v18 = &word_10693CF8;
        }
        else
        {
          v18 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * a2);
          v2 = a2;
        }
        v19 = v18[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10693D00 = v4 | 1;
          word_10693CF8 = -1;
          word_10693CFA = -1;
          word_10693CFC = -1;
          word_10693CFE = 1;
        }
        v20 = v19 == -1 ? &word_10693CF8 : (__int16 *)(*(_DWORD *)(this + 4) + 56 * v19);
        if ( v20[1] == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_1009C350(this, v9);
          v9 = sub_1009A890((_DWORD *)this, v9)[2];
          v11 = sub_1009A890((_DWORD *)this, v9)[2];
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v11 + 6) = 0;
        sub_1009C470(this, v11);
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v16 + 6) = 1;
        v2 = v11;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v11 + 6) = 0;
        a2 = v11;
      }
    }
    else
    {
      if ( (v4 & 1) == 0 )
      {
        word_10693CF8 = -1;
        v4 |= 1u;
        word_10693CFA = -1;
        word_10693CFC = -1;
        dword_10693D00 = v4;
        word_10693CFE = 1;
      }
      if ( v11 == -1 )
        v21 = &word_10693CF8;
      else
        v21 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v11);
      v22 = *v21;
      if ( (v4 & 1) == 0 )
      {
        word_10693CF8 = -1;
        v4 |= 1u;
        word_10693CFA = -1;
        word_10693CFC = -1;
        dword_10693D00 = v4;
        word_10693CFE = 1;
      }
      v23 = v22 == -1 ? &word_10693CF8 : (__int16 *)(*(_DWORD *)(this + 4) + 56 * v22);
      if ( v23[3] )
      {
        if ( (v4 & 1) == 0 )
        {
          word_10693CF8 = -1;
          v4 |= 1u;
          word_10693CFA = -1;
          word_10693CFC = -1;
          dword_10693D00 = v4;
          word_10693CFE = 1;
        }
        v2 = a2;
        if ( a2 == -1 )
        {
          v24 = &word_10693CF8;
        }
        else
        {
          v24 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * a2);
          v2 = a2;
        }
        v25 = v24[2];
        if ( (v4 & 1) == 0 )
        {
          dword_10693D00 = v4 | 1;
          word_10693CF8 = -1;
          word_10693CFA = -1;
          word_10693CFC = -1;
          word_10693CFE = 1;
        }
        if ( v25 == -1 )
          v26 = &word_10693CF8;
        else
          v26 = (__int16 *)(*(_DWORD *)(this + 4) + 56 * v25);
        if ( *v26 == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_1009C470(this, v9);
          v9 = sub_1009A890((_DWORD *)this, v9)[2];
          v11 = sub_1009A890((_DWORD *)this, v9)[2];
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v11 + 6) = 0;
        sub_1009C350(this, v11);
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v22 + 6) = 1;
        v2 = v11;
        *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v11 + 6) = 0;
        a2 = v11;
      }
    }
  }
  result = 1;
  *(_WORD *)(*(_DWORD *)(this + 4) + 56 * *(__int16 *)(this + 16) + 6) = 1;
  return result;
}
