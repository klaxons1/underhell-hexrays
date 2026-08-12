unsigned int __thiscall sub_101A0110(_DWORD *this, int a2, int a3)
{
  int (__fastcall *v4)(_DWORD *); // edx
  unsigned int result; // eax
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // edi
  unsigned __int8 v10; // bl
  unsigned int v11; // ecx
  int v12; // ecx
  _DWORD *v13; // edx
  int v14; // edi
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // ecx
  _DWORD *v22; // edx
  _DWORD *v23; // edx
  int v24; // edi
  int v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // edx
  int v28; // ebx
  unsigned int v29; // edx
  _DWORD *v30; // edi
  int v31; // ecx
  unsigned int v32; // eax
  unsigned __int8 v33; // dl
  int v34; // ecx
  _DWORD *v35; // eax
  _DWORD *v36; // ecx
  _DWORD *v37; // edx
  int v38; // edi
  int v39; // eax
  _DWORD *v40; // ecx
  unsigned int v41; // edx
  int v42; // ebx
  _DWORD *v43; // esi
  int v44; // ecx
  unsigned int v45; // edx
  unsigned __int8 v46; // al
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int *v49; // ecx
  unsigned int *v50; // edx
  _DWORD *v51; // edx
  int v52; // edi
  int v53; // eax
  _DWORD *v54; // ecx
  unsigned int v55; // edx
  int v56; // ebx
  int v57; // edi
  _DWORD *v58; // esi
  void *v59; // [esp-4h] [ebp-44h] BYREF
  int v60[3]; // [esp+Ch] [ebp-34h] BYREF
  int v61[3]; // [esp+18h] [ebp-28h] BYREF
  float v62[3]; // [esp+24h] [ebp-1Ch] BYREF
  int v63[3]; // [esp+30h] [ebp-10h] BYREF
  _DWORD *v64; // [esp+3Ch] [ebp-4h]
  unsigned int v65; // [esp+4Ch] [ebp+Ch]

  v4 = *(int (__fastcall **)(_DWORD *))(*this + 8);
  v64 = this;
  if ( a2 != *(_DWORD *)(v4(this) + 20) )
    return sub_100358E0((int)this, a2, a3);
  v7 = *(_DWORD *)(a3 + 20);
  if ( v7 >= 8 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = (unsigned __int8)v8;
    result = v7 - 8;
    v10 = 0;
    *(_DWORD *)(a3 + 20) = v7 - 8;
    if ( v7 == 8 )
    {
      result = *(_DWORD *)(a3 + 24);
      v11 = *(_DWORD *)(a3 + 28);
      *(_DWORD *)(a3 + 20) = 32;
      if ( result == v11 )
      {
        result += 4;
        *(_DWORD *)(a3 + 20) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 24) = result;
      }
      else if ( result <= v11 )
      {
        v12 = *(_DWORD *)result;
        result += 4;
        *(_DWORD *)(a3 + 16) = v12;
        *(_DWORD *)(a3 + 24) = result;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a3 + 16) = v8 >> 8;
    }
    goto LABEL_21;
  }
  v13 = *(_DWORD **)(a3 + 28);
  v14 = *(_DWORD *)(a3 + 16);
  result = 8 - v7;
  v15 = *(_DWORD **)(a3 + 24);
  if ( v15 == v13 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)(a3 + 16) = 0;
    *(_BYTE *)(a3 + 4) = 1;
LABEL_16:
    *(_DWORD *)(a3 + 24) = v15 + 1;
    goto LABEL_17;
  }
  if ( v15 <= v13 )
  {
    *(_DWORD *)(a3 + 16) = *v15;
    goto LABEL_16;
  }
  *(_BYTE *)(a3 + 4) = 1;
  *(_DWORD *)(a3 + 16) = 0;
