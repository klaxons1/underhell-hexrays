int __thiscall sub_102AE750(int *this, const char *Src)
{
  char *v3; // eax
  char *v4; // ebx
  int v5; // edi

  v3 = (char *)sub_102AAF30(48);
  if ( v3 )
    v4 = sub_102AA9A0(v3, Src);
  else
    v4 = 0;
  v5 = sub_102AE4C0(this, this[3]);
  *(_DWORD *)(20 * v5 + *this) = v4;
  sub_10232FB0((_DWORD *)(20 * v5 + *this + 4));
  return v5;
}
