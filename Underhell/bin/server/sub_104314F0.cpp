int __thiscall sub_104314F0(_DWORD *this, unsigned __int16 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edi

  (*(void (__thiscall **)(_DWORD *))*this)(this);
  v5 = 12 * a2;
  *(_DWORD *)(this[3] + v5 + 4) = a3;
  this[2] += a4;
  v6 = *(unsigned __int16 *)(this[3] + v5 + 2) << 16;
  (*(void (__thiscall **)(_DWORD *))(*this + 8))(this);
  return v6 | (unsigned __int16)(a2 + 1);
}
