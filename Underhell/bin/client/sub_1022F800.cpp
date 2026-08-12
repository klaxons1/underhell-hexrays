int __thiscall sub_1022F800(int this, int a2, _BYTE *a3, int a4, int a5)
{
  _BYTE *v5; // ebx
  int v7; // eax
  char v8; // al
  int v9; // ecx
  _BYTE *v10; // eax
  bool v11; // zf
  char v12; // al
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  char v18; // [esp+Ah] [ebp-2h] BYREF
  char v19; // [esp+Bh] [ebp-1h] BYREF

  v5 = a3;
  *a3 = 0;
  if ( *(_BYTE *)(this + 20) )
    return -1;
  while ( 1 )
  {
    sub_1022E840((_DWORD *)this);
    if ( !(_BYTE)a5 )
      break;
    if ( (*(_BYTE *)(this + 21) & 1) == 0 )
      goto LABEL_29;
    if ( *(_BYTE *)(this + 20) )
      break;
    v7 = *(_DWORD *)(this + 12);
    if ( *(_DWORD *)(this + 28) >= v7 + 2 )
    {
      if ( (v9 = *(_DWORD *)(this + 32), v7 >= v9) && *(_DWORD *)(this + 4) >= v7 - v9 + 2
        || (v8 = (*(int (__thiscall **)(int, int))(this + 36))(this, 2)) != 0 )
      {
        v8 = 1;
      }
      else
      {
        *(_BYTE *)(this + 20) |= 2u;
      }
    }
    else
    {
      *(_BYTE *)(this + 20) = 2;
      v8 = 0;
    }
    *(_BYTE *)(this + 20) &= ~2u;
    if ( !v8 )
      break;
    v10 = (_BYTE *)(*(_DWORD *)this + *(_DWORD *)(this + 12) - *(_DWORD *)(this + 32));
    if ( !v10 || *v10 != 47 || v10[1] != 47 )
      break;
    v11 = (*(_BYTE *)(this + 21) & 1) == 0;
    *(_DWORD *)(this + 12) += 2;
    if ( v11 )
    {
      sub_1011C500((_DWORD *)this, &v19);
    }
    else
    {
      v19 = 0;
      sub_1022F5B0(this, "%c", &v19);
    }
    v12 = v19;
    if ( !*(_BYTE *)(this + 20) )
    {
      while ( v12 != 10 )
      {
        if ( (*(_BYTE *)(this + 21) & 1) != 0 )
        {
          v18 = 0;
          sub_1022F5B0(this, "%c", &v18);
        }
        else
        {
          sub_1011C500((_DWORD *)this, &v18);
        }
        v12 = v18;
        if ( *(_BYTE *)(this + 20) )
          return -1;
      }
      if ( !*(_BYTE *)(this + 20) )
        continue;
    }
    return -1;
  }
  if ( (*(_BYTE *)(this + 21) & 1) == 0 )
  {
LABEL_29:
    sub_1011C500((_DWORD *)this, (_BYTE *)&a5 + 3);
    goto LABEL_31;
  }
  HIBYTE(a5) = 0;
  sub_1022F5B0(this, "%c", (char *)&a5 + 3);
LABEL_31:
  if ( !HIBYTE(a5) )
    return -1;
  if ( HIBYTE(a5) == 34 )
  {
    v14 = 0;
    if ( *(_BYTE *)(this + 20) )
    {
LABEL_42:
      v5[v14] = 0;
      return v14;
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(this + 21) & 1) != 0 )
        {
          HIBYTE(a5) = 0;
          sub_1022F5B0(this, "%c", (char *)&a5 + 3);
        }
        else
        {
          sub_1011C500((_DWORD *)this, (_BYTE *)&a5 + 3);
        }
        if ( HIBYTE(a5) == 34 || !HIBYTE(a5) )
          break;
        a3[v14] = HIBYTE(a5);
        if ( ++v14 == a4 )
        {
          a3[v14 - 1] = 0;
          return a4;
        }
        if ( *(_BYTE *)(this + 20) )
        {
          v5 = a3;
          goto LABEL_42;
        }
      }
      a3[v14] = 0;
      return v14;
    }
  }
  else
  {
    v11 = *(_BYTE *)(SHIBYTE(a5) + a2) == 0;
    *a3 = HIBYTE(a5);
    if ( v11 )
    {
      v15 = 1;
      if ( a4 == 1 )
      {
LABEL_56:
        a3[v15 - 1] = 0;
        return a4;
      }
      else
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(this + 21) & 1) != 0 )
          {
            HIBYTE(a5) = 0;
            sub_1022F5B0(this, "%c", (char *)&a5 + 3);
          }
          else
          {
            sub_1011C500((_DWORD *)this, (_BYTE *)&a5 + 3);
          }
          if ( *(_BYTE *)(this + 20) )
            break;
          if ( *(_BYTE *)(SHIBYTE(a5) + a2) || HIBYTE(a5) == 34 || SHIBYTE(a5) <= 32 )
          {
            v16 = --*(_DWORD *)(this + 12);
            if ( v16 > *(_DWORD *)(this + 28) )
            {
              *(_BYTE *)(this + 20) |= 2u;
              a3[v15] = 0;
              return v15;
            }
            v17 = *(_DWORD *)(this + 32);
            *(_BYTE *)(this + 20) &= ~2u;
            if ( v16 < v17 || v16 >= v17 + *(_DWORD *)(this + 4) )
              (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
            break;
          }
          a3[v15] = HIBYTE(a5);
          if ( ++v15 == a4 )
            goto LABEL_56;
        }
        a3[v15] = 0;
        return v15;
      }
    }
    else
    {
      a3[1] = 0;
      return 1;
    }
  }
}
