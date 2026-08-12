int __thiscall sub_100778E0(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  unsigned __int16 v11; // dx
  int *v12; // ecx
  int v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  int v16; // ecx
  int *v17; // ebx
  int *v18; // ecx
  int v19; // ecx
  int *v20; // eax
  int v21; // ecx
  int *v22; // eax
  int *v23; // eax
  int *v24; // ecx
  int *v25; // ebx
  int *v26; // ecx
  int v27; // ecx
  int *v28; // eax
  int v29; // ecx
  int *v30; // eax
  int *v31; // eax
  int result; // eax

  v2 = a2;
  while ( v2 != *(_WORD *)(this + 16) )
  {
    v4 = dword_10413850;
    if ( (dword_10413850 & 1) == 0 )
    {
      v4 = dword_10413850 | 1;
      dword_10413850 |= 1u;
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
    }
    if ( v2 == 0xFFFF )
      v5 = &dword_10413848;
    else
      v5 = (int *)(*(_DWORD *)(this + 4) + 60 * v2);
    v6 = *((unsigned __int16 *)v5 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
      v4 |= 1u;
      dword_10413850 = v4;
    }
    if ( (_WORD)v6 == 0xFFFF )
      v7 = &dword_10413848;
    else
      v7 = (int *)(*(_DWORD *)(this + 4) + 60 * v6);
    if ( *((_WORD *)v7 + 3) )
      break;
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10413850 = v4;
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
    }
    if ( v2 == 0xFFFF )
      v8 = &dword_10413848;
    else
      v8 = (int *)(*(_DWORD *)(this + 4) + 60 * v2);
    v9 = *((unsigned __int16 *)v8 + 2);
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_10413850 = v4;
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
    }
    if ( (_WORD)v9 == 0xFFFF )
      v10 = &dword_10413848;
    else
      v10 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
    v11 = *((_WORD *)v10 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
      v4 |= 1u;
      dword_10413850 = v4;
    }
    if ( (_WORD)v9 == 0xFFFF )
      v12 = &dword_10413848;
    else
      v12 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
    v13 = *((unsigned __int16 *)v12 + 2);
    if ( (v4 & 1) == 0 )
    {
      dword_10413848 = -1;
      dword_1041384C = 0x1FFFF;
      v4 |= 1u;
      dword_10413850 = v4;
    }
    if ( (_WORD)v13 == 0xFFFF )
      v14 = &dword_10413848;
    else
      v14 = (int *)(*(_DWORD *)(this + 4) + 60 * v13);
    if ( *(_WORD *)v14 == (_WORD)v9 )
    {
      if ( (v4 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v4 |= 1u;
        dword_10413850 = v4;
      }
      if ( v11 == 0xFFFF )
        v15 = &dword_10413848;
      else
        v15 = (int *)(*(_DWORD *)(this + 4) + 60 * v11);
      v16 = *((unsigned __int16 *)v15 + 1);
      if ( (v4 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v4 |= 1u;
        dword_10413850 = v4;
      }
      if ( (_WORD)v16 == 0xFFFF )
        v17 = &dword_10413848;
      else
        v17 = (int *)(*(_DWORD *)(this + 4) + 60 * v16);
      if ( *((_WORD *)v17 + 3) )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
          v4 |= 1u;
          dword_10413850 = v4;
        }
        v2 = a2;
        if ( a2 == 0xFFFF )
        {
          v18 = &dword_10413848;
        }
        else
        {
          v18 = (int *)(*(_DWORD *)(this + 4) + 60 * a2);
          v2 = a2;
        }
        v19 = *((unsigned __int16 *)v18 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_10413850 = v4 | 1;
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
        }
        if ( (_WORD)v19 == 0xFFFF )
          v20 = &dword_10413848;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 60 * v19);
        if ( *((_WORD *)v20 + 1) == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_100776A0(this, v9);
          v21 = dword_10413850;
          if ( (dword_10413850 & 1) == 0 )
          {
            v21 = dword_10413850 | 1;
            dword_10413850 |= 1u;
            dword_10413848 = -1;
            dword_1041384C = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v22 = &dword_10413848;
          else
            v22 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
          v9 = *((unsigned __int16 *)v22 + 2);
          if ( (v21 & 1) == 0 )
          {
            dword_10413850 = v21 | 1;
            dword_10413848 = -1;
            dword_1041384C = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v23 = &dword_10413848;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
          v11 = *((_WORD *)v23 + 2);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * (unsigned __int16)v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v11 + 6) = 0;
        sub_100777C0(this, v11);
        continue;
      }
    }
    else
    {
      if ( (v4 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v4 |= 1u;
        dword_10413850 = v4;
      }
      if ( v11 == 0xFFFF )
        v24 = &dword_10413848;
      else
        v24 = (int *)(*(_DWORD *)(this + 4) + 60 * v11);
      v16 = *(unsigned __int16 *)v24;
      if ( (v4 & 1) == 0 )
      {
        dword_10413848 = -1;
        dword_1041384C = 0x1FFFF;
        v4 |= 1u;
        dword_10413850 = v4;
      }
      if ( (_WORD)v16 == 0xFFFF )
        v25 = &dword_10413848;
      else
        v25 = (int *)(*(_DWORD *)(this + 4) + 60 * v16);
      if ( *((_WORD *)v25 + 3) )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
          v4 |= 1u;
          dword_10413850 = v4;
        }
        v2 = a2;
        if ( a2 == 0xFFFF )
        {
          v26 = &dword_10413848;
        }
        else
        {
          v26 = (int *)(*(_DWORD *)(this + 4) + 60 * a2);
          v2 = a2;
        }
        v27 = *((unsigned __int16 *)v26 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_10413850 = v4 | 1;
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
        }
        if ( (_WORD)v27 == 0xFFFF )
          v28 = &dword_10413848;
        else
          v28 = (int *)(*(_DWORD *)(this + 4) + 60 * v27);
        if ( *(_WORD *)v28 == v2 )
        {
          v2 = v9;
          a2 = v9;
          sub_100777C0(this, v9);
          v29 = dword_10413850;
          if ( (dword_10413850 & 1) == 0 )
          {
            v29 = dword_10413850 | 1;
            dword_10413850 |= 1u;
            dword_10413848 = -1;
            dword_1041384C = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v30 = &dword_10413848;
          else
            v30 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
          v9 = *((unsigned __int16 *)v30 + 2);
          if ( (v29 & 1) == 0 )
          {
            dword_10413850 = v29 | 1;
            dword_10413848 = -1;
            dword_1041384C = 0x1FFFF;
          }
          if ( (_WORD)v9 == 0xFFFF )
            v31 = &dword_10413848;
          else
            v31 = (int *)(*(_DWORD *)(this + 4) + 60 * v9);
          v11 = *((_WORD *)v31 + 2);
        }
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * (unsigned __int16)v9 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v11 + 6) = 0;
        sub_100776A0(this, v11);
        continue;
      }
    }
    *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v9 + 6) = 1;
    *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v16 + 6) = 1;
    v2 = v11;
    *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v11 + 6) = 0;
    a2 = v11;
  }
  result = 1;
  *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *(unsigned __int16 *)(this + 16) + 6) = 1;
  return result;
}
