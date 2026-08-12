void __thiscall sub_102E3B10(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v3; // ecx
  int v4; // esi
  int v5; // eax
  float *v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int *v13; // edi
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  char v17; // al
  int i; // ebx
  _DWORD *v19; // edi
  char v20; // al
  int v21; // [esp+14h] [ebp-2Ch] BYREF
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h]
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  float v26; // [esp+28h] [ebp-18h] BYREF
  float v27; // [esp+2Ch] [ebp-14h]
  float v28; // [esp+30h] [ebp-10h]
  int v29; // [esp+34h] [ebp-Ch]
  int v30; // [esp+38h] [ebp-8h] BYREF
  _DWORD *v31; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF
  int v33; // [esp+48h] [ebp+8h]
  bool v34; // [esp+4Bh] [ebp+Bh]

  v2 = (int)this;
  v3 = (_DWORD *)this[1344];
  v4 = 0;
  v31 = (_DWORD *)v2;
  if ( !v3
    || (v5 = sub_100B1560(v3, 0, 1)) == 0
    || (v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1568))(v5)) == 0 )
  {
    sub_1023C380((_DWORD *)v2, (int)"HL2Player.UseDeny", 0.0, 0);
    return;
  }
  v7 = flt_10689738;
  v8 = flt_10689734;
  v9 = flt_10689730;
  v10 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      goto LABEL_9;
    if ( sub_10018CD0(v6 + 614, &flt_10689730) )
      goto LABEL_11;
    v7 = flt_10689738;
    v8 = flt_10689734;
    v9 = flt_10689730;
LABEL_15:
    v26 = v9;
    v29 = v2;
    v27 = v8;
    v28 = v7;
    goto LABEL_16;
  }
  if ( v6[614] != v9 || v6[615] != v8 || v6[616] != v7 )
    goto LABEL_15;
LABEL_9:
  v26 = flt_10689730;
  v27 = flt_10689734;
  v29 = 0;
  v28 = flt_10689738;
  if ( !sub_102E3620((_DWORD *)v2, (int)&savedregs, v2, 0, (int)&v26) )
  {
    sub_1023C380((_DWORD *)v2, (int)"HL2Player.UseDeny", 0.0, 0);
LABEL_11:
    sub_102375F0(&v21);
    return;
  }
LABEL_16:
  v11 = sub_100B1560(*(_DWORD **)(v2 + 5376), &v30, 1);
  v33 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 1524))(v11) )
      {
        v12 = v10;
        if ( v10 + 1 > v22 )
        {
          sub_102ABFC0(&v21, v10 - v22 + 1);
          v10 = v24;
          v4 = v21;
        }
        v24 = ++v10;
        v25 = v4;
        if ( v10 - v12 - 1 > 0 )
          memcpy((void *)(v4 + 4 * v12 + 4), (const void *)(v4 + 4 * v12), 4 * (v10 - v12 - 1));
        v13 = (int *)(v4 + 4 * v12);
        if ( v13 )
          *v13 = v33;
        v2 = (int)v31;
      }
      v33 = sub_100B1630(*(_DWORD **)(v2 + 5376), &v30, 1);
      if ( !v33 )
        break;
      v11 = v33;
    }
  }
  v14 = v29;
  if ( v29 )
  {
    v15 = sub_100D7680(v29);
    v14 = v29;
    v16 = (_DWORD *)v15;
    v31 = (_DWORD *)v15;
  }
  else
  {
    v31 = 0;
    v16 = 0;
  }
  v34 = 0;
  if ( v16 )
  {
    if ( v14 )
    {
      v17 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*v16 + 1572))(v16, v14, v4, v10);
    }
    else
    {
      if ( sub_100296A0(v16) )
        (*(void (__thiscall **)(_DWORD *, float *, int, int))(*v16 + 1576))(v16, &v26, v4, v10);
      v17 = 1;
    }
    v34 = v17 == 0;
  }
  for ( i = 0; !v34; ++i )
  {
    if ( i >= v24 )
      break;
    if ( *(_DWORD **)(v4 + 4 * i) != v16
      && (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 4 * i) + 1528))(
           *(_DWORD *)(v4 + 4 * i),
           0) )
    {
      v19 = *(_DWORD **)(v4 + 4 * i);
      if ( v29 )
      {
        v20 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*v19 + 1572))(v19, v29, v4, v24);
      }
      else
      {
        if ( sub_100296A0(v19) )
          (*(void (__thiscall **)(_DWORD *, float *, int, int))(*v19 + 1576))(v19, &v26, v4, v24);
        v20 = 1;
      }
      v16 = v31;
      v34 = v20 == 0;
    }
  }
  if ( v23 >= 0 )
  {
    if ( v4 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
  }
}
