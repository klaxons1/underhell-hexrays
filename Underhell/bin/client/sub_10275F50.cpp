int __thiscall sub_10275F50(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int (__thiscall *v5)(_DWORD *); // eax

  v2 = 0;
  if ( (int)this[54] > 0 )
  {
    v3 = 0;
    do
    {
      if ( v2 >= 0 && v2 < this[54] && v2 <= this[60] )
      {
        v4 = v3 + this[53];
        if ( *(_DWORD *)(v4 + 4) != v2 || *(_DWORD *)(v4 + 8) == v2 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + this[53]) + 300))(*(_DWORD *)(v3 + this[53]));
      }
      ++v2;
      v3 += 12;
    }
    while ( v2 < this[54] );
  }
  sub_1026C690(this + 53);
  v5 = *(int (__thiscall **)(_DWORD *))(*this + 816);
  this[66] = 0;
  return v5(this);
}
