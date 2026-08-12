int __thiscall sub_104281D0(int *this, void *Src)
{
  void *v2; // ebx
  int v4; // edi
  int v5; // ecx

  v2 = Src;
  if ( *(_WORD *)sub_1042F670(&Src, Src) == 0xFFFF )
    return 0;
  sub_1042F910((int)&Src, v2);
  v4 = (unsigned __int16)Src;
  v5 = this[3];
  if ( v5 <= (unsigned __int16)Src && v5 < (unsigned __int16)Src + 1 )
    sub_104279A0(this, v5, (unsigned __int16)Src + 1 - v5, 0);
  return *(_DWORD *)(*this + 4 * v4);
}
