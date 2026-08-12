int __thiscall sub_10428080(int *this, void *Src)
{
  int v3; // edi
  int v4; // ecx

  sub_1042F910((int)&Src, Src);
  v3 = (unsigned __int16)Src;
  v4 = this[3];
  if ( v4 <= (unsigned __int16)Src && v4 < (unsigned __int16)Src + 1 )
    sub_104279A0(this, v4, (unsigned __int16)Src + 1 - v4, 0);
  return *this + 4 * v3;
}
