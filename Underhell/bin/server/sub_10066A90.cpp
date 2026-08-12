int __thiscall sub_10066A90(int this, __int16 a2)
{
  __int16 v2; // bx
  int v4; // eax
  __int16 *v5; // ecx
  __int16 *v6; // ecx
  __int16 v7; // di
  __int16 *v8; // ecx
  __int16 *v9; // ecx
  __int16 v10; // dx
  __int16 *v11; // ecx
  __int16 *v12; // ecx
  __int16 *v13; // ecx
  __int16 *v14; // ecx
  __int16 v15; // cx
  __int16 *v16; // ecx
  __int16 *v17; // ecx
  __int16 v18; // cx
  __int16 *v19; // ecx
  __int16 *v20; // ecx
  __int16 v21; // cx
  __int16 *v22; // ecx
  __int16 *v23; // eax
  __int16 *v24; // ecx
  __int16 *v25; // ecx
  __int16 *v26; // ecx
  int v27; // eax
  __int16 *v28; // ecx
  __int16 *v29; // ecx
  __int16 *v30; // ecx
  __int16 *v31; // ecx
  __int16 *v32; // ecx
  __int16 *v33; // ecx
  __int16 v34; // cx
  __int16 *v35; // ecx
  __int16 *v36; // ecx
  __int16 v37; // cx
  __int16 *v38; // ecx
  __int16 *v39; // ecx
  __int16 v40; // cx
  __int16 *v41; // ecx
  __int16 *v42; // eax
  __int16 *v43; // ecx
  __int16 *v44; // ecx
  __int16 *v45; // ecx
  int v46; // eax
  __int16 *v47; // ecx
  int result; // eax
  __int16 v49; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    v4 = dword_10692DD0;
    do
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        dword_10692DD0 = v4;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      if ( v2 == -1 )
        v5 = &word_10692DC8;
      else
        v5 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
      if ( v5[3] != 1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        dword_10692DD0 = v4;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      if ( v2 == -1 )
        v6 = &word_10692DC8;
      else
        v6 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
      v7 = v6[2];
      v49 = v7;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        word_10692DC8 = -1;
        word_10692DCA = -1;
        dword_10692DD0 = v4;
        word_10692DCC = -1;
        word_10692DCE = 1;
      }
      if ( v7 == -1 )
        v8 = &word_10692DC8;
      else
        v8 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
      if ( v2 == *v8 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          dword_10692DD0 = v4;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v7 == -1 )
          v9 = &word_10692DC8;
        else
          v9 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
        v10 = v9[1];
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v10 == -1 )
          v11 = &word_10692DC8;
        else
          v11 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        if ( !v11[3] )
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v10 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v7 + 6) = 0;
          sub_10065D30(this, v7);
          v4 = dword_10692DD0;
          if ( (dword_10692DD0 & 1) == 0 )
          {
            v4 = dword_10692DD0 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v2 == -1 )
            v12 = &word_10692DC8;
          else
            v12 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
          v7 = v12[2];
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 = v4;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v7 == -1 )
            v13 = &word_10692DC8;
          else
            v13 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
          v10 = v13[1];
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
        if ( v10 == -1 )
          v14 = &word_10692DC8;
        else
          v14 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        v15 = *v14;
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          word_10692DCA = -1;
          v4 |= 1u;
          word_10692DCC = -1;
          word_10692DCE = 1;
          v2 = a2;
          dword_10692DD0 = v4;
        }
        if ( v15 == -1 )
          v16 = &word_10692DC8;
        else
          v16 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v15);
        if ( v16[3] == 1 )
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
          if ( v10 == -1 )
            v17 = &word_10692DC8;
          else
            v17 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
          v18 = v17[1];
          if ( (v4 & 1) == 0 )
          {
            word_10692DC8 = -1;
            word_10692DCA = -1;
            v4 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
            v2 = a2;
            dword_10692DD0 = v4;
          }
          v19 = v18 == -1 ? &word_10692DC8 : (__int16 *)(*(_DWORD *)(this + 4) + 80 * v18);
          if ( v19[3] == 1 )
            goto LABEL_64;
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
        if ( v10 == -1 )
          v20 = &word_10692DC8;
        else
          v20 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        v21 = v20[1];
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          word_10692DCA = -1;
          v4 |= 1u;
          word_10692DCC = -1;
          word_10692DCE = 1;
          v2 = a2;
          dword_10692DD0 = v4;
        }
        if ( v21 == -1 )
          v22 = &word_10692DC8;
        else
          v22 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v21);
        if ( v22[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10692DD0 = v4 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v10 == -1 )
            v23 = &word_10692DC8;
          else
            v23 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * *v23 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v10 + 6) = 0;
          sub_10065E30(this, v10);
          v4 = dword_10692DD0;
          if ( (dword_10692DD0 & 1) == 0 )
          {
            v4 = dword_10692DD0 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v2 == -1 )
            v24 = &word_10692DC8;
          else
            v24 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
          v7 = v24[2];
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 = v4;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v7 == -1 )
            v25 = &word_10692DC8;
          else
            v25 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
          v10 = v25[1];
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10692DD0 = v4 | 1;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v7 == -1 )
          v26 = &word_10692DC8;
        else
          v26 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
        v27 = 80 * v10;
        *(_WORD *)(*(_DWORD *)(this + 4) + v27 + 6) = v26[3];
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v7 + 6) = 1;
        if ( (dword_10692DD0 & 1) == 0 )
        {
          dword_10692DD0 |= 1u;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v10 == -1 )
          v28 = &word_10692DC8;
        else
          v28 = (__int16 *)(v27 + *(_DWORD *)(this + 4));
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v28[1] + 6) = 1;
        sub_10065D30(this, v49);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          dword_10692DD0 = v4;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v7 == -1 )
          v29 = &word_10692DC8;
        else
          v29 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
        v10 = *v29;
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          v4 |= 1u;
          word_10692DCA = -1;
          word_10692DCC = -1;
          dword_10692DD0 = v4;
          word_10692DCE = 1;
        }
        if ( v10 == -1 )
          v30 = &word_10692DC8;
        else
          v30 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        if ( !v30[3] )
        {
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v10 + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v7 + 6) = 0;
          sub_10065E30(this, v7);
          v4 = dword_10692DD0;
          if ( (dword_10692DD0 & 1) == 0 )
          {
            v4 = dword_10692DD0 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v2 == -1 )
            v31 = &word_10692DC8;
          else
            v31 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
          v7 = v31[2];
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 = v4;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v7 == -1 )
            v32 = &word_10692DC8;
          else
            v32 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
          v10 = *v32;
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
        if ( v10 == -1 )
          v33 = &word_10692DC8;
        else
          v33 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        v34 = v33[1];
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          word_10692DCA = -1;
          v4 |= 1u;
          word_10692DCC = -1;
          word_10692DCE = 1;
          v2 = a2;
          dword_10692DD0 = v4;
        }
        if ( v34 == -1 )
          v35 = &word_10692DC8;
        else
          v35 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v34);
        if ( v35[3] == 1 )
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
          if ( v10 == -1 )
            v36 = &word_10692DC8;
          else
            v36 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
          v37 = *v36;
          if ( (v4 & 1) == 0 )
          {
            word_10692DC8 = -1;
            word_10692DCA = -1;
            v4 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
            v2 = a2;
            dword_10692DD0 = v4;
          }
          v38 = v37 == -1 ? &word_10692DC8 : (__int16 *)(*(_DWORD *)(this + 4) + 80 * v37);
          if ( v38[3] == 1 )
          {
LABEL_64:
            if ( v10 != -1 )
            {
              *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v10 + 6) = 0;
              v4 = dword_10692DD0;
            }
            v2 = v7;
            goto LABEL_188;
          }
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
        if ( v10 == -1 )
          v39 = &word_10692DC8;
        else
          v39 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
        v40 = *v39;
        if ( (v4 & 1) == 0 )
        {
          word_10692DC8 = -1;
          word_10692DCA = -1;
          v4 |= 1u;
          word_10692DCC = -1;
          word_10692DCE = 1;
          v2 = a2;
          dword_10692DD0 = v4;
        }
        if ( v40 == -1 )
          v41 = &word_10692DC8;
        else
          v41 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v40);
        if ( v41[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10692DD0 = v4 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v10 == -1 )
            v42 = &word_10692DC8;
          else
            v42 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v10);
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v42[1] + 6) = 1;
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v10 + 6) = 0;
          sub_10065D30(this, v10);
          v4 = dword_10692DD0;
          if ( (dword_10692DD0 & 1) == 0 )
          {
            v4 = dword_10692DD0 | 1;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 |= 1u;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v2 == -1 )
            v43 = &word_10692DC8;
          else
            v43 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v2);
          v7 = v43[2];
          v49 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            word_10692DC8 = -1;
            word_10692DCA = -1;
            dword_10692DD0 = v4;
            word_10692DCC = -1;
            word_10692DCE = 1;
          }
          if ( v7 == -1 )
            v44 = &word_10692DC8;
          else
            v44 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
          v10 = *v44;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10692DD0 = v4 | 1;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v7 == -1 )
          v45 = &word_10692DC8;
        else
          v45 = (__int16 *)(*(_DWORD *)(this + 4) + 80 * v7);
        v46 = 80 * v10;
        *(_WORD *)(*(_DWORD *)(this + 4) + v46 + 6) = v45[3];
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v7 + 6) = 1;
        if ( (dword_10692DD0 & 1) == 0 )
        {
          dword_10692DD0 |= 1u;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        if ( v10 == -1 )
          v47 = &word_10692DC8;
        else
          v47 = (__int16 *)(v46 + *(_DWORD *)(this + 4));
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * *v47 + 6) = 1;
        sub_10065E30(this, v49);
      }
      v4 = dword_10692DD0;
      v2 = *(_WORD *)(this + 16);
LABEL_188:
      a2 = v2;
    }
    while ( v2 != *(_WORD *)(this + 16) );
  }
  result = 10 * v2;
  *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v2 + 6) = 1;
  return result;
}
