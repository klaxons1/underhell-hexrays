int __thiscall sub_10420180(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  int v4; // eax
  __int16 *v5; // ecx
  unsigned __int16 v6; // cx
  __int16 *v7; // ecx
  __int16 *v8; // ecx
  unsigned __int16 v9; // di
  __int16 *v10; // ecx
  unsigned __int16 v11; // cx
  __int16 *v12; // edx
  unsigned __int16 v13; // dx
  __int16 *v14; // edx
  __int16 *v15; // edx
  unsigned __int16 v16; // dx
  __int16 *v17; // ebp
  __int16 *v18; // edx
  unsigned __int16 v19; // dx
  __int16 *v20; // eax
  __int16 *v21; // edx
  unsigned __int16 v22; // dx
  __int16 *v23; // ebp
  __int16 *v24; // edx
  unsigned __int16 v25; // dx
  __int16 *v26; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_106F1874;
      if ( (dword_106F1874 & 1) == 0 )
      {
        v4 = dword_106F1874 | 1;
        dword_106F1874 |= 1u;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( v2 == 0xFFFF )
        v5 = &word_106F186C;
      else
        v5 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v2);
      v6 = v5[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1874 = v4;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v7 = v6 == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * v6);
      if ( v7[3] )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1874 = v4;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( v2 == 0xFFFF )
        v8 = &word_106F186C;
      else
        v8 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v2);
      v9 = v8[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1874 = v4;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( v9 == 0xFFFF )
        v10 = &word_106F186C;
      else
        v10 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v9);
      v11 = v10[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1874 = v4;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      if ( v9 == 0xFFFF )
        v12 = &word_106F186C;
      else
        v12 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v9);
      v13 = v12[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106F1874 = v4;
        word_106F186C = -1;
        word_106F186E = -1;
        word_106F1870 = -1;
        word_106F1872 = 1;
      }
      v14 = v13 == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * v13);
      if ( *v14 == v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1874 = v4;
          word_106F186C = -1;
          word_106F186E = -1;
          word_106F1870 = -1;
          word_106F1872 = 1;
        }
        if ( v11 == 0xFFFF )
          v15 = &word_106F186C;
        else
          v15 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v11);
        v16 = v15[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1874 = v4;
          word_106F186C = -1;
          word_106F186E = -1;
          word_106F1870 = -1;
          word_106F1872 = 1;
        }
        v17 = v16 == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * v16);
        if ( v17[3] )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106F1874 = v4;
            word_106F186C = -1;
            word_106F186E = -1;
            word_106F1870 = -1;
            word_106F1872 = 1;
          }
          if ( a2 == 0xFFFF )
            v18 = &word_106F186C;
          else
            v18 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * a2);
          v19 = v18[2];
          if ( (v4 & 1) == 0 )
          {
            dword_106F1874 = v4 | 1;
            word_106F186C = -1;
            word_106F186E = -1;
            word_106F1870 = -1;
            word_106F1872 = 1;
          }
          v20 = v19 == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * v19);
          if ( v20[1] == a2 )
          {
            a2 = v9;
            sub_1041F890(this, v9);
            v9 = sub_1041F220((_DWORD *)this, v9)[2];
            v11 = sub_1041F220((_DWORD *)this, v9)[2];
          }
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v11 + 6) = 0;
          sub_1041F990(this, v11);
        }
        else
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v16 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v11 + 6) = 0;
          a2 = v11;
        }
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1874 = v4;
          word_106F186C = -1;
          word_106F186E = -1;
          word_106F1870 = -1;
          word_106F1872 = 1;
        }
        if ( v11 == 0xFFFF )
          v21 = &word_106F186C;
        else
          v21 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v11);
        v22 = *v21;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106F1874 = v4;
          word_106F186C = -1;
          word_106F186E = -1;
          word_106F1870 = -1;
          word_106F1872 = 1;
        }
        v23 = v22 == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * v22);
        if ( v23[3] )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106F1874 = v4;
            word_106F186C = -1;
            word_106F186E = -1;
            word_106F1870 = -1;
            word_106F1872 = 1;
          }
          if ( a2 == 0xFFFF )
            v24 = &word_106F186C;
          else
            v24 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * a2);
          v25 = v24[2];
          if ( (v4 & 1) == 0 )
          {
            dword_106F1874 = v4 | 1;
            word_106F186C = -1;
            word_106F186E = -1;
            word_106F1870 = -1;
            word_106F1872 = 1;
          }
          if ( v25 == 0xFFFF )
            v26 = &word_106F186C;
          else
            v26 = (__int16 *)(*(_DWORD *)(this + 4) + 12 * v25);
          if ( *v26 == a2 )
          {
            a2 = v9;
            sub_1041F990(this, v9);
            v9 = sub_1041F220((_DWORD *)this, v9)[2];
            v11 = sub_1041F220((_DWORD *)this, v9)[2];
          }
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v11 + 6) = 0;
          sub_1041F890(this, v11);
        }
        else
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v22 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v11 + 6) = 0;
          a2 = v11;
        }
      }
      if ( a2 == *(_WORD *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = *(_DWORD *)(this + 4);
  *(_WORD *)(result + 12 * *(unsigned __int16 *)(this + 16) + 6) = 1;
  return result;
}
