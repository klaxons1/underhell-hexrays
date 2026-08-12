int __thiscall sub_100882F0(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  unsigned __int16 v7; // bx
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
  int v25; // eax
  int *v26; // ecx
  int *v27; // ecx
  int v28; // edi
  int *v29; // ecx
  int *v30; // ecx
  int *v31; // ecx
  int *v32; // ecx
  int v33; // ecx
  int *v34; // ecx
  unsigned __int16 *v35; // eax
  int *v36; // ecx
  int v37; // ecx
  int *v38; // ecx
  int *v39; // eax
  int *v40; // ecx
  int *v41; // ecx
  int *v42; // ecx
  int v43; // eax
  int *v44; // ecx
  int result; // eax
  unsigned __int16 v46; // [esp+4h] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_1042BFEC;
      if ( (dword_1042BFEC & 1) == 0 )
      {
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
        v4 = dword_1042BFEC | 1;
        dword_1042BFEC |= 1u;
      }
      if ( v2 == 0xFFFF )
        v5 = &dword_1042BFE4;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 10 * v2);
      if ( *((_WORD *)v5 + 3) != 1 )
        goto LABEL_182;
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
        v4 |= 1u;
        dword_1042BFEC = v4;
      }
      if ( v2 == 0xFFFF )
        v6 = &dword_1042BFE4;
      else
        v6 = (int *)(*(_DWORD *)(this + 4) + 10 * v2);
      v7 = *((_WORD *)v6 + 2);
      v46 = v7;
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
        v4 |= 1u;
        dword_1042BFEC = v4;
      }
      v8 = v7 == 0xFFFF ? &dword_1042BFE4 : (int *)(*(_DWORD *)(this + 4) + 10 * v7);
      if ( v2 != *(_WORD *)v8 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_1042BFEC = v4;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( v7 == 0xFFFF )
        v9 = &dword_1042BFE4;
      else
        v9 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
      v10 = *((unsigned __int16 *)v9 + 1);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_1042BFEC = v4;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( (_WORD)v10 == 0xFFFF )
        v11 = &dword_1042BFE4;
      else
        v11 = (int *)(*(_DWORD *)(this + 4) + 10 * v10);
      if ( !*((_WORD *)v11 + 3) )
      {
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v10 + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v7 + 6) = 0;
        sub_10086770(this, v7);
        v4 = dword_1042BFEC;
        if ( (dword_1042BFEC & 1) == 0 )
        {
          v4 = dword_1042BFEC | 1;
          dword_1042BFEC |= 1u;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v12 = &dword_1042BFE4;
        else
          v12 = (int *)(*(_DWORD *)(this + 4) + 10 * a2);
        v7 = *((_WORD *)v12 + 2);
        v46 = v7;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_1042BFEC = v4;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v13 = &dword_1042BFE4;
        else
          v13 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
        LOWORD(v10) = *((_WORD *)v13 + 1);
      }
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_1042BFEC = v4;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( (_WORD)v10 == 0xFFFF )
        v14 = &dword_1042BFE4;
      else
        v14 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10);
      v15 = *(unsigned __int16 *)v14;
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
        v4 |= 1u;
        dword_1042BFEC = v4;
      }
      if ( (_WORD)v15 == 0xFFFF )
        v16 = &dword_1042BFE4;
      else
        v16 = (int *)(*(_DWORD *)(this + 4) + 10 * v15);
      if ( *((_WORD *)v16 + 3) != 1 )
        goto LABEL_61;
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFEC = v4 | 1;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( (_WORD)v10 == 0xFFFF )
        v17 = &dword_1042BFE4;
      else
        v17 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10);
      if ( !sub_10084C30((_DWORD *)this, *((_WORD *)v17 + 1)) )
      {
        v4 = dword_1042BFEC;
LABEL_61:
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_1042BFEC = v4;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v18 = &dword_1042BFE4;
        else
          v18 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10);
        v19 = *((unsigned __int16 *)v18 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
          v4 |= 1u;
          dword_1042BFEC = v4;
        }
        if ( (_WORD)v19 == 0xFFFF )
          v20 = &dword_1042BFE4;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 10 * v19);
        if ( *((_WORD *)v20 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_1042BFEC = v4 | 1;
            dword_1042BFE4 = -1;
            dword_1042BFE8 = 0x1FFFF;
          }
          if ( (_WORD)v10 == 0xFFFF )
            v21 = &dword_1042BFE4;
          else
            v21 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10);
          *(_WORD *)(*(_DWORD *)(this + 4) + 10 * *(unsigned __int16 *)v21 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10 + 6) = 0;
          sub_10086870(this, v10);
          v4 = dword_1042BFEC;
          if ( (dword_1042BFEC & 1) == 0 )
          {
            v4 = dword_1042BFEC | 1;
            dword_1042BFEC |= 1u;
            dword_1042BFE4 = -1;
            dword_1042BFE8 = 0x1FFFF;
          }
          if ( a2 == 0xFFFF )
            v22 = &dword_1042BFE4;
          else
            v22 = (int *)(*(_DWORD *)(this + 4) + 10 * a2);
          v7 = *((_WORD *)v22 + 2);
          v46 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_1042BFEC = v4;
            dword_1042BFE4 = -1;
            dword_1042BFE8 = 0x1FFFF;
          }
          if ( v7 == 0xFFFF )
            v23 = &dword_1042BFE4;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
          LOWORD(v10) = *((_WORD *)v23 + 1);
        }
        if ( (v4 & 1) == 0 )
        {
          dword_1042BFEC = v4 | 1;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v24 = &dword_1042BFE4;
        else
          v24 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
        v25 = 10 * (unsigned __int16)v10;
        *(_WORD *)(*(_DWORD *)(this + 4) + v25 + 6) = *((_WORD *)v24 + 3);
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v7 + 6) = 1;
        if ( (dword_1042BFEC & 1) == 0 )
        {
          dword_1042BFEC |= 1u;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v26 = &dword_1042BFE4;
        else
          v26 = (int *)(v25 + *(_DWORD *)(this + 4));
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * *((unsigned __int16 *)v26 + 1) + 6) = 1;
        sub_10086770(this, v46);
        goto LABEL_180;
      }
      if ( (_WORD)v10 == 0xFFFF )
        goto LABEL_140;
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v10 + 6) = 0;
      a2 = v7;
