int __thiscall sub_1020D3D0(_DWORD *this, int a2)
{
  int v3; // esi
  unsigned int v4; // eax
  int (__thiscall ***v5)(_DWORD); // eax

  v3 = this[106];
  if ( v3 && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 40))(this[106]) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, 1);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 600))(this, a2);
  }
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = (int (__thiscall ***)(_DWORD))off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  sub_1020BA60((unsigned int)this, v5, a2);
  return sub_100DC8D0(this, a2);
}
