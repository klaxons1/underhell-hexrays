double __thiscall sub_104326D0(int this)
{
  double result; // st7
  unsigned int v3; // ecx
  int v4; // esi
  bool v5; // zf
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // ecx
  _DWORD *v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  int *v20; // ecx
  int *v21; // edx
  int v22; // edx
  _DWORD *v23; // esi
  int v24; // edi
  int v25; // edx
  _DWORD *v26; // ecx
  unsigned int v27; // esi
  int v28; // ebx
  int v29; // ecx
  unsigned int v30; // edx
  int v31; // ecx
  int v32; // esi
  int v33; // edi
  int *v34; // ecx
  int *v35; // edx
  int v36; // edx
  _DWORD *v37; // esi
  int v38; // edi
  int v39; // edx
  _DWORD *v40; // ecx
  unsigned int v41; // esi
  int v42; // ebx
  int v43; // [esp+Ch] [ebp-10h]
  int v44; // [esp+10h] [ebp-Ch]
  int v45; // [esp+14h] [ebp-8h]
  int v46; // [esp+18h] [ebp-4h]

  result = 0.0;
  v3 = *(_DWORD *)(this + 16);
  v4 = v3 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  if ( v5 )
  {
    v6 = *(_DWORD **)(this + 24);
    v7 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v6 == v7 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v6 + 1;
    }
    else if ( v6 <= v7 )
    {
      *(_DWORD *)(this + 16) = *v6;
      *(_DWORD *)(this + 24) = v6 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v3 >> 1;
  }
  v8 = *(_DWORD *)(this + 16);
  v9 = v8 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  v45 = v4;
  v44 = v9;
  if ( v5 )
  {
    v10 = *(_DWORD **)(this + 24);
    v11 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v10 == v11 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v10 + 1;
    }
    else if ( v10 <= v11 )
    {
      *(_DWORD *)(this + 16) = *v10;
      *(_DWORD *)(this + 24) = v10 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v8 >> 1;
  }
  v46 = v9;
  if ( v4 || v9 )
  {
    v12 = *(_DWORD *)(this + 16);
    v5 = (*(_DWORD *)(this + 20))-- == 1;
    v43 = v12 & 1;
    if ( v5 )
    {
      v13 = *(_DWORD **)(this + 24);
      v14 = *(_DWORD **)(this + 28);
      *(_DWORD *)(this + 20) = 32;
      if ( v13 == v14 )
      {
        *(_DWORD *)(this + 20) = 1;
        *(_DWORD *)(this + 16) = 0;
        *(_DWORD *)(this + 24) = v13 + 1;
      }
      else if ( v13 <= v14 )
      {
        *(_DWORD *)(this + 16) = *v13;
        *(_DWORD *)(this + 24) = v13 + 1;
      }
      else
      {
        *(_BYTE *)(this + 4) = 1;
        *(_DWORD *)(this + 16) = 0;
      }
    }
    else
    {
      *(_DWORD *)(this + 16) = v12 >> 1;
    }
    if ( !v4 )
    {
LABEL_44:
      if ( !v9 )
        goto LABEL_64;
      v29 = *(_DWORD *)(this + 20);
      if ( v29 >= 5 )
      {
        v30 = *(_DWORD *)(this + 16);
        v31 = v29 - 5;
        v32 = v30 & 0x1F;
        *(_DWORD *)(this + 20) = v31;
        if ( v31 )
        {
          *(_DWORD *)(this + 16) = v30 >> 5;
          v33 = v30 & 0x1F;
        }
        else
        {
          v34 = *(int **)(this + 24);
          v35 = *(int **)(this + 28);
          *(_DWORD *)(this + 20) = 32;
          if ( v34 == v35 )
          {
            *(_DWORD *)(this + 16) = 0;
            *(_DWORD *)(this + 20) = 1;
            *(_DWORD *)(this + 24) = v34 + 1;
            v33 = v32;
          }
          else
          {
            if ( v34 <= v35 )
            {
              v36 = *v34;
              *(_DWORD *)(this + 24) = v34 + 1;
              *(_DWORD *)(this + 16) = v36;
            }
            else
            {
              *(_DWORD *)(this + 16) = 0;
              *(_BYTE *)(this + 4) = 1;
            }
            v33 = v32;
          }
        }
        goto LABEL_63;
      }
      v37 = *(_DWORD **)(this + 28);
      v38 = *(_DWORD *)(this + 16);
      v39 = 5 - v29;
      v40 = *(_DWORD **)(this + 24);
      if ( v40 == v37 )
      {
        *(_DWORD *)(this + 20) = 1;
        *(_DWORD *)(this + 16) = 0;
        *(_BYTE *)(this + 4) = 1;
      }
      else
      {
        if ( v40 > v37 )
        {
          *(_BYTE *)(this + 4) = 1;
          *(_DWORD *)(this + 16) = 0;
          goto LABEL_60;
        }
        *(_DWORD *)(this + 16) = *v40;
      }
      *(_DWORD *)(this + 24) = v40 + 1;
LABEL_60:
      if ( *(_BYTE *)(this + 4) )
      {
        v33 = 0;
      }
      else
      {
        v41 = *(_DWORD *)(this + 16);
        v42 = (v41 & dword_105C8F98[v39]) << *(_DWORD *)(this + 20);
        *(_DWORD *)(this + 20) = 32 - v39;
        v33 = v42 | v38;
        *(_DWORD *)(this + 16) = v41 >> v39;
      }
LABEL_63:
      v46 = v33;
LABEL_64:
      result = (double)v46 * 0.03125 + (double)v45;
      if ( v43 )
        return -result;
      return result;
    }
    v15 = *(_DWORD *)(this + 20);
    if ( v15 >= 14 )
    {
      v16 = *(_DWORD *)(this + 16);
      v17 = v15 - 14;
      v18 = v16 & 0x3FFF;
      *(_DWORD *)(this + 20) = v17;
      if ( v17 )
      {
        *(_DWORD *)(this + 16) = v16 >> 14;
        v19 = v16 & 0x3FFF;
      }
      else
      {
        v20 = *(int **)(this + 24);
        v21 = *(int **)(this + 28);
        *(_DWORD *)(this + 20) = 32;
        if ( v20 == v21 )
        {
          *(_DWORD *)(this + 16) = 0;
          *(_DWORD *)(this + 20) = 1;
          *(_DWORD *)(this + 24) = v20 + 1;
          v19 = v18;
        }
        else
        {
          if ( v20 <= v21 )
          {
            v22 = *v20;
            *(_DWORD *)(this + 24) = v20 + 1;
            *(_DWORD *)(this + 16) = v22;
          }
          else
          {
            *(_DWORD *)(this + 16) = 0;
            *(_BYTE *)(this + 4) = 1;
          }
          v19 = v18;
        }
      }
      goto LABEL_43;
    }
    v23 = *(_DWORD **)(this + 28);
    v24 = *(_DWORD *)(this + 16);
    v25 = 14 - v15;
    v26 = *(_DWORD **)(this + 24);
    if ( v26 == v23 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_BYTE *)(this + 4) = 1;
    }
    else
    {
      if ( v26 > v23 )
      {
        *(_BYTE *)(this + 4) = 1;
        *(_DWORD *)(this + 16) = 0;
        goto LABEL_40;
      }
      *(_DWORD *)(this + 16) = *v26;
    }
    *(_DWORD *)(this + 24) = v26 + 1;
LABEL_40:
    if ( *(_BYTE *)(this + 4) )
    {
      v19 = 0;
    }
    else
    {
      v27 = *(_DWORD *)(this + 16);
      v28 = (v27 & dword_105C8F98[v25]) << *(_DWORD *)(this + 20);
      *(_DWORD *)(this + 20) = 32 - v25;
      v19 = v28 | v24;
      v9 = v44;
      *(_DWORD *)(this + 16) = v27 >> v25;
    }
LABEL_43:
    v45 = v19 + 1;
    goto LABEL_44;
  }
  return result;
}
