int __thiscall sub_1042DE40(int this, int a2, int a3, char a4)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = a3;
  *(_DWORD *)(this + 8) = a2;
  if ( a3 )
    *(_DWORD *)this = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, a3);
  *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 44) &= 0xFFFFFFFC;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 21) = a4;
  if ( !a3 || (a4 & 8) != 0 )
  {
    *(_DWORD *)(this + 28) = 0;
  }
  else
  {
    *(_DWORD *)(this + 28) = -1;
    sub_1042D4C0((_DWORD *)this);
  }
  *(_DWORD *)(this + 36) = sub_101722C0;
  *(_DWORD *)(this + 40) = sub_1042DD70;
  return this;
}
