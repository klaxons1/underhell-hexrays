int __thiscall sub_1014C810(_DWORD *this, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  unsigned int v11; // edx
  int v12; // ebx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // edx
  _DWORD *v19; // edx
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // edx
  int v24; // ebx
  unsigned int v25; // edx
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // ecx
  int result; // eax
  int *v31; // eax
  int *v32; // ecx
  int v33; // ecx
  _DWORD *v34; // edx
  int v35; // edi
  _DWORD *v36; // ecx
  unsigned int v37; // edx
  int v38; // ebx

  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 >= 32 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v4 = v2 - 32;
    *(_DWORD *)(a2 + 20) = v4;
    if ( v4 )
    {
      *(_DWORD *)(a2 + 16) = 0;
    }
    else
    {
      v5 = *(_DWORD **)(a2 + 24);
      v6 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v5 == v6 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v5 + 1;
      }
      else if ( v5 <= v6 )
      {
        *(_DWORD *)(a2 + 16) = *v5;
        *(_DWORD *)(a2 + 24) = v5 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    goto LABEL_18;
  }
  v7 = *(_DWORD **)(a2 + 28);
  v8 = *(_DWORD *)(a2 + 16);
  v9 = 32 - v2;
  v10 = *(_DWORD **)(a2 + 24);
  if ( v10 == v7 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v10 > v7 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 16) = *v10;
  }
  *(_DWORD *)(a2 + 24) = v10 + 1;
LABEL_15:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v3 = 0;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 16);
    v12 = (v11 & dword_1039BF80[v9]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v9;
    v13 = v11 >> v9;
    v3 = v12 | v8;
    *(_DWORD *)(a2 + 16) = v13;
  }
LABEL_18:
  this[5] = v3;
  v14 = *(_DWORD *)(a2 + 20);
  if ( v14 >= 32 )
  {
    v15 = *(_DWORD *)(a2 + 16);
    v16 = v14 - 32;
    *(_DWORD *)(a2 + 20) = v16;
    if ( v16 )
    {
      *(_DWORD *)(a2 + 16) = 0;
    }
    else
    {
      v17 = *(_DWORD **)(a2 + 24);
      v18 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v17 == v18 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v17 + 1;
      }
      else if ( v17 <= v18 )
      {
        *(_DWORD *)(a2 + 16) = *v17;
        *(_DWORD *)(a2 + 24) = v17 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    goto LABEL_35;
  }
  v19 = *(_DWORD **)(a2 + 28);
  v20 = *(_DWORD *)(a2 + 16);
  v21 = 32 - v14;
  v22 = *(_DWORD **)(a2 + 24);
  if ( v22 == v19 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v22 > v19 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_32;
    }
    *(_DWORD *)(a2 + 16) = *v22;
  }
  *(_DWORD *)(a2 + 24) = v22 + 1;
LABEL_32:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v15 = 0;
  }
  else
  {
    v23 = *(_DWORD *)(a2 + 16);
    v24 = (v23 & dword_1039BF80[v21]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v21;
    v25 = v23 >> v21;
    v15 = v24 | v20;
    *(_DWORD *)(a2 + 16) = v25;
  }
LABEL_35:
  this[7] = v15;
  if ( *(_DWORD *)(dword_1043C94C + 48) )
  {
    Msg("CVoiceStatus::HandleVoiceMaskMsg\n");
    Msg("    - m_AudiblePlayers[%d] = %lu\n", 0, this[5]);
    Msg("    - m_ServerBannedPlayers[%d] = %lu\n", 0, this[7]);
  }
  v26 = *(_DWORD *)(a2 + 20);
  if ( v26 < 8 )
  {
    v34 = *(_DWORD **)(a2 + 28);
    v35 = *(_DWORD *)(a2 + 16);
    result = 8 - v26;
    v36 = *(_DWORD **)(a2 + 24);
    if ( v36 == v34 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v36 > v34 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a2 + 16) = *v36;
    }
    *(_DWORD *)(a2 + 24) = v36 + 1;
LABEL_52:
    if ( *(_BYTE *)(a2 + 4) )
    {
      result = 0;
      this[2] = 0;
    }
    else
    {
      v37 = *(_DWORD *)(a2 + 16);
      v38 = (v37 & dword_1039BF80[result]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - result;
      *(_DWORD *)(a2 + 16) = v37 >> result;
      this[2] = v38 | v35;
    }
    return result;
  }
  v27 = *(_DWORD *)(a2 + 16);
  v28 = (unsigned __int8)v27;
  v29 = v26 - 8;
  *(_DWORD *)(a2 + 20) = v29;
  if ( v29 )
  {
    *(_DWORD *)(a2 + 16) = v27 >> 8;
    result = (int)this;
    this[2] = v28;
  }
  else
  {
    v31 = *(int **)(a2 + 24);
    v32 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v31 == v32 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v31 + 1;
      result = (int)this;
      *(_DWORD *)(a2 + 20) = 1;
      this[2] = v28;
    }
    else
    {
      if ( v31 <= v32 )
      {
        v33 = *v31;
        *(_DWORD *)(a2 + 24) = v31 + 1;
        result = (int)this;
        *(_DWORD *)(a2 + 16) = v33;
      }
      else
      {
        result = (int)this;
        *(_DWORD *)(a2 + 16) = 0;
        *(_BYTE *)(a2 + 4) = 1;
      }
      *(_DWORD *)(result + 8) = v28;
    }
  }
  return result;
}
