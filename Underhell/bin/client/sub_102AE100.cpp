int __thiscall sub_102AE100(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // esi
  _DWORD *v7; // esi
  int v8; // [esp+4h] [ebp-4h]

  result = this[8];
  if ( result > 0 )
  {
    v3 = 0;
    v8 = this[8];
    do
    {
      v4 = sub_102AE0B0(this, (_DWORD *)(v3 + this[5] + 8));
      if ( v4 == -1 )
        v5 = 0;
      else
        v5 = *(_DWORD *)(*this + 20 * v4);
      v6 = *(_DWORD **)(v3 + this[5]);
      result = sub_102AD1A0(v6, 1);
      v7 = (_DWORD *)v6[2];
      if ( v7 )
        *v7 = v5;
      v3 += 24;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
