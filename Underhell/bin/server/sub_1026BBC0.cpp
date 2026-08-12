void __thiscall sub_1026BBC0(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  if ( this[4] && !*((_BYTE *)this + 104) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 244))(this);
    *((_BYTE *)this + 104) = 1;
  }
  for ( i = 0; i < this[4]; ++i )
  {
    v3 = sub_1026BAD0(this, *(char **)(this[1] + v2 + 8));
    v4 = v3;
    if ( v3 >= 0 && v3 < this[9] )
    {
      *(_DWORD *)(v2 + this[1]) = v3;
      v5 = sub_1026BB30(this, v3, *(char **)(this[1] + v2 + 12));
      if ( v5 >= 0 && v5 < *(_DWORD *)(this[6] + 24 * v4 + 16) )
        *(_DWORD *)(this[1] + v2 + 4) = v5;
    }
    v2 += 20;
  }
}
