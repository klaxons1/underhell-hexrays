int __thiscall sub_100CFFC0(_DWORD *this, unsigned int a2)
{
  int v3; // ebx
  int i; // esi
  int result; // eax

  v3 = this[11];
  for ( i = 0; i < v3; ++i )
    result = sub_100CF6D0(
               (int)this,
               *(_DWORD *)(this[8] + 4 * i),
               a2,
               (_DWORD *)(*(_DWORD *)(this[8] + 4 * i) + 36),
               i == this[13]);
  return result;
}
