int __thiscall sub_10016990(int this, int a2, int a3, _DWORD *a4)
{
  int result; // eax
  bool v5; // zf

  result = this;
  *(_DWORD *)(this + 164) = a2;
  qmemcpy((void *)this, a4, 0xA4u);
  *(_DWORD *)(this + 172) = a3;
  *(_DWORD *)(this + 80) = *(_DWORD *)(this + 80) != 0 ? 2 : 0;
  v5 = *(_DWORD *)(this + 232) == -1;
  *(_DWORD *)(this + 176) = 0;
  *(_BYTE *)(this + 168) = 0;
  if ( v5 )
  {
    *(_DWORD *)(this + 228) = 0;
    *(_DWORD *)(this + 232) = a4[40];
    *(_DWORD *)(this + 236) = a4[39];
  }
  return result;
}
