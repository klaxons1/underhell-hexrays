void __thiscall sub_10253800(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // edi

  if ( a2 == 107 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 400))(this, 107);
    (*(void (__thiscall **)(_DWORD *))(*this + 812))(this);
    v3 = this[70];
    (*(void (__thiscall **)(_DWORD *))(*this + 808))(this);
    v4 = this[70];
    if ( v4 > 0 )
    {
      if ( iswspace(*(_WORD *)(this[55] + 2 * v4 - 2)) )
      {
        --v4;
        --this[70];
      }
      this[78] = v3;
      this[79] = v4;
      *((_BYTE *)this + 295) = 1;
    }
  }
}