LABEL_17:
  if ( *(_BYTE *)(a3 + 4) )
  {
    v9 = 0;
  }
  else
  {
    v16 = *(_DWORD *)(a3 + 16);
    v17 = (v16 & dword_1039BF80[result]) << *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a3 + 20) = 32 - result;
    v9 = v17 | v14;
    *(_DWORD *)(a3 + 16) = v16 >> result;
  }
  v10 = 0;
LABEL_21:
  if ( v9 )
  {
    if ( v9 != 1 )
      return result;
    v18 = *(_DWORD *)(a3 + 20);
    if ( v18 >= 32 )
    {
      v19 = *(_DWORD *)(a3 + 16);
      v20 = v18 - 32;
      *(_DWORD *)(a3 + 20) = v20;
      if ( v20 )
      {
        *(_DWORD *)(a3 + 16) = 0;
      }
      else
      {
        v21 = *(_DWORD **)(a3 + 24);
        v22 = *(_DWORD **)(a3 + 28);
        *(_DWORD *)(a3 + 20) = 32;
        if ( v21 == v22 )
        {
          *(_DWORD *)(a3 + 20) = 1;
          *(_DWORD *)(a3 + 16) = 0;
          *(_DWORD *)(a3 + 24) = v21 + 1;
        }
        else if ( v21 <= v22 )
        {
          *(_DWORD *)(a3 + 16) = *v21;
          *(_DWORD *)(a3 + 24) = v21 + 1;
        }
        else
        {
          *(_BYTE *)(a3 + 4) = 1;
          *(_DWORD *)(a3 + 16) = 0;
        }
      }
      goto LABEL_40;
    }
    v23 = *(_DWORD **)(a3 + 28);
    v24 = *(_DWORD *)(a3 + 16);
    v25 = 32 - v18;
    v26 = *(_DWORD **)(a3 + 24);
    if ( v26 == v23 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v26 > v23 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_37;
      }
      *(_DWORD *)(a3 + 16) = *v26;
    }
    *(_DWORD *)(a3 + 24) = v26 + 1;
LABEL_37:
    if ( *(_BYTE *)(a3 + 4) )
    {
      v19 = 0;
    }
    else
    {
      v27 = *(_DWORD *)(a3 + 16);
      v28 = (v27 & dword_1039BF80[v25]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v25;
      v29 = v27 >> v25;
      v19 = v28 | v24;
      v10 = 0;
      *(_DWORD *)(a3 + 16) = v29;
    }
LABEL_40:
    v59 = off_103DCD78;
    v30 = off_103DCD78;
    sub_1000E5F0(off_103DCD78, &v59, v19);
    result = sub_1007A770(v30, (int)v59);
    v65 = result;
    if ( !result )
      return result;
    v31 = *(_DWORD *)(a3 + 20);
    if ( v31 >= 8 )
    {
      v32 = *(_DWORD *)(a3 + 16);
      v33 = v32;
      v34 = v31 - 8;
      *(_DWORD *)(a3 + 20) = v34;
      if ( v34 )
      {
        *(_DWORD *)(a3 + 16) = v32 >> 8;
        v10 = v32;
      }
      else
      {
        v35 = *(_DWORD **)(a3 + 24);
        v36 = *(_DWORD **)(a3 + 28);
        *(_DWORD *)(a3 + 20) = 32;
        if ( v35 == v36 )
        {
          *(_DWORD *)(a3 + 16) = 0;
          *(_DWORD *)(a3 + 20) = 1;
          *(_DWORD *)(a3 + 24) = v35 + 1;
          v10 = v33;
        }
        else
        {
          if ( v35 <= v36 )
          {
            *(_DWORD *)(a3 + 16) = *v35;
            *(_DWORD *)(a3 + 24) = v35 + 1;
          }
          else
          {
            *(_DWORD *)(a3 + 16) = 0;
            *(_BYTE *)(a3 + 4) = 1;
          }
          v10 = v33;
        }
      }
LABEL_58:
      sub_1022C690(v60);
      sub_1022C950(v63);
      result = sub_100EA350(
                 (int *)(v65 + 444),
                 "vortigaunt_beam_charge",
                 4,
                 v10,
                 SLODWORD(flt_10459240),
                 qword_10459244,
                 SHIDWORD(qword_10459244));
      v43 = (_DWORD *)result;
      if ( result )
      {
        sub_101EDAE0(v63, v61, v62);
        sub_100F2230(v43, 1, (float *)v63, (float *)v61, v62);
        return sub_100F2080(v43, 1, (float *)v60);
      }
      return result;
    }
    v37 = *(_DWORD **)(a3 + 28);
    v38 = *(_DWORD *)(a3 + 16);
    v39 = 8 - v31;
    v40 = *(_DWORD **)(a3 + 24);
    if ( v40 == v37 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v40 > v37 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_56;
      }
      *(_DWORD *)(a3 + 16) = *v40;
    }
    *(_DWORD *)(a3 + 24) = v40 + 1;
