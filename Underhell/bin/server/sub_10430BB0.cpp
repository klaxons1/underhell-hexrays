int __thiscall sub_10430BB0(int this, char a2)
{
  unsigned __int16 v3; // ax
  int v4; // ebx

  v3 = sub_10430440((_WORD *)this, (int)&a2);
  v4 = v3;
  if ( v3 >= *(int *)(this + 8) || v3 > *(_WORD *)(this + 22) || sub_10162D10((_DWORD *)this, v3) == v3 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v4 + 8);
}
