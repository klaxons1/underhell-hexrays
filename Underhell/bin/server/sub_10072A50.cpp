int __cdecl sub_10072A50(float *a1, float *a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // ebx
  bool v6; // al
  int v7; // esi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // edi
  int v14; // edi
  char *v15; // ecx
  int v16; // eax
  int *v17; // edi
  int v19; // edi
  int v20; // ecx
  _DWORD *v21; // ebx
  int v22; // eax
  int v23; // edi
  int v24; // esi
  int v25; // [esp+Ch] [ebp-48h] BYREF
  int v26; // [esp+10h] [ebp-44h] BYREF
  int v27; // [esp+14h] [ebp-40h]
  int v28; // [esp+18h] [ebp-3Ch]
  int v29; // [esp+1Ch] [ebp-38h]
  int v30; // [esp+20h] [ebp-34h]
  void *Src; // [esp+24h] [ebp-30h] BYREF
  int v32; // [esp+28h] [ebp-2Ch]
  int v33; // [esp+2Ch] [ebp-28h]
  int v34; // [esp+30h] [ebp-24h]
  void *v35; // [esp+34h] [ebp-20h]
  int v36; // [esp+38h] [ebp-1Ch]
  int v37; // [esp+3Ch] [ebp-18h]
  int v38; // [esp+40h] [ebp-14h]
  int v39; // [esp+44h] [ebp-10h]
  float v40; // [esp+48h] [ebp-Ch] BYREF
  int v41; // [esp+4Ch] [ebp-8h]
  bool v42; // [esp+53h] [ebp-1h]

  v3 = a3;
  v4 = a3[3];
  v5 = 0;
  v39 = v4;
  v6 = !v4 && a3[6] != -1 && !a3[7];
  v7 = 0;
  v42 = (a3[5] & 2) != 0;
  LOBYTE(v38) = 1;
  Src = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( v6 )
  {
    v8 = a3[6];
    v26 = 0;
    v27 = 0;
    v28 = 1;
    v29 = 0;
    v30 = 0;
    v25 = v8;
    v9 = (unsigned __int16)sub_10071DB0(&off_10607418, (int)&v25);
    sub_102375F0(&v26);
    if ( v9 == 0xFFFF )
      goto LABEL_28;
    v10 = 32 * v9 + dword_1060741C + 12;
    sub_102ABFC0(1);
    v11 = Src;
    ++v34;
    v35 = Src;
    if ( v34 - 1 > 0 )
      memcpy((char *)Src + 4, Src, 4 * (v34 - 1));
    if ( v11 )
      *v11 = v10;
    goto LABEL_27;
  }
  if ( v4 <= 0 )
  {
    sub_102ABFC0(1);
    ++v34;
    v35 = Src;
    if ( v34 - 1 > 0 )
      memcpy((char *)Src + 4, Src, 4 * (v34 - 1));
    LOBYTE(v38) = 0;
LABEL_27:
    v7 = v34;
    goto LABEL_28;
  }
  v41 = 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(*v3 + 4 * v41);
    v26 = 0;
    v27 = 0;
    v28 = 1;
    v29 = 0;
    v30 = 0;
    v25 = v12;
    v13 = (unsigned __int16)sub_10071DB0(&off_10607418, (int)&v25);
    sub_102375F0(&v26);
    if ( v13 != 0xFFFF )
    {
      v37 = 32 * v13 + dword_1060741C + 12;
      v14 = v7;
      if ( v7 + 1 > v32 )
      {
        sub_102ABFC0(v7 - v32 + 1);
        v7 = v34;
      }
      v15 = (char *)Src;
      v16 = ++v7 - v14 - 1;
      v34 = v7;
      v35 = Src;
      if ( v16 > 0 )
      {
        memcpy((char *)Src + 4 * v14 + 4, (char *)Src + 4 * v14, 4 * v16);
        v15 = (char *)Src;
      }
      v17 = (int *)&v15[4 * v14];
      if ( v17 )
        *v17 = v37;
    }
    if ( ++v41 >= v39 )
      break;
    v3 = a3;
  }
LABEL_28:
  v39 = 0;
  v41 = 0;
  if ( !v7 )
  {
    sub_102375F0(&Src);
    return 0;
  }
  v40 = 56755.84;
  if ( !v42 )
  {
    do
    {
      v19 = dword_10692FE0[((_BYTE)v5 + (_BYTE)dword_10693000) & 7];
      if ( v19 )
      {
        ++v41;
        if ( sub_10071420(v19, v7, a1, a3, a2, &v40, 0, 0) )
        {
          sub_102375F0(&Src);
          return v19;
        }
      }
      ++v5;
    }
    while ( v5 < 8 );
  }
  v20 = 0;
  v40 = 56755.84;
  v37 = 0;
  if ( v7 <= 0 )
    goto LABEL_45;
  while ( 1 )
  {
    v21 = (_DWORD *)*((_DWORD *)Src + v20);
    v22 = v21[3];
    v36 = v22;
    if ( v22 )
    {
      v23 = 0;
      if ( v22 > 0 )
        break;
    }
LABEL_42:
    v37 = ++v20;
    if ( v20 >= v7 )
    {
      if ( v39 )
      {
        dword_10693000 = ((_BYTE)dword_10693000 + 1) & 7;
        dword_10692FE0[dword_10693000] = v39;
      }
LABEL_45:
      if ( v33 >= 0 )
      {
        if ( Src )
          (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
      }
      return v39;
    }
  }
  while ( 1 )
  {
    v24 = *(_DWORD *)(*v21 + 4 * v23);
    ++v41;
    if ( sub_10071420(v24, v24, a1, a3, a2, &v40, 0, v38) )
      break;
LABEL_40:
    if ( ++v23 >= v36 )
    {
      v20 = v37;
      v7 = v34;
      goto LABEL_42;
    }
  }
  if ( v42 )
  {
    v39 = v24;
    goto LABEL_40;
  }
  if ( v24 )
  {
    dword_10693000 = ((_BYTE)dword_10693000 + 1) & 7;
    dword_10692FE0[dword_10693000] = v24;
  }
  if ( v33 >= 0 && Src )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  return v24;
}
