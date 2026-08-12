int __thiscall sub_100BF210(void *this, int a2)
{
  int v2; // edx
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  int v7; // ecx
  _DWORD *v8; // edx
  _BYTE v10[256]; // [esp+8h] [ebp-100h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 >= 8 )
  {
    *(_DWORD *)(a2 + 20) = v2 - 8;
    if ( v2 == 8 )
    {
      v4 = *(_DWORD **)(a2 + 24);
      v5 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v4 == v5 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v4 + 1;
      }
      else if ( v4 <= v5 )
      {
        *(_DWORD *)(a2 + 16) = *v4;
        *(_DWORD *)(a2 + 24) = v4 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) >>= 8;
    }
    goto LABEL_17;
  }
  v6 = *(_DWORD **)(a2 + 28);
  v7 = 8 - v2;
  v8 = *(_DWORD **)(a2 + 24);
  if ( v8 == v6 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v8 > v6 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 16) = *v8;
  }
  *(_DWORD *)(a2 + 24) = v8 + 1;
LABEL_15:
  if ( !*(_BYTE *)(a2 + 4) )
  {
    *(_DWORD *)(a2 + 16) >>= v7;
    *(_DWORD *)(a2 + 20) = 32 - v7;
  }
LABEL_17:
  sub_1022C220(v10, 256, 0, 0);
  return (*(int (**)(void *, _DWORD, const char *, ...))(*(_DWORD *)this + 68))(this, 0, "%s", v10);
}
