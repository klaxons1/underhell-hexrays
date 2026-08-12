int __thiscall sub_1042F8A0(int this, int a2, int a3, char a4)
{
  int v5; // ecx

  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = a3;
  *(_DWORD *)(this + 12) = a2;
  if ( a3 )
    *(_DWORD *)(this + 4) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 12 * a3);
  v5 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 16) = 0xFFFF;
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 24) = v5;
  *(_BYTE *)(this + 28) = a4;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 44) = 8;
  return this;
}
