char __thiscall sub_10247510(_DWORD *this)
{
  int v1; // ebp
  _DWORD *v2; // eax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // cx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  bool v9; // zf
  int v10; // edx
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  unsigned int v13; // ebp
  bool v14; // sf
  int v15; // eax
  char result; // al
  char v17; // [esp+13h] [ebp-29h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-28h] BYREF
  _DWORD *i; // [esp+18h] [ebp-24h] BYREF
  _DWORD *v20; // [esp+1Ch] [ebp-20h]
  BOOL (__cdecl *v21)(_DWORD *, _DWORD *); // [esp+20h] [ebp-1Ch] BYREF
  int v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+28h] [ebp-14h]
  int v24; // [esp+2Ch] [ebp-10h]
  __int16 v25; // [esp+30h] [ebp-Ch]
  __int16 v26; // [esp+32h] [ebp-Ah]
  __int16 v27; // [esp+34h] [ebp-8h]
  __int16 v28; // [esp+36h] [ebp-6h]
  int v29; // [esp+38h] [ebp-4h]

  v1 = (int)this;
  v2 = (_DWORD *)this[7];
  v20 = this;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = -1;
  v26 = 0;
  v27 = -1;
  v28 = -1;
  v29 = 0;
  v21 = sub_100FACE0;
  for ( i = v2; i; i = (_DWORD *)*i )
  {
    sub_1016D720(&v21, (int)&i, (unsigned __int16 *)&v18, &v17);
    v3 = sub_10143E80((int)&v21);
    v4 = (unsigned __int16)v18;
    v5 = v3;
    v6 = 3 * v3;
    v7 = v22;
    v8 = 4 * v6;
    v9 = (_WORD)v18 == 0xFFFF;
    *(_WORD *)(v8 + v22 + 4) = (_WORD)v18;
    *(_WORD *)(v8 + v7 + 2) = -1;
    *(_WORD *)(v8 + v7) = -1;
    *(_WORD *)(v8 + v7 + 6) = 0;
    if ( v9 )
    {
      v25 = v5;
    }
    else
    {
      v10 = 3 * v4;
      if ( v17 )
        *(_WORD *)(v7 + 4 * v10) = v5;
      else
        *(_WORD *)(v7 + 4 * v10 + 2) = v5;
    }
    sub_1016EC80((int)&v21, v5);
    ++v26;
    if ( v8 + v22 != -8 )
      *(_DWORD *)(v8 + v22 + 8) = i;
  }
  v11 = *(_DWORD **)(v1 + 16);
  if ( v11 != (_DWORD *)(v1 + 12) )
  {
    do
    {
      v12 = v11 + 3;
      v13 = (unsigned int)v11 + v11[2] + 12;
      if ( (unsigned int)(v11 + 3) < v13 )
      {
        do
        {
          v18 = v12;
          if ( sub_1016EAC0(&v21, (int)&v18) == -1 )
          {
            v14 = (int)v12[2] < 0;
            v12[3] = 0;
            if ( !v14 )
            {
              if ( *v12 )
              {
                (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v12);
                *v12 = 0;
              }
              v12[1] = 0;
            }
            v14 = (int)v12[2] < 0;
            v15 = *v12;
            v12[4] = *v12;
            if ( !v14 )
            {
              if ( v15 )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
                *v12 = 0;
              }
              v12[1] = 0;
            }
          }
          v12 += 7;
        }
        while ( (unsigned int)v12 < v13 );
      }
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 != v20 + 3 );
    v1 = (int)v20;
  }
  sub_1022FCD0(v1);
  result = sub_1016EBC0((int)&v21);
  if ( v24 >= 0 )
  {
    result = v22;
    if ( v22 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22);
      return 0;
    }
  }
  return result;
}
