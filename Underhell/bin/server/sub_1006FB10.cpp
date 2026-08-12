char __thiscall sub_1006FB10(int this, int a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // edx
  int *v14; // esi
  bool v15; // cc
  int v16; // esi
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int16 v22; // ax
  int v23; // esi
  __int16 v24; // cx
  _WORD *v25; // eax
  unsigned __int16 j; // si
  char result; // al
  BOOL (__cdecl *v28)(_DWORD *, _DWORD *); // [esp+Ch] [ebp-2Ch] BYREF
  int v29; // [esp+10h] [ebp-28h]
  int v30; // [esp+14h] [ebp-24h]
  int v31; // [esp+18h] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-1Ch]
  int v33; // [esp+20h] [ebp-18h]
  int v34; // [esp+24h] [ebp-14h]
  int v35; // [esp+28h] [ebp-10h] BYREF
  int i; // [esp+2Ch] [ebp-Ch]
  int v37; // [esp+30h] [ebp-8h] BYREF
  char v38; // [esp+37h] [ebp-1h] BYREF

  v2 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0xFFFF;
  v33 = -1;
  v34 = 0;
  v28 = sub_1005D140;
  sub_1006DCB0((_DWORD *)this);
  v4 = 0;
  for ( i = 0; v4 < *(_DWORD *)(this + 836); i = v4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 824) + 4 * v4);
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    v35 = v6;
    sub_1006D900(&v28, (int)&v35, (unsigned __int16 *)&v37, &v38);
    v7 = sub_10053540((int)&v28);
    v8 = v37;
    v9 = v7;
    v10 = 3 * v7;
    v11 = v29;
    v12 = 4 * v10;
    *(_WORD *)(v12 + v29 + 2) = -1;
    *(_WORD *)(v12 + v11) = -1;
    *(_WORD *)(v12 + v11 + 6) = 0;
    *(_WORD *)(v12 + v11 + 4) = v8;
    if ( v8 == 0xFFFF )
    {
      LOWORD(v32) = v9;
    }
    else
    {
      v13 = 3 * v8;
      if ( v38 )
        *(_WORD *)(v11 + 4 * v13) = v9;
      else
        *(_WORD *)(v11 + 4 * v13 + 2) = v9;
    }
    sub_1006E2E0((int)&v28, v9);
    v2 = v29;
    ++HIWORD(v32);
    v14 = (int *)(v12 + v29 + 8);
    if ( v14 )
      *v14 = v35;
    v4 = i + 1;
  }
  sub_1006F910((_DWORD *)this);
  v15 = *(_DWORD *)(this + 836) <= 0;
  i = 0;
  if ( !v15 )
  {
    do
    {
      v16 = 4 * i;
      v17 = *(_DWORD *)(*(_DWORD *)(this + 824) + 4 * i);
      if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + 4 * i) & 0xFFF) + 2] != v17 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + 4 * i) & 0xFFF) + 1];
      v35 = v18;
      if ( sub_1006DE50(&v28, (int)&v35) == -1 )
      {
        if ( (*(_BYTE *)(this + 848) & 1) != 0 )
        {
          v19 = *(_DWORD *)(*(_DWORD *)(this + 824) + v16);
          if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + v16) & 0xFFF) + 2] != v19 >> 12 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 732))(this, 0);
          else
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 732))(
              this,
              off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + v16) & 0xFFF) + 1]);
        }
      }
      else
      {
        v20 = *(_DWORD *)(*(_DWORD *)(this + 824) + v16);
        if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + v16) & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + v16) & 0xFFF) + 1];
        v37 = v21;
        v22 = sub_1006DE50(&v28, (int)&v37);
        v23 = v22;
        if ( v22 != 0xFFFF )
        {
          sub_1006F350((int)&v28, v22);
          v2 = v29;
          v24 = v33;
          v25 = (_WORD *)(v29 + 12 * v23);
          --HIWORD(v32);
          *v25 = v23;
          v25[1] = v24;
          LOWORD(v33) = v23;
        }
      }
      ++i;
    }
    while ( i < *(_DWORD *)(this + 836) );
  }
  for ( j = sub_1006DF50((int)&v28); j != 0xFFFF; j = sub_1006E020(&v28, j) )
  {
    if ( (*(_BYTE *)(this + 848) & 1) != 0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 736))(this, *(_DWORD *)(v2 + 12 * j + 8));
  }
  result = sub_1006E220((int)&v28);
  if ( v31 >= 0 )
  {
    result = v29;
    if ( v29 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29);
      return 0;
    }
  }
  return result;
}
