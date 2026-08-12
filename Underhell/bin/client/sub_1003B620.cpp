unsigned int __thiscall sub_1003B620(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // edx
  unsigned int v4; // edx
  int *v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // edx
  int *v9; // eax
  unsigned int v10; // edx
  int v11; // eax

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 328) == -1
      || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 328) & 0xFFF) + 2) != *(_DWORD *)(a2 + 328) >> 12
       ? 0
       : (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 328) & 0xFFF) + 1);
    if ( v3 == a3 )
      *(_DWORD *)(a2 + 328) = a3[83];
  }
  v4 = a3[84];
  if ( v4 != -1 )
  {
    v5 = (int *)((char *)off_103DCD74 + 16 * (a3[84] & 0xFFF) + 4);
    v6 = v4 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (a3[84] & 0xFFF) + 2) == v6 )
    {
      if ( *v5 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (a3[84] & 0xFFF) + 2) == v6 )
          v7 = *v5;
        else
          v7 = 0;
        *(_DWORD *)(v7 + 332) = a3[83];
      }
    }
  }
  v8 = a3[83];
  if ( v8 != -1 )
  {
    v9 = (int *)((char *)off_103DCD74 + 16 * (a3[83] & 0xFFF) + 4);
    v10 = v8 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (a3[83] & 0xFFF) + 2) == v10 )
    {
      if ( *v9 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (a3[83] & 0xFFF) + 2) == v10 )
          v11 = *v9;
        else
          v11 = 0;
        *(_DWORD *)(v11 + 336) = a3[84];
      }
    }
  }
  a3[83] = -1;
  a3[84] = -1;
  a3[81] = -1;
  sub_100396A0(a3);
  return sub_100391C0(this);
}
