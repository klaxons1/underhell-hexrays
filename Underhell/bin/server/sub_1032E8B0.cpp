int __thiscall sub_1032E8B0(int this, int a2, int a3, int a4)
{
  char v6; // al
  int v7; // ebx
  int v8; // eax
  _BYTE *v9; // ecx

  if ( a2 == 95 )
    return 96;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2284))(this);
  v7 = a4;
  if ( v6
    && !*(_BYTE *)(this + 3776)
    && (unsigned int)(a4 - 11) <= 3
    && (unsigned __int8)sub_103E0CF0(0)
    && *(_DWORD *)(sub_1026A890((unsigned int *)(this + 3820)) + 424)
    && (v8 = sub_1026A890((unsigned int *)(this + 3820)),
        ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v8 + 424) + 116))(*(_DWORD *)(v8 + 424)) < 100.0) )
  {
    *(_DWORD *)(this + 3796) = *(_DWORD *)(this + 3820);
    *(_DWORD *)(this + 3820) = -1;
    return 91;
  }
  else
  {
    *(_DWORD *)(this + 3820) = -1;
    v9 = *(_BYTE **)(this + 3624);
    *(_BYTE *)(this + 3648) = 1;
    a4 = 0;
    if ( v9 && sub_101645F0(v9, a2, a3, v7, &a4) )
      return a4;
    else
      return sub_10043EF0((_DWORD *)this, a2, a3, v7);
  }
}