LABEL_56:
    if ( !*(_BYTE *)(a3 + 4) )
    {
      v41 = *(_DWORD *)(a3 + 16);
      v42 = (v41 & dword_1039BF80[v39]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v39;
      v10 = v38 | v42;
      *(_DWORD *)(a3 + 16) = v41 >> v39;
    }
    goto LABEL_58;
  }
  v44 = *(_DWORD *)(a3 + 20);
  if ( v44 >= 8 )
  {
    v45 = *(_DWORD *)(a3 + 16);
    v46 = v45;
    v47 = v44 - 8;
    *(_DWORD *)(a3 + 20) = v47;
    if ( v47 )
    {
      v48 = v45 >> 8;
    }
    else
    {
      v49 = *(unsigned int **)(a3 + 24);
      v50 = *(unsigned int **)(a3 + 28);
      *(_DWORD *)(a3 + 20) = 32;
      if ( v49 == v50 )
      {
        *(_DWORD *)(a3 + 20) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 24) = v49 + 1;
        goto LABEL_78;
      }
      if ( v49 > v50 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_78;
      }
      v48 = *v49;
      *(_DWORD *)(a3 + 24) = v49 + 1;
    }
    goto LABEL_77;
  }
  v51 = *(_DWORD **)(a3 + 28);
  v52 = *(_DWORD *)(a3 + 16);
  v53 = 8 - v44;
  v54 = *(_DWORD **)(a3 + 24);
  if ( v54 == v51 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)(a3 + 16) = 0;
    *(_BYTE *)(a3 + 4) = 1;
LABEL_73:
    *(_DWORD *)(a3 + 24) = v54 + 1;
    goto LABEL_74;
  }
  if ( v54 <= v51 )
  {
    *(_DWORD *)(a3 + 16) = *v54;
    goto LABEL_73;
  }
  *(_BYTE *)(a3 + 4) = 1;
  *(_DWORD *)(a3 + 16) = 0;
LABEL_74:
  if ( *(_BYTE *)(a3 + 4) )
  {
    v46 = 0;
    goto LABEL_78;
  }
  v55 = *(_DWORD *)(a3 + 16);
  v56 = (v55 & dword_1039BF80[v53]) << *(_DWORD *)(a3 + 20);
  *(_DWORD *)(a3 + 20) = 32 - v53;
  v48 = v55 >> v53;
  v46 = v56 | v52;
LABEL_77:
  *(_DWORD *)(a3 + 16) = v48;
LABEL_78:
  v57 = v46;
  (*(void (__thiscall **)(_DWORD *, _DWORD, int *, float *))(*(v64 - 1) + 148))(v64 - 1, v46, v60, v62);
  sub_1022C690(v61);
  result = sub_100EA350(
             v64 + 109,
             "vortigaunt_beam",
             4,
             v57,
             SLODWORD(flt_10459240),
             qword_10459244,
             SHIDWORD(qword_10459244));
  v58 = (_DWORD *)result;
  if ( result )
  {
    sub_100F2080((_DWORD *)result, 0, (float *)v60);
    return sub_100F2080(v58, 1, (float *)v61);
  }
  return result;
}
