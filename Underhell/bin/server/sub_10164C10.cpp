void __thiscall sub_10164C10(int *this, int a2, int a3)
{
  int v4; // edi
  int i; // edi
  int v6; // ecx

  v4 = this[906];
  this[906] = 0;
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
    sub_1004AF00(this);
    (*(void (__thiscall **)(int *, int, _DWORD))(*this + 2224))(this, v4, 0);
  }
  for ( i = 0; i < this[910]; ++i )
  {
    v6 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 84))(v6, a2, a3);
  }
  sub_1002A690(this, a2, a3);
}
