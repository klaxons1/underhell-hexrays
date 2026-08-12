int __thiscall sub_102780E0(_DWORD *this, int a2, const char *Src, int a4, int a5)
{
  int result; // eax
  int v7; // edi
  __int16 v8; // ax
  int v9; // edx

  result = a2;
  if ( a2 >= 0 && a2 < this[56] )
  {
    v7 = this[53] + 20 * a2;
    sub_10231140(&a2, Src);
    v8 = a2;
    v9 = a5;
    *(_DWORD *)(v7 + 4) = a4;
    *(_DWORD *)(v7 + 16) = v9;
    *(_WORD *)v7 = v8;
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
