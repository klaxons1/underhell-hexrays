void __thiscall sub_10287830(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v2 = a2;
  v3 = this + 52;
  if ( a2 >= 0 && a2 < this[53] && a2 <= this[59] )
  {
    v4 = 16 * a2;
    v5 = 16 * a2 + *v3;
    if ( *(_DWORD *)(v5 + 8) != a2 || *(_DWORD *)(v5 + 12) == a2 )
    {
      v6 = *(_DWORD *)(*v3 + 16 * a2);
      v7 = v4 + *v3;
      if ( v6 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 300))(v6);
      if ( *(_DWORD *)(v7 + 4) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 4) + 300))(*(_DWORD *)(v7 + 4));
      sub_102872F0(v3, v2);
      *(_DWORD *)(*v3 + v4 + 12) = v3[5];
      v3[5] = v2;
      sub_1012D820(this + 61, &a2);
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
    }
  }
}
