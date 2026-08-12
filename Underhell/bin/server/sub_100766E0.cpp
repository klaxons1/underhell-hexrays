int __thiscall sub_100766E0(int this, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  unsigned __int8 v7; // bl
  int *v8; // ecx
  int *v9; // ecx
  unsigned __int8 v10; // dl
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // edi
  unsigned __int8 v15; // cl
  int *v16; // ecx
  int *v17; // edi
  unsigned __int8 v18; // cl
  int *v19; // ecx
  int *v20; // edi
  unsigned __int8 v21; // cl
  int *v22; // ecx
  int *v23; // eax
  int *v24; // ecx
  int *v25; // ecx
  int *v26; // edi
  int v27; // eax
  int *v28; // ecx
  int *v29; // ecx
  int *v30; // ecx
  int *v31; // ecx
  int *v32; // ecx
  int *v33; // edi
  unsigned __int8 v34; // cl
  int *v35; // ecx
  int *v36; // edi
  unsigned __int8 v37; // cl
  int *v38; // ecx
  int *v39; // edi
  unsigned __int8 v40; // cl
  int *v41; // ecx
  int *v42; // eax
  int *v43; // ecx
  int *v44; // ecx
  int *v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  unsigned __int8 v49; // [esp+4h] [ebp-Ch]
  unsigned __int8 v50; // [esp+8h] [ebp-8h]
  unsigned __int8 v51; // [esp+Ch] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_BYTE *)(this + 16) )
  {
    v4 = dword_106931E0;
    do
    {
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106931E0 = v4;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v2 == 0xFF )
        v5 = &dword_106931DC;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      if ( *((_BYTE *)v5 + 3) != 1 )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106931E0 = v4;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v2 == 0xFF )
        v6 = &dword_106931DC;
      else
        v6 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      v7 = *((_BYTE *)v6 + 2);
      v51 = v7;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106931E0 = v4;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v7 == 0xFF )
        v8 = &dword_106931DC;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
      if ( v2 == *(_BYTE *)v8 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v7 == 0xFF )
          v9 = &dword_106931DC;
        else
          v9 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
        v10 = *((_BYTE *)v9 + 1);
        v50 = v10;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v11 = &dword_106931DC;
        else
          v11 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        if ( !*((_BYTE *)v11 + 3) )
        {
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v7 + 3) = 0;
          sub_10075CC0(this, v7);
          v4 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v4 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( a2 == 0xFF )
            v12 = &dword_106931DC;
          else
            v12 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v7 = *((_BYTE *)v12 + 2);
          v51 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v7 == 0xFF )
            v13 = &dword_106931DC;
          else
            v13 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
          v10 = *((_BYTE *)v13 + 1);
          v50 = v10;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v14 = &dword_106931DC;
        else
          v14 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        v15 = *(_BYTE *)v14;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v15 == 0xFF )
          v16 = &dword_106931DC;
        else
          v16 = (int *)(*(_DWORD *)(this + 4) + 12 * v15);
        if ( *((_BYTE *)v16 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v10 == 0xFF )
            v17 = &dword_106931DC;
          else
            v17 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
          v18 = *((_BYTE *)v17 + 1);
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          v19 = v18 == 0xFF ? &dword_106931DC : (int *)(*(_DWORD *)(this + 4) + 12 * v18);
          if ( *((_BYTE *)v19 + 3) == 1 )
            goto LABEL_146;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v20 = &dword_106931DC;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        v21 = *((_BYTE *)v20 + 1);
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v21 == 0xFF )
          v22 = &dword_106931DC;
        else
          v22 = (int *)(*(_DWORD *)(this + 4) + 12 * v21);
        if ( *((_BYTE *)v22 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_106931E0 = v4 | 1;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v10 == 0xFF )
            v23 = &dword_106931DC;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *(unsigned __int8 *)v23 + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 3) = 0;
          sub_10075E40(this, v50);
          v4 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v4 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( a2 == 0xFF )
            v24 = &dword_106931DC;
          else
            v24 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v7 = *((_BYTE *)v24 + 2);
          v51 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v7 == 0xFF )
            v25 = &dword_106931DC;
          else
            v25 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
          v10 = *((_BYTE *)v25 + 1);
        }
        if ( (v4 & 1) == 0 )
        {
          dword_106931E0 = v4 | 1;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v7 == 0xFF )
          v26 = &dword_106931DC;
        else
          v26 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
        v27 = 12 * v10;
        *(_BYTE *)(*(_DWORD *)(this + 4) + v27 + 3) = *((_BYTE *)v26 + 3);
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v7 + 3) = 1;
        if ( (dword_106931E0 & 1) == 0 )
        {
          dword_106931E0 |= 1u;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v28 = &dword_106931DC;
        else
          v28 = (int *)(v27 + *(_DWORD *)(this + 4));
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *((unsigned __int8 *)v28 + 1) + 3) = 1;
        sub_10075CC0(this, v51);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v7 == 0xFF )
          v29 = &dword_106931DC;
        else
          v29 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
        v10 = *(_BYTE *)v29;
        v49 = *(_BYTE *)v29;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v30 = &dword_106931DC;
        else
          v30 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        if ( !*((_BYTE *)v30 + 3) )
        {
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v7 + 3) = 0;
          sub_10075E40(this, v7);
          v4 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v4 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( a2 == 0xFF )
            v31 = &dword_106931DC;
          else
            v31 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v7 = *((_BYTE *)v31 + 2);
          v51 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v7 == 0xFF )
            v32 = &dword_106931DC;
          else
            v32 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
          v10 = *(_BYTE *)v32;
          v49 = *(_BYTE *)v32;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v33 = &dword_106931DC;
        else
          v33 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        v34 = *((_BYTE *)v33 + 1);
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v34 == 0xFF )
          v35 = &dword_106931DC;
        else
          v35 = (int *)(*(_DWORD *)(this + 4) + 12 * v34);
        if ( *((_BYTE *)v35 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v10 == 0xFF )
            v36 = &dword_106931DC;
          else
            v36 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
          v37 = *(_BYTE *)v36;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          v38 = v37 == 0xFF ? &dword_106931DC : (int *)(*(_DWORD *)(this + 4) + 12 * v37);
          if ( *((_BYTE *)v38 + 3) == 1 )
          {
LABEL_146:
            if ( v10 != 0xFF )
            {
              *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 3) = 0;
              v4 = dword_106931E0;
            }
            a2 = v7;
            goto LABEL_188;
          }
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v39 = &dword_106931DC;
        else
          v39 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
        v40 = *(_BYTE *)v39;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106931E0 = v4;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v40 == 0xFF )
          v41 = &dword_106931DC;
        else
          v41 = (int *)(*(_DWORD *)(this + 4) + 12 * v40);
        if ( *((_BYTE *)v41 + 3) == 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            dword_106931E0 = v4 | 1;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v10 == 0xFF )
            v42 = &dword_106931DC;
          else
            v42 = (int *)(*(_DWORD *)(this + 4) + 12 * v10);
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *((unsigned __int8 *)v42 + 1) + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 3) = 0;
          sub_10075CC0(this, v49);
          v4 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v4 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( a2 == 0xFF )
            v43 = &dword_106931DC;
          else
            v43 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
          v7 = *((_BYTE *)v43 + 2);
          v51 = v7;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_106931E0 = v4;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v7 == 0xFF )
            v44 = &dword_106931DC;
          else
            v44 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
          v10 = *(_BYTE *)v44;
        }
        if ( (v4 & 1) == 0 )
        {
          dword_106931E0 = v4 | 1;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v7 == 0xFF )
          v45 = &dword_106931DC;
        else
          v45 = (int *)(*(_DWORD *)(this + 4) + 12 * v7);
        v46 = 12 * v10;
        *(_BYTE *)(*(_DWORD *)(this + 4) + v46 + 3) = *((_BYTE *)v45 + 3);
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v7 + 3) = 1;
        if ( (dword_106931E0 & 1) == 0 )
        {
          dword_106931E0 |= 1u;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v10 == 0xFF )
          v47 = &dword_106931DC;
        else
          v47 = (int *)(v46 + *(_DWORD *)(this + 4));
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *(unsigned __int8 *)v47 + 3) = 1;
        sub_10075E40(this, v51);
      }
      v4 = dword_106931E0;
      a2 = *(_BYTE *)(this + 16);
LABEL_188:
      v2 = a2;
    }
    while ( a2 != *(_BYTE *)(this + 16) );
  }
  result = *(_DWORD *)(this + 4);
  *(_BYTE *)(result + 12 * v2 + 3) = 1;
  return result;
}
