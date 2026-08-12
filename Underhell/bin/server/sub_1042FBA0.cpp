int __thiscall sub_1042FBA0(int this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  int result; // eax

  v2 = *(_DWORD **)(this + 16);
  v3 = (_DWORD *)(this + 12);
  if ( v2 != (_DWORD *)(this + 12) )
  {
    do
    {
      v4 = (_DWORD *)v2[1];
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
      v2 = v4;
    }
    while ( v4 != v3 );
  }
  result = 0;
  *(_DWORD *)(this + 16) = v3;
  *v3 = v3;
  *(_WORD *)(this + 42) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 28) = 0;
  return result;
}
