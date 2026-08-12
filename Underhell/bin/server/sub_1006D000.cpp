int __thiscall sub_1006D000(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax

  v3 = 32 * a2;
  result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 32 * a2 + 16));
  if ( a2 != -1 )
  {
    sub_1006CBB0(this, a2);
    result = this[1];
    *(_DWORD *)(v3 + result) = a2;
    *(_DWORD *)(this[1] + v3 + 4) = this[6];
    --this[5];
    this[6] = a2;
  }
  return result;
}
