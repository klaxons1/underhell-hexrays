int __thiscall sub_1006C180(_DWORD *this, int a2)
{
  int v2; // edx
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int v7; // ebx
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
  int v29; // ecx
  int *v30; // edx
  int *v31; // ecx
  int *v32; // ecx
  int *v33; // edx
  int v34; // edx
  int *v35; // edx
  int *v36; // edx
  int v37; // edx
  int *v38; // edx
  int *v39; // edx
  int v40; // edx
  int *v41; // edx
  int *v42; // eax
  int *v43; // ecx
  int *v44; // ecx
  int *v45; // edx
  int *v46; // ecx
  int result; // eax
  int v48; // [esp+Ch] [ebp-4h]

  v2 = a2;
  if ( a2 != this[4] )
  {
    v4 = dword_10692F00;
    do
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10692F00 = v4;
        dword_10692EF0 = -1;
        dword_10692EF4 = -1;
        dword_10692EF8 = -1;
        dword_10692EFC = 1;
      }
      if ( v2 == -1 )
        v5 = &dword_10692EF0;
      else
        v5 = (int *)(this[1] + 32 * v2);
      if ( v5[3] != 1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10692F00 = v4;
        dword_10692EF0 = -1;
        dword_10692EF4 = -1;
        dword_10692EF8 = -1;
        dword_10692EFC = 1;
      }
      if ( v2 == -1 )
        v6 = &dword_10692EF0;
      else
        v6 = (int *)(this[1] + 32 * v2);
      v7 = v6[2];
      v48 = v7;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10692F00 = v4;
        dword_10692EF0 = -1;
        dword_10692EF4 = -1;
        dword_10692EF8 = -1;
        dword_10692EFC = 1;
      }
      if ( v7 == -1 )
        v8 = &dword_10692EF0;
      else
        v8 = (int *)(this[1] + 32 * v7);
      if ( v2 == *v8 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v7 == -1 )
          v9 = &dword_10692EF0;
        else
          v9 = (int *)(this[1] + 32 * v7);
        v10 = v9[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v10 == -1 )
          v11 = &dword_10692EF0;
        else
          v11 = (int *)(this[1] + 32 * v10);
        if ( !v11[3] )
        {
          *(_DWORD *)(32 * v10 + this[1] + 12) = 1;
          *(_DWORD *)(32 * v7 + this[1] + 12) = 0;
          sub_1006B4D0(this, v7);
          v4 = dword_10692F00;
          if ( (dword_10692F00 & 1) == 0 )
          {
            v4 = dword_10692F00 | 1;
            dword_10692F00 |= 1u;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( a2 == -1 )
            v12 = &dword_10692EF0;
          else
            v12 = (int *)(this[1] + 32 * a2);
          v7 = v12[2];
          v48 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v7 == -1 )
            v13 = &dword_10692EF0;
          else
            v13 = (int *)(this[1] + 32 * v7);
          v10 = v13[1];
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v10 == -1 )
          v14 = &dword_10692EF0;
        else
          v14 = (int *)(this[1] + 32 * v10);
        v15 = *v14;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v15 == -1 )
          v16 = &dword_10692EF0;
        else
          v16 = (int *)(this[1] + 32 * v15);
        if ( v16[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v10 == -1 )
            v17 = &dword_10692EF0;
          else
            v17 = (int *)(this[1] + 32 * v10);
          v18 = v17[1];
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          v19 = v18 == -1 ? &dword_10692EF0 : (int *)(this[1] + 32 * v18);
          if ( v19[3] == 1 )
          {
            if ( v10 != -1 )
            {
              *(_DWORD *)(32 * v10 + this[1] + 12) = 0;
              v4 = dword_10692F00;
            }
            a2 = v7;
            goto LABEL_191;
          }
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v10 == -1 )
          v20 = &dword_10692EF0;
        else
          v20 = (int *)(this[1] + 32 * v10);
        v21 = v20[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v21 == -1 )
          v22 = &dword_10692EF0;
        else
          v22 = (int *)(this[1] + 32 * v21);
        if ( v22[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10692F00 = v4 | 1;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v10 == -1 )
            v23 = &dword_10692EF0;
          else
            v23 = (int *)(this[1] + 32 * v10);
          *(_DWORD *)(32 * *v23 + this[1] + 12) = 1;
          *(_DWORD *)(32 * v10 + this[1] + 12) = 0;
          sub_1006B6D0(this, v10);
          v4 = dword_10692F00;
          if ( (dword_10692F00 & 1) == 0 )
          {
            v4 = dword_10692F00 | 1;
            dword_10692F00 |= 1u;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( a2 == -1 )
            v24 = &dword_10692EF0;
          else
            v24 = (int *)(this[1] + 32 * a2);
          v7 = v24[2];
          v48 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v7 == -1 )
            v25 = &dword_10692EF0;
          else
            v25 = (int *)(this[1] + 32 * v7);
          v10 = v25[1];
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10692F00 = v4 | 1;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v7 == -1 )
          v26 = &dword_10692EF0;
        else
          v26 = (int *)(this[1] + 32 * v7);
        *(_DWORD *)(this[1] + 32 * v10 + 12) = v26[3];
        *(_DWORD *)(32 * v48 + this[1] + 12) = 1;
        if ( (dword_10692F00 & 1) == 0 )
        {
          dword_10692F00 |= 1u;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v10 == -1 )
          v27 = &dword_10692EF0;
        else
          v27 = (int *)(32 * v10 + this[1]);
        *(_DWORD *)(32 * v27[1] + this[1] + 12) = 1;
        sub_1006B4D0(this, v48);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v7 == -1 )
          v28 = &dword_10692EF0;
        else
          v28 = (int *)(this[1] + 32 * v7);
        v29 = *v28;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v29 == -1 )
          v30 = &dword_10692EF0;
        else
          v30 = (int *)(this[1] + 32 * v29);
        if ( !v30[3] )
        {
          *(_DWORD *)(32 * v29 + this[1] + 12) = 1;
          *(_DWORD *)(32 * v7 + this[1] + 12) = 0;
          sub_1006B6D0(this, v7);
          v4 = dword_10692F00;
          if ( (dword_10692F00 & 1) == 0 )
          {
            v4 = dword_10692F00 | 1;
            dword_10692F00 |= 1u;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( a2 == -1 )
            v31 = &dword_10692EF0;
          else
            v31 = (int *)(this[1] + 32 * a2);
          v7 = v31[2];
          v48 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v7 == -1 )
            v32 = &dword_10692EF0;
          else
            v32 = (int *)(this[1] + 32 * v7);
          v29 = *v32;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v29 == -1 )
          v33 = &dword_10692EF0;
        else
          v33 = (int *)(this[1] + 32 * v29);
        v34 = v33[1];
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v34 == -1 )
          v35 = &dword_10692EF0;
        else
          v35 = (int *)(this[1] + 32 * v34);
        if ( v35[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v29 == -1 )
            v36 = &dword_10692EF0;
          else
            v36 = (int *)(this[1] + 32 * v29);
          v37 = *v36;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          v38 = v37 == -1 ? &dword_10692EF0 : (int *)(this[1] + 32 * v37);
          if ( v38[3] == 1 )
          {
            if ( v29 != -1 )
            {
              *(_DWORD *)(32 * v29 + this[1] + 12) = 0;
              v4 = dword_10692F00;
            }
            a2 = v7;
            goto LABEL_191;
          }
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v29 == -1 )
          v39 = &dword_10692EF0;
        else
          v39 = (int *)(this[1] + 32 * v29);
        v40 = *v39;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_10692F00 = v4;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v40 == -1 )
          v41 = &dword_10692EF0;
        else
          v41 = (int *)(this[1] + 32 * v40);
        if ( v41[3] == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_10692F00 = v4 | 1;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v29 == -1 )
            v42 = &dword_10692EF0;
          else
            v42 = (int *)(this[1] + 32 * v29);
          *(_DWORD *)(32 * v42[1] + this[1] + 12) = 1;
          *(_DWORD *)(32 * v29 + this[1] + 12) = 0;
          sub_1006B4D0(this, v29);
          v4 = dword_10692F00;
          if ( (dword_10692F00 & 1) == 0 )
          {
            v4 = dword_10692F00 | 1;
            dword_10692F00 |= 1u;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( a2 == -1 )
            v43 = &dword_10692EF0;
          else
            v43 = (int *)(this[1] + 32 * a2);
          v7 = v43[2];
          v48 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v7 == -1 )
            v44 = &dword_10692EF0;
          else
            v44 = (int *)(this[1] + 32 * v7);
          v29 = *v44;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_10692F00 = v4 | 1;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v7 == -1 )
          v45 = &dword_10692EF0;
        else
          v45 = (int *)(this[1] + 32 * v7);
        *(_DWORD *)(32 * v29 + this[1] + 12) = v45[3];
        *(_DWORD *)(32 * v48 + this[1] + 12) = 1;
        if ( (dword_10692F00 & 1) == 0 )
        {
          dword_10692F00 |= 1u;
          dword_10692EF0 = -1;
          dword_10692EF4 = -1;
          dword_10692EF8 = -1;
          dword_10692EFC = 1;
        }
        if ( v29 == -1 )
          v46 = &dword_10692EF0;
        else
          v46 = (int *)(32 * v29 + this[1]);
        *(_DWORD *)(32 * *v46 + this[1] + 12) = 1;
        sub_1006B6D0(this, v48);
      }
      a2 = this[4];
      v4 = dword_10692F00;
LABEL_191:
      v2 = a2;
    }
    while ( a2 != this[4] );
  }
  result = this[1];
  *(_DWORD *)(32 * v2 + result + 12) = 1;
  return result;
}
