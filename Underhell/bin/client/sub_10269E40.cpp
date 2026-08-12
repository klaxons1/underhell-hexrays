void __thiscall sub_10269E40(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax

  v2 = a2;
  v4 = this + 53;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v5 = 12 * a2;
    v6 = 12 * a2 + *v4;
    if ( *(_DWORD *)(v6 + 4) != a2 || *(_DWORD *)(v6 + 8) == a2 )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + *v4) + 300))(*(_DWORD *)(v5 + *v4));
      sub_10265FF0(v4, v2);
      *(_DWORD *)(*v4 + v5 + 8) = v4[5];
      v4[5] = v2;
      sub_1012D820(this + 62, &a2);
      sub_1012D820(this + 72, &a2);
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
    }
  }
}
