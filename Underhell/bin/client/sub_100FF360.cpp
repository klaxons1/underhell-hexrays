int __thiscall sub_100FF360(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  unsigned __int16 v7; // di
  int *v8; // ecx
  int *v9; // ecx
  int v10; // edx
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // ecx
  int v15; // ecx
  int *v16; // ecx
  int *v17; // ecx
  int v18; // ecx
  int *v19; // ecx
  int *v20; // ecx
  int v21; // ecx
  int *v22; // ecx
  int *v23; // eax
  int *v24; // ecx
  int *v25; // ecx
  int *v26; // ecx
  int v27; // eax
  int *v28; // ecx
  int *v29; // ecx
  int *v30; // ecx
  int *v31; // ecx
  int *v32; // ecx
  int *v33; // ecx
  int v34; // ecx
  int *v35; // ecx
  int *v36; // ecx
  int v37; // ecx
  int *v38; // ecx
  int *v39; // ecx
  int v40; // ecx
  int *v41; // ecx
  int *v42; // eax
  int *v43; // ecx
  int *v44; // ecx
  int *v45; // ecx
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  unsigned __int16 v49; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    v4 = dword_104360F4;
    do
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_104360F4 = v4;
        dword_104360EC = -1;
        dword_104360F0 = 0x1FFFF;
      }
      if ( v2 == 0xFFFF )
        v5 = &dword_104360EC;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
      if ( *((_WORD *)v5 + 3) != 1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_104360F4 = v4;
        dword_104360EC = -1;
        dword_104360F0 = 0x1FFFF;
      }
      if ( v2 == 0xFFFF )
        v6 = &dword_104360EC;
      else
        v6 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
      v7 = *((_WORD *)v6 + 2);
      v49 = v7;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_104360F4 = v4;
        dword_104360EC = -1;
        dword_104360F0 = 0x1FFFF;
      }
      if ( v7 == 0xFFFF )
        v8 = &dword_104360EC;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
      if ( v2 == *(_WORD *)v8 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_104360F4 = v4;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v9 = &dword_104360EC;
        else
          v9 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
        v10 = *((unsigned __int16 *)v9 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v11 = &dword_104360EC;
        else
          v11 = (int *)(*(_DWORD *)(this + 4) + 16 * v10);
        if ( !*((_WORD *)v11 + 3) )
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v10 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v7 + 6) = 0;
          sub_100FD630(this, v7);
          v4 = dword_104360F4;
          if ( (dword_104360F4 & 1) == 0 )
          {
            v4 = dword_104360F4 | 1;
            dword_104360F4 |= 1u;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v2 == 0xFFFF )
            v12 = &dword_104360EC;
          else
            v12 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
          v7 = *((_WORD *)v12 + 2);
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_104360F4 = v4;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v7 == 0xFFFF )
            v13 = &dword_104360EC;
          else
            v13 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
          LOWORD(v10) = *((_WORD *)v13 + 1);
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v14 = &dword_104360EC;
        else
          v14 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
        v15 = *(unsigned __int16 *)v14;
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v15 == 0xFFFF )
          v16 = &dword_104360EC;
        else
          v16 = (int *)(*(_DWORD *)(this + 4) + 16 * v15);
        if ( *((_WORD *)v16 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
            v4 |= 1u;
            dword_104360F4 = v4;
          }
          if ( (_WORD)v10 == 0xFFFF )
            v17 = &dword_104360EC;
          else
            v17 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
          v18 = *((unsigned __int16 *)v17 + 1);
          if ( (v4 & 1) == 0 )
          {
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
            v4 |= 1u;
            dword_104360F4 = v4;
          }
          v19 = (_WORD)v18 == 0xFFFF ? &dword_104360EC : (int *)(*(_DWORD *)(this + 4) + 16 * v18);
          if ( *((_WORD *)v19 + 3) == 1 )
            goto LABEL_64;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v20 = &dword_104360EC;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
        v21 = *((unsigned __int16 *)v20 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v21 == 0xFFFF )
          v22 = &dword_104360EC;
        else
          v22 = (int *)(*(_DWORD *)(this + 4) + 16 * v21);
        if ( *((_WORD *)v22 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_104360F4 = v4 | 1;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( (_WORD)v10 == 0xFFFF )
            v23 = &dword_104360EC;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *(unsigned __int16 *)v23 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10 + 6) = 0;
          sub_100FD720(this, v10);
          v4 = dword_104360F4;
          if ( (dword_104360F4 & 1) == 0 )
          {
            v4 = dword_104360F4 | 1;
            dword_104360F4 |= 1u;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( a2 == 0xFFFF )
            v24 = &dword_104360EC;
          else
            v24 = (int *)(*(_DWORD *)(this + 4) + 16 * a2);
          v7 = *((_WORD *)v24 + 2);
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_104360F4 = v4;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v7 == 0xFFFF )
            v25 = &dword_104360EC;
          else
            v25 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
          LOWORD(v10) = *((_WORD *)v25 + 1);
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360F4 = v4 | 1;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v26 = &dword_104360EC;
        else
          v26 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
        v27 = 16 * (unsigned __int16)v10;
        *(_WORD *)(*(_DWORD *)(this + 4) + v27 + 6) = *((_WORD *)v26 + 3);
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v7 + 6) = 1;
        if ( (dword_104360F4 & 1) == 0 )
        {
          dword_104360F4 |= 1u;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v28 = &dword_104360EC;
        else
          v28 = (int *)(v27 + *(_DWORD *)(this + 4));
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *((unsigned __int16 *)v28 + 1) + 6) = 1;
        sub_100FD630(this, v49);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_104360F4 = v4;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v29 = &dword_104360EC;
        else
          v29 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
        v10 = *(unsigned __int16 *)v29;
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v30 = &dword_104360EC;
        else
          v30 = (int *)(*(_DWORD *)(this + 4) + 16 * v10);
        if ( !*((_WORD *)v30 + 3) )
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v10 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v7 + 6) = 0;
          sub_100FD720(this, v7);
          v4 = dword_104360F4;
          if ( (dword_104360F4 & 1) == 0 )
          {
            v4 = dword_104360F4 | 1;
            dword_104360F4 |= 1u;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v2 == 0xFFFF )
            v31 = &dword_104360EC;
          else
            v31 = (int *)(*(_DWORD *)(this + 4) + 16 * v2);
          v7 = *((_WORD *)v31 + 2);
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_104360F4 = v4;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v7 == 0xFFFF )
            v32 = &dword_104360EC;
          else
            v32 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
          LOWORD(v10) = *(_WORD *)v32;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v33 = &dword_104360EC;
        else
          v33 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
        v34 = *((unsigned __int16 *)v33 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v34 == 0xFFFF )
          v35 = &dword_104360EC;
        else
          v35 = (int *)(*(_DWORD *)(this + 4) + 16 * v34);
        if ( *((_WORD *)v35 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
            v4 |= 1u;
            dword_104360F4 = v4;
          }
          if ( (_WORD)v10 == 0xFFFF )
            v36 = &dword_104360EC;
          else
            v36 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
          v37 = *(unsigned __int16 *)v36;
          if ( (v4 & 1) == 0 )
          {
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
            v4 |= 1u;
            dword_104360F4 = v4;
          }
          v38 = (_WORD)v37 == 0xFFFF ? &dword_104360EC : (int *)(*(_DWORD *)(this + 4) + 16 * v37);
          if ( *((_WORD *)v38 + 3) == 1 )
          {
LABEL_64:
            if ( (_WORD)v10 != 0xFFFF )
            {
              *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10 + 6) = 0;
              v4 = dword_104360F4;
            }
            v2 = v7;
            goto LABEL_188;
          }
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v39 = &dword_104360EC;
        else
          v39 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
        v40 = *(unsigned __int16 *)v39;
        if ( (v4 & 1) == 0 )
        {
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
          v4 |= 1u;
          dword_104360F4 = v4;
        }
        if ( (_WORD)v40 == 0xFFFF )
          v41 = &dword_104360EC;
        else
          v41 = (int *)(*(_DWORD *)(this + 4) + 16 * v40);
        if ( *((_WORD *)v41 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_104360F4 = v4 | 1;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( (_WORD)v10 == 0xFFFF )
            v42 = &dword_104360EC;
          else
            v42 = (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10);
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *((unsigned __int16 *)v42 + 1) + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)v10 + 6) = 0;
          sub_100FD630(this, v10);
          v4 = dword_104360F4;
          if ( (dword_104360F4 & 1) == 0 )
          {
            v4 = dword_104360F4 | 1;
            dword_104360F4 |= 1u;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( a2 == 0xFFFF )
            v43 = &dword_104360EC;
          else
            v43 = (int *)(*(_DWORD *)(this + 4) + 16 * a2);
          v7 = *((_WORD *)v43 + 2);
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_104360F4 = v4;
            dword_104360EC = -1;
            dword_104360F0 = 0x1FFFF;
          }
          if ( v7 == 0xFFFF )
            v44 = &dword_104360EC;
          else
            v44 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
          LOWORD(v10) = *(_WORD *)v44;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_104360F4 = v4 | 1;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( v7 == 0xFFFF )
          v45 = &dword_104360EC;
        else
          v45 = (int *)(*(_DWORD *)(this + 4) + 16 * v7);
        v46 = 16 * (unsigned __int16)v10;
        *(_WORD *)(*(_DWORD *)(this + 4) + v46 + 6) = *((_WORD *)v45 + 3);
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v7 + 6) = 1;
        if ( (dword_104360F4 & 1) == 0 )
        {
          dword_104360F4 |= 1u;
          dword_104360EC = -1;
          dword_104360F0 = 0x1FFFF;
        }
        if ( (_WORD)v10 == 0xFFFF )
          v47 = &dword_104360EC;
        else
          v47 = (int *)(v46 + *(_DWORD *)(this + 4));
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * *(unsigned __int16 *)v47 + 6) = 1;
        sub_100FD720(this, v49);
      }
      v4 = dword_104360F4;
      v2 = *(_WORD *)(this + 16);
LABEL_188:
      a2 = v2;
    }
    while ( v2 != *(_WORD *)(this + 16) );
  }
  result = 2 * v2;
  *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v2 + 6) = 1;
  return result;
}
