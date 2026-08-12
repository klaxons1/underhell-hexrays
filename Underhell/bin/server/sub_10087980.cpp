int __thiscall sub_10087980(_BYTE *this, int Src)
{
  int result; // eax

  result = sub_1042D470(4);
  if ( (_BYTE)result )
  {
    if ( (this[44] & 1) != 0 )
      sub_100868D0(this + 44, (int *)(*(_DWORD *)this + *((_DWORD *)this + 4) - *((_DWORD *)this + 8)), (char *)&Src, 1);
    else
      *(_DWORD *)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8) + *(_DWORD *)this) = Src;
    *((_DWORD *)this + 4) += 4;
    return sub_1042D4C0(this);
  }
  return result;
}