LABEL_181:
      v2 = a2;
      if ( a2 == *(_WORD *)(this + 16) )
        goto LABEL_182;
    }
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_1042BFEC = v4;
      dword_1042BFE4 = -1;
      dword_1042BFE8 = 0x1FFFF;
    }
    if ( v7 == 0xFFFF )
      v27 = &dword_1042BFE4;
    else
      v27 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
    v28 = *(unsigned __int16 *)v27;
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_1042BFEC = v4;
      dword_1042BFE4 = -1;
      dword_1042BFE8 = 0x1FFFF;
    }
    if ( (_WORD)v28 == 0xFFFF )
      v29 = &dword_1042BFE4;
    else
      v29 = (int *)(*(_DWORD *)(this + 4) + 10 * v28);
    if ( !*((_WORD *)v29 + 3) )
    {
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v28 + 6) = 1;
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v7 + 6) = 0;
      sub_10086870(this, v7);
      v4 = dword_1042BFEC;
      if ( (dword_1042BFEC & 1) == 0 )
      {
        v4 = dword_1042BFEC | 1;
        dword_1042BFEC |= 1u;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( a2 == 0xFFFF )
        v30 = &dword_1042BFE4;
      else
        v30 = (int *)(*(_DWORD *)(this + 4) + 10 * a2);
      v7 = *((_WORD *)v30 + 2);
      v46 = v7;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_1042BFEC = v4;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( v7 == 0xFFFF )
        v31 = &dword_1042BFE4;
      else
        v31 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
      LOWORD(v28) = *(_WORD *)v31;
    }
    if ( (v4 & 1) == 0 )
    {
      v4 |= 1u;
      dword_1042BFEC = v4;
      dword_1042BFE4 = -1;
      dword_1042BFE8 = 0x1FFFF;
    }
    if ( (_WORD)v28 == 0xFFFF )
      v32 = &dword_1042BFE4;
    else
      v32 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28);
    v33 = *((unsigned __int16 *)v32 + 1);
    if ( (v4 & 1) == 0 )
    {
      dword_1042BFE4 = -1;
      dword_1042BFE8 = 0x1FFFF;
      v4 |= 1u;
      dword_1042BFEC = v4;
    }
    if ( (_WORD)v33 == 0xFFFF )
      v34 = &dword_1042BFE4;
    else
      v34 = (int *)(*(_DWORD *)(this + 4) + 10 * v33);
    if ( *((_WORD *)v34 + 3) != 1 )
      goto LABEL_142;
    if ( (v4 & 1) == 0 )
    {
      dword_1042BFEC = v4 | 1;
      dword_1042BFE4 = -1;
      dword_1042BFE8 = 0x1FFFF;
    }
    if ( (_WORD)v28 == 0xFFFF )
      v35 = (unsigned __int16 *)&dword_1042BFE4;
    else
      v35 = (unsigned __int16 *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28);
    if ( !sub_10084C30((_DWORD *)this, *v35) )
    {
      v4 = dword_1042BFEC;
LABEL_142:
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_1042BFEC = v4;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( (_WORD)v28 == 0xFFFF )
        v36 = &dword_1042BFE4;
      else
        v36 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28);
      v37 = *(unsigned __int16 *)v36;
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
        v4 |= 1u;
        dword_1042BFEC = v4;
      }
      if ( (_WORD)v37 == 0xFFFF )
        v38 = &dword_1042BFE4;
      else
        v38 = (int *)(*(_DWORD *)(this + 4) + 10 * v37);
      if ( *((_WORD *)v38 + 3) == 1 )
      {
        if ( (v4 & 1) == 0 )
        {
          dword_1042BFEC = v4 | 1;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( (_WORD)v28 == 0xFFFF )
          v39 = &dword_1042BFE4;
        else
          v39 = (int *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28);
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * *((unsigned __int16 *)v39 + 1) + 6) = 1;
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28 + 6) = 0;
        sub_10086770(this, v28);
        v4 = dword_1042BFEC;
        if ( (dword_1042BFEC & 1) == 0 )
        {
          v4 = dword_1042BFEC | 1;
          dword_1042BFEC |= 1u;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v40 = &dword_1042BFE4;
        else
          v40 = (int *)(*(_DWORD *)(this + 4) + 10 * a2);
        v7 = *((_WORD *)v40 + 2);
        v46 = v7;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_1042BFEC = v4;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v41 = &dword_1042BFE4;
        else
          v41 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
        LOWORD(v28) = *(_WORD *)v41;
      }
      if ( (v4 & 1) == 0 )
      {
        dword_1042BFEC = v4 | 1;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( v7 == 0xFFFF )
        v42 = &dword_1042BFE4;
      else
        v42 = (int *)(*(_DWORD *)(this + 4) + 10 * v7);
      v43 = 10 * (unsigned __int16)v28;
      *(_WORD *)(*(_DWORD *)(this + 4) + v43 + 6) = *((_WORD *)v42 + 3);
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v7 + 6) = 1;
      if ( (dword_1042BFEC & 1) == 0 )
      {
        dword_1042BFEC |= 1u;
        dword_1042BFE4 = -1;
        dword_1042BFE8 = 0x1FFFF;
      }
      if ( (_WORD)v28 == 0xFFFF )
        v44 = &dword_1042BFE4;
      else
        v44 = (int *)(v43 + *(_DWORD *)(this + 4));
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * *(unsigned __int16 *)v44 + 6) = 1;
      sub_10086870(this, v46);
LABEL_180:
      a2 = *(_WORD *)(this + 16);
      goto LABEL_181;
    }
    if ( (_WORD)v28 != 0xFFFF )
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)v28 + 6) = 0;
LABEL_140:
    a2 = v7;
    goto LABEL_181;
  }
LABEL_182:
  result = 5 * v2;
  *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v2 + 6) = 1;
  return result;
}
