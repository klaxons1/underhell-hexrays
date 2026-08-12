char __thiscall sub_10170290(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // eax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // cx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // edi
  void (__thiscall ***v11)(_DWORD, _DWORD); // esi
  unsigned int v12; // ebx
  char result; // al
  BOOL (__cdecl *v14)(_DWORD *, _DWORD *); // [esp+Ch] [ebp-2Ch] BYREF
  int v15; // [esp+10h] [ebp-28h]
  int v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+18h] [ebp-20h]
  int v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h]
  int v20; // [esp+24h] [ebp-14h]
  _DWORD *v21; // [esp+28h] [ebp-10h]
  _DWORD *i; // [esp+2Ch] [ebp-Ch] BYREF
  unsigned __int16 v23[3]; // [esp+30h] [ebp-8h] BYREF
  char v24; // [esp+37h] [ebp-1h] BYREF

  v1 = this;
  v2 = (_DWORD *)this[7];
  v21 = this;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0xFFFF;
  v19 = -1;
  v20 = 0;
  v14 = sub_100FACE0;
  for ( i = v2; i; i = (_DWORD *)*i )
  {
    sub_1016D720(&v14, (int)&i, v23, &v24);
    v3 = sub_10143E80((int)&v14);
    v4 = v23[0];
    v5 = v3;
    v6 = 3 * v3;
    v7 = v15;
    v8 = 4 * v6;
    *(_WORD *)(v8 + v15 + 2) = -1;
    *(_WORD *)(v8 + v7) = -1;
    *(_WORD *)(v8 + v7 + 6) = 0;
    *(_WORD *)(v8 + v7 + 4) = v4;
    if ( v4 == 0xFFFF )
    {
      LOWORD(v18) = v5;
    }
    else
    {
      v9 = 3 * v4;
      if ( v24 )
        *(_WORD *)(v7 + 4 * v9) = v5;
      else
        *(_WORD *)(v7 + 4 * v9 + 2) = v5;
    }
    sub_1016EC80((int)&v14, v5);
    ++HIWORD(v18);
    if ( v8 + v15 != -8 )
      *(_DWORD *)(v8 + v15 + 8) = i;
  }
  v10 = v1[4];
  if ( (_DWORD *)v10 != v1 + 3 )
  {
    do
    {
      v11 = (void (__thiscall ***)(_DWORD, _DWORD))(v10 + 12);
      v12 = *(_DWORD *)(v10 + 8) + v10 + 12;
      if ( v10 + 12 < v12 )
      {
        do
        {
          *(_DWORD *)v23 = v11;
          if ( sub_1016EAC0(&v14, (int)v23) == -1 )
            (**v11)(v11, 0);
          v11 += 536;
        }
        while ( (unsigned int)v11 < v12 );
      }
      v10 = *(_DWORD *)(v10 + 4);
    }
    while ( (_DWORD *)v10 != v21 + 3 );
    v1 = v21;
  }
  sub_1022FCD0(v1);
  result = sub_1016EBC0((int)&v14);
  if ( v17 >= 0 )
  {
    result = v15;
    if ( v15 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
      return 0;
    }
  }
  return result;
}
