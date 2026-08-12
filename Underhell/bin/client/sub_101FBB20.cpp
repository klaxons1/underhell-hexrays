int __thiscall sub_101FBB20(int *this, void *Src)
{
  int v3; // edi
  int v4; // ecx

  sub_10230F20((int)&Src, Src);
  v3 = (unsigned __int16)Src;
  v4 = this[3];
  if ( v4 <= (unsigned __int16)Src && v4 < (unsigned __int16)Src + 1 )
    sub_101FB060(this, v4, (unsigned __int16)Src + 1 - v4, 0);
  return *this + 4 * v3;
}
