int __thiscall sub_100EA240(int *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // edi
  int result; // eax

  v3 = *this;
  v4 = *(_DWORD *)(*this + 24 * a2 + 20);
  v5 = 24 * a2 + v3;
  if ( v4 )
    sub_100F1860(v4);
  sub_1011A810(v5);
  result = this[3] - a2 - 1;
  if ( result > 0 )
    result = (int)memcpy((void *)(24 * a2 + *this), (const void *)(24 * a2 + *this + 24), 24 * result);
  --this[3];
  return result;
}
