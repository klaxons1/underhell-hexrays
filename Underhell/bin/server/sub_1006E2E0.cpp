int __thiscall sub_1006E2E0(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  unsigned __int16 v9; // di
  int *v10; // ecx
  int v11; // ecx
  int *v12; // edx
  int v13; // edx
  int *v14; // edx
  int *v15; // edx
  unsigned __int16 v16; // dx
  int *v17; // ebx
  int v18; // eax
  int *v19; // edx
  int v20; // edx
  int *v21; // eax
  int *v22; // edx
  int v23; // edx
  int *v24; // ebx
  int *v25; // edx
  int v26; // edx
  int *v27; // eax
  int result; // eax

  v2 = a2;
  while ( v2 != *(_WORD *)(this + 16) )
  {
    v4 = dword_10692FB0;
    if ( (dword_10692FB0 & 1) == 0 )
    {
      v4 = dword_10692FB0 | 1;
      dword_10692FB0 |= 1u;
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
    }
    if ( v2 == 0xFFFF )
      v5 = &dword_10692FA8;
    else
      v5 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
    v6 = *((unsigned __int16 *)v5 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
      v4 |= 1u;
      dword_10692FB0 = v4;
    }
    if ( (_WORD)v6 == 0xFFFF )
      v7 = &dword_10692FA8;
    else
      v7 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
    if ( *((_WORD *)v7 + 3) )
      break;
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10692FB0 = v4;
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
    }
    if ( v2 == 0xFFFF )
      v8 = &dword_10692FA8;
    else
      v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
    v9 = *((_WORD *)v8 + 2);
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10692FB0 = v4;
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
    }
    if ( v9 == 0xFFFF )
      v10 = &dword_10692FA8;
    else
      v10 = (int *)(*(_DWORD *)(this + 4) + 12 * v9);
    v11 = *((unsigned __int16 *)v10 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
      v4 |= 1u;
      dword_10692FB0 = v4;
    }
    if ( v9 == 0xFFFF )
      v12 = &dword_10692FA8;
    else
      v12 = (int *)(*(_DWORD *)(this + 4) + 12 * v9);
    v13 = *((unsigned __int16 *)v12 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10692FA8 = -1;
      dword_10692FAC = 0x1FFFF;
      v4 |= 1u;
      dword_10692FB0 = v4;
    }
    if ( (_WORD)v13 == 0xFFFF )
      v14 = &dword_10692FA8;
    else
      v14 = (int *)(*(_DWORD *)(this + 4) + 12 * v13);
    if ( *(_WORD *)v14 == v9 )
    {
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      if ( (_WORD)v11 == 0xFFFF )
        v15 = &dword_10692FA8;
      else
        v15 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
      v16 = *((_WORD *)v15 + 1);
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      if ( v16 == 0xFFFF )
        v17 = &dword_10692FA8;
      else
        v17 = (int *)(*(_DWORD *)(this + 4) + 12 * v16);
      if ( *((_WORD *)v17 + 3) )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10692FA8 = -1;
          dword_10692FAC = 0x1FFFF;
          v4 |= 1u;
          dword_10692FB0 = v4;
        }
        v2 = a2;
        if ( a2 == 0xFFFF )
        {
          v19 = &dword_10692FA8;
        }
        else
        {
          v19 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v2 = a2;
        }
        v20 = *((unsigned __int16 *)v19 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_10692FB0 = v4 | 1;
          dword_10692FA8 = -1;
          dword_10692FAC = 0x1FFFF;
        }
        if ( (_WORD)v20 == 0xFFFF )
          v21 = &dword_10692FA8;
        else
          v21 = (int *)(*(_DWORD *)(this + 4) + 12 * v20);
        if ( *((_WORD *)v21 + 1) == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_1006D9F0(this, v9);
          v9 = sub_1006D7C0((_DWORD *)this, v9);
          LOWORD(v11) = sub_1006D7C0((_DWORD *)this, v9);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)v11 + 6) = 0;
        sub_1006DAF0(this, v11);
        continue;
      }
      *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
      v18 = v16;
    }
    else
    {
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      if ( (_WORD)v11 == 0xFFFF )
        v22 = &dword_10692FA8;
      else
        v22 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
      v23 = *(unsigned __int16 *)v22;
      if ( (v4 & 1) == 0 )
      {
        dword_10692FA8 = -1;
        dword_10692FAC = 0x1FFFF;
        v4 |= 1u;
        dword_10692FB0 = v4;
      }
      if ( (_WORD)v23 == 0xFFFF )
        v24 = &dword_10692FA8;
      else
        v24 = (int *)(*(_DWORD *)(this + 4) + 12 * v23);
      if ( *((_WORD *)v24 + 3) )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10692FA8 = -1;
          dword_10692FAC = 0x1FFFF;
          v4 |= 1u;
          dword_10692FB0 = v4;
        }
        v2 = a2;
        if ( a2 == 0xFFFF )
        {
          v25 = &dword_10692FA8;
        }
        else
        {
          v25 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v2 = a2;
        }
        v26 = *((unsigned __int16 *)v25 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_10692FB0 = v4 | 1;
          dword_10692FA8 = -1;
          dword_10692FAC = 0x1FFFF;
        }
        if ( (_WORD)v26 == 0xFFFF )
          v27 = &dword_10692FA8;
        else
          v27 = (int *)(*(_DWORD *)(this + 4) + 12 * v26);
        if ( *(_WORD *)v27 == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_1006DAF0(this, v9);
          v9 = sub_1006D7C0((_DWORD *)this, v9);
          LOWORD(v11) = sub_1006D7C0((_DWORD *)this, v9);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)v11 + 6) = 0;
        sub_1006D9F0(this, v11);
        continue;
      }
      *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 6) = 1;
      v18 = v23;
    }
    *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v18 + 6) = 1;
    v2 = v11;
    *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v11 + 6) = 0;
    a2 = v11;
  }
  result = 1;
  *(_WORD *)(*(_DWORD *)(this + 4) + 12 * *(unsigned __int16 *)(this + 16) + 6) = 1;
  return result;
}
