char __thiscall sub_1022F5D0(int this, unsigned __int8 *a2, char *a3, _BYTE *a4, int a5)
{
  unsigned __int8 *v5; // edi
  unsigned __int8 v7; // bl
  char v8; // cl
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _BYTE *v12; // ebx
  int v14; // ebx
  char *v15; // eax
  signed int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+Ch] [ebp-10h]
  unsigned int v21; // [esp+10h] [ebp-Ch]
  int v22; // [esp+14h] [ebp-8h]
  char v23; // [esp+1Bh] [ebp-1h] BYREF

  v5 = a2;
  v23 = 0;
  if ( !a2 )
    v5 = (unsigned __int8 *)&v23;
  v21 = strlen(a3);
  v20 = *(_DWORD *)(this + 12);
  sub_1022E840((_DWORD *)this);
  v7 = *v5;
  if ( *v5 )
  {
    while ( 1 )
    {
      ++v5;
      if ( !isspace(v7) )
        break;
      sub_1022E840((_DWORD *)this);
LABEL_21:
      v7 = *v5;
      if ( !*v5 )
        goto LABEL_22;
    }
    if ( (*(_BYTE *)(this + 21) & 1) != 0 )
    {
      HIBYTE(a2) = 0;
      sub_1022F5B0(this, "%c", (char *)&a2 + 3);
    }
    else
    {
      v8 = *(_BYTE *)(this + 20);
      if ( (v8 & 2) != 0 )
      {
LABEL_9:
        HIBYTE(a2) = 0;
        goto LABEL_16;
      }
      v9 = *(_DWORD *)(this + 12);
      if ( *(_DWORD *)(this + 28) < v9 + 1 )
      {
        *(_BYTE *)(this + 20) = v8 | 2;
        goto LABEL_9;
      }
      v10 = *(_DWORD *)(this + 32);
      if ( v9 >= v10 && *(_DWORD *)(this + 4) >= v9 - v10 + 1
        || (*(unsigned __int8 (__thiscall **)(int, int))(this + 36))(this, 1) )
      {
        v11 = *(_DWORD *)(this + 12) + 1;
        HIBYTE(a2) = *(_BYTE *)(*(_DWORD *)(this + 12) - *(_DWORD *)(this + 32) + *(_DWORD *)this);
        *(_DWORD *)(this + 12) = v11;
      }
      else
      {
        *(_BYTE *)(this + 20) |= 2u;
        HIBYTE(a2) = 0;
      }
    }
LABEL_16:
    v22 = tolower(SHIBYTE(a2));
    if ( v22 != tolower((char)v7) )
      goto LABEL_17;
    goto LABEL_21;
  }
LABEL_22:
  sub_1022E840((_DWORD *)this);
  v14 = *(_DWORD *)(this + 12);
  if ( !sub_1022E4F0((_DWORD *)this, a3) )
  {
LABEL_17:
    v12 = a4;
    goto LABEL_18;
  }
  v15 = *(char **)(this + 12);
  v16 = (signed int)&v15[-v14 - v21];
  a3 = v15;
  if ( v16 >= a5 )
    v16 = a5 - 1;
  if ( v16 <= 0 )
  {
    v12 = a4;
    goto LABEL_35;
  }
  *(_DWORD *)(this + 12) = v14;
  if ( v14 <= *(_DWORD *)(this + 28) )
  {
    v17 = *(_DWORD *)(this + 32);
    *(_BYTE *)(this + 20) &= ~2u;
    if ( v14 < v17 || v14 >= v17 + *(_DWORD *)(this + 4) )
      (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
  }
  else
  {
    *(_BYTE *)(this + 20) |= 2u;
  }
  v12 = a4;
  sub_1022E7D0((_BYTE *)this, a4, v16);
  if ( *(_BYTE *)(this + 20) )
  {
LABEL_18:
    *(_DWORD *)(this + 12) = v20;
    if ( v20 <= *(_DWORD *)(this + 28) )
    {
      v18 = *(_DWORD *)(this + 32);
      *(_BYTE *)(this + 20) &= ~2u;
      if ( v20 < v18 || v20 >= v18 + *(_DWORD *)(this + 4) )
        (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
      *v12 = 0;
      return 0;
    }
    else
    {
      *(_BYTE *)(this + 20) |= 2u;
      *v12 = 0;
      return 0;
    }
  }
  do
  {
    if ( !isspace((unsigned __int8)v12[v16 - 1]) )
      break;
    --v16;
  }
  while ( v16 > 0 );
  v15 = a3;
LABEL_35:
  v12[v16] = 0;
  *(_DWORD *)(this + 12) = v15;
  if ( (int)v15 <= *(_DWORD *)(this + 28) )
  {
    v19 = *(_DWORD *)(this + 32);
    *(_BYTE *)(this + 20) &= ~2u;
    if ( (int)v15 < v19 || (int)v15 >= v19 + *(_DWORD *)(this + 4) )
      (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
    return 1;
  }
  else
  {
    *(_BYTE *)(this + 20) |= 2u;
    return 1;
  }
}
