int __thiscall sub_1003E640(int this)
{
  int v2; // ebx
  int v3; // ecx
  unsigned int v4; // eax
  int i; // eax
  int v6; // ecx
  bool v7; // al
  int v8; // eax
  void *v9; // ecx
  int v11; // [esp-4h] [ebp-10h]

  v2 = sub_100313F0((_DWORD *)this);
  *(_DWORD *)(this + 2628) = -1;
  *(_DWORD *)(this + 2632) = -1;
  *(_DWORD *)(this + 2636) = -1;
  v11 = *(_DWORD *)(this + 2648);
  *(_BYTE *)(this + 2640) = 0;
  *(_DWORD *)(this + 2644) = 0;
  sub_10034930(v11);
  *(_DWORD *)(this + 2648) = 0;
  if ( v2 )
  {
    v3 = *(_DWORD *)v2;
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 260);
    if ( v4 )
    {
      *(_DWORD *)(this + 2648) = sub_100DDA40((unsigned __int64)v4 >> 30 != 0 ? -1 : 4 * v4);
      v3 = *(_DWORD *)v2;
      for ( i = 0; i < *(_DWORD *)(v3 + 260); ++i )
        *(float *)(*(_DWORD *)(this + 2648) + 4 * i) = 0.0;
    }
    v6 = *(_DWORD *)(v3 + 268);
    v7 = v6 != *(unsigned __int8 *)(this + 2533);
    if ( v6 < 1 )
      LOBYTE(v6) = 1;
    *(_BYTE *)(this + 2533) = v6;
    if ( v7 )
    {
      sub_10034930(*(_DWORD *)(this + 2536));
      sub_10034930(*(_DWORD *)(this + 2524));
      *(_DWORD *)(this + 2536) = sub_100DDA40(*(unsigned __int8 *)(this + 2533));
      v8 = sub_100DDA40((unsigned __int64)*(unsigned __int8 *)(this + 2533) >> 30 != 0 ? -1 : 4
                                                                                            * *(unsigned __int8 *)(this + 2533));
      v9 = *(void **)(this + 2536);
      *(_DWORD *)(this + 2524) = v8;
      memset(v9, 0, *(unsigned __int8 *)(this + 2533));
      memset(*(void **)(this + 2524), 0, 4 * *(unsigned __int8 *)(this + 2533));
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 2504) + 20))(this + 2504);
    }
    *(_DWORD *)(this + 2644) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(this + 4) + 140))(
                                 this + 4,
                                 "mouth");
  }
  return v2;
}
