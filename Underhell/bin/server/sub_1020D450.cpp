char __thiscall sub_1020D450(int *this, int a2, int (__thiscall ***a3)(_DWORD))
{
  int *v4; // edi
  int *v5; // ebx
  double v6; // st7
  float v8; // [esp+8h] [ebp-68h]
  int v9[20]; // [esp+20h] [ebp-50h] BYREF

  v4 = this + 55;
  if ( this[55] == a2 )
    return 1;
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
  v8 = v6;
  sub_10108AE0(this + 288, SLOBYTE(v8), (int)a3, (int)this);
  if ( *v4 > 0 )
    return 1;
  sub_10247EC0(v9);
  v9[11] = *(_DWORD *)(*(int (__thiscall **)(int *))(*this + 8))(this);
  sub_1020BA60((unsigned int)this, a3, (int)v9);
  return 0;
}
