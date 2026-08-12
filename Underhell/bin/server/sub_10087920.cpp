int __thiscall sub_10087920(_BYTE *this, __int16 Src)
{
  int result; // eax

  result = sub_1042D470(2);
  if ( (_BYTE)result )
  {
    if ( (this[44] & 1) != 0 )
      sub_10086860(
        this + 44,
        (char *)(*(_DWORD *)this + *((_DWORD *)this + 4) - *((_DWORD *)this + 8)),
        (char *)&Src,
        1);
    else
      *(_WORD *)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8) + *(_DWORD *)this) = Src;
    *((_DWORD *)this + 4) += 2;
    return sub_1042D4C0(this);
  }
  return result;
}
