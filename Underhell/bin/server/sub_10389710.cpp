int __thiscall sub_10389710(_DWORD **this)
{
  int v2; // ebx
  _DWORD *i; // esi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  for ( i = (_DWORD *)sub_100B1560(this[699], &v5, 1); i; i = (_DWORD *)sub_100B1630(this[699], &v5, 1) )
  {
    if ( sub_100697A0(i, 109, 1) || sub_100697A0(i, 108, 1) )
      ++v2;
  }
  return v2;
}
