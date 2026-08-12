char __thiscall sub_10301C40(int this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // esi
  int *v7; // ecx

  *(_DWORD *)(this + 200) = 0;
  v6 = *(_DWORD *)(this + 248) & 0xFFFFFFFD;
  if ( *(_DWORD *)(this + 248) != v6 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 248);
    }
    *(_DWORD *)(this + 248) = v6;
  }
  if ( a3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3) )
    sub_100285C0((_DWORD *)this, a2, 1);
  return sub_100457E0((_DWORD *)this, 96);
}
