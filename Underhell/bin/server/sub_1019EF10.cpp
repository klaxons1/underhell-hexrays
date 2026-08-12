int __thiscall sub_1019EF10(_DWORD *this)
{
  int i; // esi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int result; // eax

  for ( i = this[303]; i != -1; i = *(_DWORD *)(v4 + this[300] + 8) )
  {
    v3 = this[300];
    v4 = 12 * i;
    v5 = *(_DWORD *)(v4 + v3);
    if ( v5 )
    {
      sub_1019CD00(*(void **)(v4 + v3));
      sub_10184660(v5);
    }
  }
  sub_1018EC70(this + 300);
  result = 0;
  this[295] = 0;
  this[293] = 0;
  return result;
}
