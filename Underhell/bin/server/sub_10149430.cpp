char __thiscall sub_10149430(int *this, int a2, int a3)
{
  int *v4; // edi
  int *v5; // ebx
  double v6; // st7
  _BYTE *v8; // esi
  _BYTE *v9; // esi
  float v10; // [esp+8h] [ebp-18h]

  v4 = this + 55;
  if ( this[55] != a2 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
    *v4 = a2;
    v5 = this + 54;
    if ( !this[54] && *v5 != 1 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 456))(this, this + 54);
      *v5 = 1;
    }
    v6 = (double)*v4 / (double)*v5;
    if ( v6 <= 1.0 )
    {
      if ( v6 < 0.0 )
        v6 = 0.0;
    }
    else
    {
      v6 = 1.0;
    }
    v10 = v6;
    sub_10108AE0(this + 224, SLOBYTE(v10), a3, (int)this);
    if ( *v4 <= 0 )
    {
      sub_10148C80((float *)this, a3);
      return 0;
    }
    if ( (this[62] & 1) != 0 )
    {
      v8 = (char *)this + 225;
      if ( *v8 )
      {
        (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v8 - 225) + 480))(v8 - 225, v8);
        *v8 = 0;
        return 1;
      }
    }
    else
    {
      v9 = (char *)this + 225;
      if ( *v9 != 2 )
      {
        (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v9 - 225) + 480))(v9 - 225, v9);
        *v9 = 2;
      }
    }
  }
  return 1;
}
