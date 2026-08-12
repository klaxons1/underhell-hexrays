int __thiscall sub_1009DE10(_DWORD *this, int a2)
{
  int v2; // edx
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int v7; // edi
  int *v8; // ecx
  int *v9; // ecx
  int v10; // ecx
  int *v11; // edx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // edx
  int v15; // edx
  int *v16; // edx
  int *v17; // edx
  int v18; // edx
  int *v19; // edx
  int *v20; // edx
  int v21; // edx
  int *v22; // edx
  int *v23; // eax
  int *v24; // ecx
  int *v25; // ecx
  int *v26; // edx
  int *v27; // ecx
  int *v28; // ecx
  int *v29; // edx
  int *v30; // ecx
  int *v31; // ecx
  int *v32; // edx
  int v33; // edx
  int *v34; // edx
  int *v35; // edx
  int v36; // edx
  int *v37; // edx
  int *v38; // edx
  int v39; // edx
  int *v40; // edx
  int *v41; // eax
  int *v42; // ecx
  int *v43; // ecx
  int *v44; // edx
  int *v45; // ecx
  int result; // eax

  v2 = a2;
  if ( a2 != this[4] )
  {
    v4 = dword_10693D2C;
    do
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10693D2C = v4;
        dword_10693D1C = -1;
        dword_10693D20 = -1;
        dword_10693D24 = -1;
        dword_10693D28 = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_10693D1C;
      else
        v5 = (int *)(this[1] + 24 * v2);
      if ( v5[3] != 1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10693D2C = v4;
        dword_10693D1C = -1;
        dword_10693D20 = -1;
        dword_10693D24 = -1;
        dword_10693D28 = 1;
      }
      if ( v2 == -1 )
        v6 = &dword_10693D1C;
      else
        v6 = (int *)(this[1] + 24 * v2);
      v7 = v6[2];
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10693D2C = v4;
        dword_10693D1C = -1;
        dword_10693D20 = -1;
        dword_10693D24 = -1;
        dword_10693D28 = 1;
      }
      if ( v7 == -1 )
      {
        v8 = &dword_10693D1C;
      }
      else
      {
        v8 = (int *)(this[1] + 24 * v7);
        v2 = a2;
      }
      if ( v2 == *v8 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v7 == -1 )
          v9 = &dword_10693D1C;
        else
          v9 = (int *)(this[1] + 24 * v7);
        v10 = v9[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v11 = &dword_10693D1C;
        else
          v11 = (int *)(this[1] + 24 * v10);
        if ( !v11[3] )
        {
          *(_DWORD *)(this[1] + 24 * v10 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v7 + 12) = 0;
          sub_1009B9B0(this, v7);
          v4 = dword_10693D2C;
          if ( (dword_10693D2C & 1) == 0 )
          {
            v4 = dword_10693D2C | 1;
            dword_10693D2C |= 1u;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( a2 == -1 )
            v12 = &dword_10693D1C;
          else
            v12 = (int *)(this[1] + 24 * a2);
          v7 = v12[2];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v7 == -1 )
            v13 = &dword_10693D1C;
          else
            v13 = (int *)(this[1] + 24 * v7);
          v10 = v13[1];
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v14 = &dword_10693D1C;
        else
          v14 = (int *)(this[1] + 24 * v10);
        v15 = *v14;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v15 == -1 )
          v16 = &dword_10693D1C;
        else
          v16 = (int *)(this[1] + 24 * v15);
        if ( v16[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v10 == -1 )
            v17 = &dword_10693D1C;
          else
            v17 = (int *)(this[1] + 24 * v10);
          v18 = v17[1];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          v19 = v18 == -1 ? &dword_10693D1C : (int *)(this[1] + 24 * v18);
          if ( v19[3] == 1 )
            goto LABEL_146;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v20 = &dword_10693D1C;
        else
          v20 = (int *)(this[1] + 24 * v10);
        v21 = v20[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v21 == -1 )
          v22 = &dword_10693D1C;
        else
          v22 = (int *)(this[1] + 24 * v21);
        if ( v22[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10693D2C = v4 | 1;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v10 == -1 )
            v23 = &dword_10693D1C;
          else
            v23 = (int *)(this[1] + 24 * v10);
          *(_DWORD *)(this[1] + 24 * *v23 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
          sub_1009BB60(this, v10);
          v4 = dword_10693D2C;
          if ( (dword_10693D2C & 1) == 0 )
          {
            v4 = dword_10693D2C | 1;
            dword_10693D2C |= 1u;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( a2 == -1 )
            v24 = &dword_10693D1C;
          else
            v24 = (int *)(this[1] + 24 * a2);
          v7 = v24[2];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v7 == -1 )
            v25 = &dword_10693D1C;
          else
            v25 = (int *)(this[1] + 24 * v7);
          v10 = v25[1];
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10693D2C = v4 | 1;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v7 == -1 )
          v26 = &dword_10693D1C;
        else
          v26 = (int *)(this[1] + 24 * v7);
        *(_DWORD *)(this[1] + 24 * v10 + 12) = v26[3];
        *(_DWORD *)(this[1] + 24 * v7 + 12) = 1;
        if ( (dword_10693D2C & 1) == 0 )
        {
          dword_10693D2C |= 1u;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v27 = &dword_10693D1C;
        else
          v27 = (int *)(24 * v10 + this[1]);
        *(_DWORD *)(this[1] + 24 * v27[1] + 12) = 1;
        sub_1009B9B0(this, v7);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v7 == -1 )
          v28 = &dword_10693D1C;
        else
          v28 = (int *)(this[1] + 24 * v7);
        v10 = *v28;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v29 = &dword_10693D1C;
        else
          v29 = (int *)(this[1] + 24 * v10);
        if ( !v29[3] )
        {
          *(_DWORD *)(this[1] + 24 * v10 + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v7 + 12) = 0;
          sub_1009BB60(this, v7);
          v4 = dword_10693D2C;
          if ( (dword_10693D2C & 1) == 0 )
          {
            v4 = dword_10693D2C | 1;
            dword_10693D2C |= 1u;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( a2 == -1 )
            v30 = &dword_10693D1C;
          else
            v30 = (int *)(this[1] + 24 * a2);
          v7 = v30[2];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v7 == -1 )
            v31 = &dword_10693D1C;
          else
            v31 = (int *)(this[1] + 24 * v7);
          v10 = *v31;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v32 = &dword_10693D1C;
        else
          v32 = (int *)(this[1] + 24 * v10);
        v33 = v32[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v33 == -1 )
          v34 = &dword_10693D1C;
        else
          v34 = (int *)(this[1] + 24 * v33);
        if ( v34[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v10 == -1 )
            v35 = &dword_10693D1C;
          else
            v35 = (int *)(this[1] + 24 * v10);
          v36 = *v35;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          v37 = v36 == -1 ? &dword_10693D1C : (int *)(this[1] + 24 * v36);
          if ( v37[3] == 1 )
          {
LABEL_146:
            if ( v10 != -1 )
            {
              *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
              v4 = dword_10693D2C;
            }
            a2 = v7;
            goto LABEL_188;
          }
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v38 = &dword_10693D1C;
        else
          v38 = (int *)(this[1] + 24 * v10);
        v39 = *v38;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10693D2C = v4;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v39 == -1 )
          v40 = &dword_10693D1C;
        else
          v40 = (int *)(this[1] + 24 * v39);
        if ( v40[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10693D2C = v4 | 1;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v10 == -1 )
            v41 = &dword_10693D1C;
          else
            v41 = (int *)(this[1] + 24 * v10);
          *(_DWORD *)(this[1] + 24 * v41[1] + 12) = 1;
          *(_DWORD *)(this[1] + 24 * v10 + 12) = 0;
          sub_1009B9B0(this, v10);
          v4 = dword_10693D2C;
          if ( (dword_10693D2C & 1) == 0 )
          {
            v4 = dword_10693D2C | 1;
            dword_10693D2C |= 1u;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( a2 == -1 )
            v42 = &dword_10693D1C;
          else
            v42 = (int *)(this[1] + 24 * a2);
          v7 = v42[2];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v7 == -1 )
            v43 = &dword_10693D1C;
          else
            v43 = (int *)(this[1] + 24 * v7);
          v10 = *v43;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10693D2C = v4 | 1;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v7 == -1 )
          v44 = &dword_10693D1C;
        else
          v44 = (int *)(this[1] + 24 * v7);
        *(_DWORD *)(24 * v10 + this[1] + 12) = v44[3];
        *(_DWORD *)(this[1] + 24 * v7 + 12) = 1;
        if ( (dword_10693D2C & 1) == 0 )
        {
          dword_10693D2C |= 1u;
          dword_10693D1C = -1;
          dword_10693D20 = -1;
          dword_10693D24 = -1;
          dword_10693D28 = 1;
        }
        if ( v10 == -1 )
          v45 = &dword_10693D1C;
        else
          v45 = (int *)(24 * v10 + this[1]);
        *(_DWORD *)(this[1] + 24 * *v45 + 12) = 1;
        sub_1009BB60(this, v7);
      }
      v4 = dword_10693D2C;
      a2 = this[4];
LABEL_188:
      v2 = a2;
    }
    while ( a2 != this[4] );
  }
  result = this[1];
  *(_DWORD *)(result + 24 * v2 + 12) = 1;
  return result;
}
