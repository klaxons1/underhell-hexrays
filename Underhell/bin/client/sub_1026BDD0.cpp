void __thiscall sub_1026BDD0(_DWORD *this)
{
  int i; // ebp
  int v3; // edi

  for ( i = this[3] - 1; i >= 0; --i )
  {
    v3 = sub_10237C80((_DWORD *)(4 * i + *this));
    if ( v3 )
    {
      if ( this[3] - i - 1 > 0 )
        memcpy((void *)(*this + 4 * i), (const void *)(*this + 4 * i + 4), 4 * (this[3] - i - 1));
      --this[3];
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 124))(v3, 0);
    }
  }
  this[3] = 0;
}
