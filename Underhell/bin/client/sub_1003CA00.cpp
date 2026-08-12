unsigned int __thiscall sub_1003CA00(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx

  a3[84] = -1;
  v3 = a2[82];
  a3[83] = v3;
  if ( v3 != -1 )
  {
    v4 = (int *)((char *)off_103DCD74 + 16 * (v3 & 0xFFF) + 4);
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        *(_DWORD *)(v6 + 336) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
      }
    }
  }
  a2[82] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  a3[81] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  sub_1003C5D0(a3);
  return sub_100391C0(this);
}
