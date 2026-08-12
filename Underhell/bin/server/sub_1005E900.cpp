int __thiscall sub_1005E900(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int *v12; // ecx
  int v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  int v16; // edx
  int *v17; // ecx
  int *v18; // ecx
  int v19; // ecx
  int *v20; // eax
  int v21; // ecx
  int *v22; // eax
  int *v23; // eax
  int *v24; // ecx
  int *v25; // ecx
  int *v26; // ecx
  int v27; // ecx
  int *v28; // eax
  int v29; // ecx
  int *v30; // eax
  int *v31; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_106923D4;
      if ( (dword_106923D4 & 1) == 0 )
      {
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
        v4 = dword_106923D4 | 1;
        dword_106923D4 |= 1u;
      }
      if ( v2 == 0xFFFF )
        v5 = &dword_106923CC;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
      v6 = *((unsigned __int16 *)v5 + 2);
      if ( (v4 & 1) == 0 )
      {
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
        v4 |= 1u;
        dword_106923D4 = v4;
      }
      if ( (_WORD)v6 == 0xFFFF )
        v7 = &dword_106923CC;
      else
        v7 = (int *)(*(_DWORD *)(this + 4) + 16 * v6);
      if ( *((_WORD *)v7 + 3) )
        break;
      if ( (v4 & 1) == 0 )
      {
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
        v4 |= 1u;
        dword_106923D4 = v4;
      }
      if ( v2 == 0xFFFF )
        v8 = &dword_106923CC;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
      v9 = *((unsigned __int16 *)v8 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106923D4 = v4;
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
      }
      if ( (_WORD)v9 == 0xFFFF )
        v10 = &dword_106923CC;
      else
        v10 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
      v11 = *((unsigned __int16 *)v10 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106923D4 = v4;
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
      }
      if ( (_WORD)v9 == 0xFFFF )
        v12 = &dword_106923CC;
      else
        v12 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
      v13 = *((unsigned __int16 *)v12 + 2);
      if ( (v4 & 1) == 0 )
      {
        dword_106923CC = -1;
        dword_106923D0 = 0x1FFFF;
        v4 |= 1u;
        dword_106923D4 = v4;
      }
      if ( (_WORD)v13 == 0xFFFF )
        v14 = &dword_106923CC;
      else
        v14 = (int *)(*(_DWORD *)(this + 4) + 16 * v13);
      if ( *(_WORD *)v14 == (_WORD)v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106923D4 = v4;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( (_WORD)v11 == 0xFFFF )
          v15 = &dword_106923CC;
        else
          v15 = (int *)(*(_DWORD *)(this + 4) + 16 * v11);
        v16 = *((unsigned __int16 *)v15 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
          v4 |= 1u;
          dword_106923D4 = v4;
        }
        if ( (_WORD)v16 == 0xFFFF )
          v17 = &dword_106923CC;
        else
          v17 = (int *)(*(_DWORD *)(this + 4) + 16 * v16);
        if ( !*((_WORD *)v17 + 3) )
          goto LABEL_81;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106923D4 = v4;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v18 = &dword_106923CC;
        else
          v18 = (int *)(*(_DWORD *)(this + 4) + 16 * a2);
        v19 = *((unsigned __int16 *)v18 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_106923D4 = v4 | 1;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( (_WORD)v19 == 0xFFFF )
          v20 = &dword_106923CC;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 16 * v19);
        if ( *((_WORD *)v20 + 1) == a2 )
        {
          a2 = v9;
          sub_1005E220(this, v9);
          v21 = dword_106923D4;
          if ( (dword_106923D4 & 1) == 0 )
          {
            v21 = dword_106923D4 | 1;
            dword_106923D4 |= 1u;
            dword_106923CC = -1;
            dword_106923D0 = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v22 = &dword_106923CC;
          else
            v22 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
          v9 = *((unsigned __int16 *)v22 + 2);
          if ( (v21 & 1) == 0 )
          {
            dword_106923D4 = v21 | 1;
            dword_106923CC = -1;
            dword_106923D0 = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v23 = &dword_106923CC;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
          LOWORD(v11) = *((_WORD *)v23 + 2);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v11 + 6) = 0;
        sub_1005E310(this, v11);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106923D4 = v4;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( (_WORD)v11 == 0xFFFF )
          v24 = &dword_106923CC;
        else
          v24 = (int *)(*(_DWORD *)(this + 4) + 16 * v11);
        v16 = *(unsigned __int16 *)v24;
        if ( (v4 & 1) == 0 )
        {
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
          v4 |= 1u;
          dword_106923D4 = v4;
        }
        if ( (_WORD)v16 == 0xFFFF )
          v25 = &dword_106923CC;
        else
          v25 = (int *)(*(_DWORD *)(this + 4) + 16 * v16);
        if ( !*((_WORD *)v25 + 3) )
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
          dword_106923D4 = v4;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v26 = &dword_106923CC;
        else
          v26 = (int *)(*(_DWORD *)(this + 4) + 16 * a2);
        v27 = *((unsigned __int16 *)v26 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_106923D4 = v4 | 1;
          dword_106923CC = -1;
          dword_106923D0 = 0x1FFFF;
        }
        if ( (_WORD)v27 == 0xFFFF )
          v28 = &dword_106923CC;
        else
          v28 = (int *)(*(_DWORD *)(this + 4) + 16 * v27);
        if ( *(_WORD *)v28 == a2 )
        {
          a2 = v9;
          sub_1005E310(this, v9);
          v29 = dword_106923D4;
          if ( (dword_106923D4 & 1) == 0 )
          {
            v29 = dword_106923D4 | 1;
            dword_106923D4 |= 1u;
            dword_106923CC = -1;
            dword_106923D0 = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v30 = &dword_106923CC;
          else
            v30 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
          v9 = *((unsigned __int16 *)v30 + 2);
          if ( (v29 & 1) == 0 )
          {
            dword_106923D4 = v29 | 1;
            dword_106923CC = -1;
            dword_106923D0 = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v31 = &dword_106923CC;
          else
            v31 = (int *)(*(_DWORD *)(this + 4) + 16 * v9);
          LOWORD(v11) = *((_WORD *)v31 + 2);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v11 + 6) = 0;
        sub_1005E220(this, v11);
      }
LABEL_105:
      if ( a2 == *(_WORD *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 2 * *(unsigned __int16 *)(this + 16);
  *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *(unsigned __int16 *)(this + 16) + 6) = 1;
  return result;
}
