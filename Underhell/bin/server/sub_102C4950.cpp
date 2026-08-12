void *__thiscall sub_102C4950(char *Src, int Srca)
{
  int v2; // esi
  bool v4; // zf
  int v5; // ebx
  int i; // ebx
  size_t v7; // edi
  void *v8; // ebx
  _DWORD *v9; // ebx
  int v10; // edi
  int j; // edi
  size_t v12; // edi
  void *v13; // ebx
  _WORD *v14; // eax
  int v15; // eax
  _WORD *v16; // eax
  _DWORD *v17; // edi
  char *v18; // eax
  void *v19; // ebx
  size_t v20; // eax
  _DWORD *v21; // eax
  void *v22; // ebx
  size_t v23; // eax
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // ebx
  size_t v27; // edi
  int v28; // eax
  _WORD *v29; // eax
  int v30; // eax
  _WORD *v31; // eax
  _WORD *v32; // eax
  _DWORD *v33; // edi
  void *v34; // ebx
  size_t v35; // eax
  _DWORD *v36; // eax
  int k; // edi
  size_t v38; // edi
  _WORD *v39; // eax
  _WORD *v40; // eax
  void *result; // eax
  int v42; // [esp-8h] [ebp-48h]
  void *v43[2]; // [esp+8h] [ebp-38h] BYREF
  int v44; // [esp+10h] [ebp-30h]
  size_t Size; // [esp+18h] [ebp-28h]
  char v46; // [esp+1Dh] [ebp-23h]
  int v47; // [esp+28h] [ebp-18h]
  _BYTE v48[4]; // [esp+34h] [ebp-Ch] BYREF
  void *v49; // [esp+38h] [ebp-8h]
  _DWORD *v50; // [esp+3Ch] [ebp-4h]

  v2 = Srca;
  *Src = 2;
  v4 = (*(_BYTE *)(v2 + 21) & 1) == 0;
  v50 = Src;
  if ( v4 )
    sub_10087920((_BYTE *)v2, 1);
  else
    sub_1042E0C0(v2, "%u", 1);
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%u", 1);
  else
    sub_10087920((_BYTE *)v2, 1);
  sub_1042DD00(Src, 0x48u);
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%u", 6);
  else
    sub_10087920((_BYTE *)v2, 6);
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%u", 1);
  else
    sub_10087920((_BYTE *)v2, 1);
  sub_1042DD00(Src + 72, 0xCu);
  v5 = *((_DWORD *)Src + 24);
  Srca = *((_DWORD *)Src + 21);
  if ( (_WORD)v5 )
  {
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
      sub_1042E0C0(v2, "%u", 2);
    else
      sub_10087920((_BYTE *)v2, 2);
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
      sub_1042E0C0(v2, "%u", v5);
    else
      sub_10087920((_BYTE *)v2, v5);
    sub_1042DD00((void *)Srca, 6 * (unsigned __int16)v5);
  }
  sub_1042DE40(0, 0, 0);
  sub_1042DD00(Src + 264, 0x68u);
  sub_1042DD00(Src + 256, 4u);
  v42 = *((_DWORD *)Src + 31);
  if ( (v46 & 1) != 0 )
    sub_1042E0C0((int)v43, "%d", v42);
  else
    sub_10087980(v43, v42);
  for ( i = sub_102C2000((_DWORD *)Src + 26); i != -1; i = sub_102C20B0(v50 + 26, i) )
  {
    sub_1042DFE0(*(char **)(28 * i + v50[27] + 16));
    sub_1042DD00((void *)(28 * i + v50[27] + 20), 8u);
  }
  v7 = Size;
  v8 = v43[0];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%u", 3);
  else
    sub_10087920((_BYTE *)v2, 3);
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%u", 1);
  else
    sub_10087920((_BYTE *)v2, 1);
  sub_1042DD00(v8, v7);
  if ( v44 >= 0 && v43[0] )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v43[0]);
  sub_1042DE40(0, 0, 0);
  v9 = v50;
  v10 = v50[40];
  if ( (v46 & 1) != 0 )
  {
    sub_1042E0C0((int)v43, "%d", v50[40]);
  }
  else
  {
    Srca = v50[40];
    if ( (unsigned __int8)sub_1042D470(4) )
    {
      if ( (v48[0] & 1) != 0 )
        sub_100868D0(v48, (int *)((char *)v43[0] + Size - v47), (char *)&Srca, 1);
      else
        *(_DWORD *)((char *)v43[0] + Size - v47) = v10;
      Size += 4;
      sub_1042D4C0(v43);
    }
  }
  for ( j = sub_102C2320(v9 + 35); j != -1; j = sub_102C23C0(v50 + 35, j) )
  {
    sub_1042DFE0(*(char **)(40 * j + v50[36] + 16));
    sub_1042DD00((void *)(40 * j + v50[36] + 24), 0x10u);
  }
  v12 = Size;
  v13 = v43[0];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    sub_1042E0C0(v2, "%u", 4);
  }
  else
  {
    Srca = 4;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v14 = (_WORD *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32));
        if ( v14 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 1024;
            *v14 = 1024;
          }
          else
          {
            *v14 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2) = 4;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    sub_1042E0C0(v2, "%u", 1);
  }
  else
  {
    Srca = 1;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      v15 = *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32);
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v16 = (_WORD *)(*(_DWORD *)v2 + v15);
        if ( v16 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 256;
            *v16 = 256;
          }
          else
          {
            *v16 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(v15 + *(_DWORD *)v2) = 1;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  sub_1042DD00(v13, v12);
  if ( v44 >= 0 && v43[0] )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v43[0]);
  sub_1042DE40(0, 0, 0);
  v17 = v50;
  v18 = (char *)sub_10430F10(v50 + 60);
  sub_1042DFE0(v18);
  v19 = (void *)v17[59];
  v49 = v19;
  if ( (v46 & 1) != 0 )
  {
    sub_1042E0C0((int)v43, "%d", (char)v19);
  }
  else if ( (unsigned __int8)sub_1042D470(4) )
  {
    v20 = Size - v47;
    if ( (v48[0] & 1) != 0 )
    {
      v21 = (char *)v43[0] + v20;
      if ( v21 )
      {
        if ( (v48[0] & 1) != 0 )
        {
          LOBYTE(Srca) = HIBYTE(v49);
          BYTE1(Srca) = BYTE2(v49);
          BYTE2(Srca) = BYTE1(v19);
          HIBYTE(Srca) = (_BYTE)v19;
          *v21 = Srca;
        }
        else
        {
          *v21 = v19;
        }
      }
    }
    else
    {
      *(_DWORD *)((char *)v43[0] + v20) = v19;
    }
    Size += 4;
    sub_1042D4C0(v43);
  }
  v22 = (void *)v17[56];
  v49 = v22;
  if ( (v46 & 1) != 0 )
  {
    sub_1042E0C0((int)v43, "%d", (char)v22);
  }
  else if ( (unsigned __int8)sub_1042D470(4) )
  {
    v23 = Size - v47;
    if ( (v48[0] & 1) != 0 )
    {
      v24 = (char *)v43[0] + v23;
      if ( v24 )
      {
        if ( (v48[0] & 1) != 0 )
        {
          LOBYTE(Srca) = HIBYTE(v49);
          BYTE1(Srca) = BYTE2(v49);
          BYTE2(Srca) = BYTE1(v22);
          HIBYTE(Srca) = (_BYTE)v22;
          *v24 = Srca;
        }
        else
        {
          *v24 = v22;
        }
      }
    }
    else
    {
      *(_DWORD *)((char *)v43[0] + v23) = v22;
    }
    Size += 4;
    sub_1042D4C0(v43);
  }
  v25 = 0;
  if ( (int)v50[56] > 0 )
  {
    v26 = 0;
    do
    {
      sub_1042DD00((void *)(v26 + v50[53]), 0x11u);
      ++v25;
      v26 += 17;
    }
    while ( v25 < v50[56] );
  }
  v4 = (*(_BYTE *)(v2 + 21) & 1) == 0;
  v27 = Size;
  v49 = v43[0];
  if ( v4 )
  {
    Srca = 5;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      v28 = *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32);
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v29 = (_WORD *)(*(_DWORD *)v2 + v28);
        if ( v29 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 1280;
            *v29 = 1280;
          }
          else
          {
            *v29 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(v28 + *(_DWORD *)v2) = 5;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  else
  {
    sub_1042E0C0(v2, "%u", 5);
  }
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    sub_1042E0C0(v2, "%u", 1);
  }
  else
  {
    Srca = 1;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      v30 = *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32);
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v31 = (_WORD *)(*(_DWORD *)v2 + v30);
        if ( v31 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 256;
            *v31 = 256;
          }
          else
          {
            *v31 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(v30 + *(_DWORD *)v2) = 1;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  sub_1042DD00(v49, v27);
  if ( v44 >= 0 && v43[0] )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v43[0]);
  sub_1042DE40(0, 0, 0);
  if ( (v46 & 1) != 0 )
  {
    sub_1042E0C0((int)v43, "%d", 1);
  }
  else
  {
    Srca = 1;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      if ( (v48[0] & 1) != 0 )
      {
        v32 = (char *)v43[0] + Size - v47;
        if ( v32 )
        {
          if ( (v48[0] & 1) != 0 )
          {
            Srca = 256;
            *v32 = 256;
          }
          else
          {
            *v32 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)((char *)v43[0] + Size - v47) = 1;
      }
      Size += 2;
      sub_1042D4C0(v43);
    }
  }
  v33 = v50;
  v34 = (void *)v50[49];
  v49 = v34;
  if ( (v46 & 1) != 0 )
  {
    sub_1042E0C0((int)v43, "%d", (char)v34);
  }
  else if ( (unsigned __int8)sub_1042D470(4) )
  {
    v35 = Size - v47;
    if ( (v48[0] & 1) != 0 )
    {
      v36 = (char *)v43[0] + v35;
      if ( v36 )
      {
        if ( (v48[0] & 1) != 0 )
        {
          LOBYTE(Srca) = HIBYTE(v49);
          BYTE1(Srca) = BYTE2(v49);
          BYTE2(Srca) = BYTE1(v34);
          HIBYTE(Srca) = (_BYTE)v34;
          *v36 = Srca;
        }
        else
        {
          *v36 = v34;
        }
      }
    }
    else
    {
      *(_DWORD *)((char *)v43[0] + v35) = v34;
    }
    Size += 4;
    sub_1042D4C0(v43);
  }
  for ( k = sub_102C2620(v33 + 44); k != -1; k = sub_102C26C0(v50 + 44, k) )
  {
    sub_1042DFE0(*(char **)(v50[45] + 48 * k + 16));
    sub_1042DD00((void *)(v50[45] + 48 * k + 24), 0x18u);
  }
  v4 = (*(_BYTE *)(v2 + 21) & 1) == 0;
  v38 = Size;
  v49 = v43[0];
  if ( v4 )
  {
    Srca = 7;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v39 = (_WORD *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32));
        if ( v39 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 1792;
            *v39 = 1792;
          }
          else
          {
            *v39 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2) = 7;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  else
  {
    sub_1042E0C0(v2, "%u", 7);
  }
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    sub_1042E0C0(v2, "%u", 1);
  }
  else
  {
    Srca = 1;
    if ( (unsigned __int8)sub_1042D470(2) )
    {
      if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      {
        v40 = (_WORD *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32));
        if ( v40 )
        {
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            Srca = 256;
            *v40 = 256;
          }
          else
          {
            *v40 = Srca;
          }
        }
      }
      else
      {
        *(_WORD *)(*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2) = 1;
      }
      *(_DWORD *)(v2 + 16) += 2;
      sub_1042D4C0(v2);
    }
  }
  result = (void *)sub_1042DD00(v49, v38);
  if ( v44 >= 0 )
  {
    result = v43[0];
    if ( v43[0] )
      return (void *)(*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v43[0]);
  }
  return result;
}
