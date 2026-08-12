int __thiscall sub_1022FEB0(int this, unsigned int a2, int a3, int a4, const char *a5, int a6)
{
  unsigned __int16 v6; // ax
  int v8; // ecx
  int v9; // ecx
  const char *v10; // eax

  v6 = a6;
  if ( !a6 )
    v6 = 1;
  v8 = a2;
  *(_WORD *)(this + 40) = v6;
  if ( a2 < 4 )
    v8 = 4;
  v9 = ~(v6 - 1) & (v8 + v6 - 1);
  *(_DWORD *)(this + 4) = a3;
  v10 = a5;
  *(_DWORD *)this = v9;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 8) = a4;
  if ( !a5 )
    v10 = "mempool.cpp";
  *(_DWORD *)(this + 44) = v10;
  *(_WORD *)(this + 42) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 12) = this + 12;
  *(_DWORD *)(this + 16) = this + 12;
  sub_1022FD60((_DWORD *)this);
  return this;
}
