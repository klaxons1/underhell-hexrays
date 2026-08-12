void __thiscall sub_10087860(_DWORD *this, char *a2)
{
  int v3; // eax

  if ( (unsigned __int8)sub_1042D170(2) )
  {
    v3 = this[3] - this[8];
    if ( (this[11] & 1) != 0 )
      sub_10086860((_BYTE *)this + 44, a2, (char *)(*this + v3), 1);
    else
      *(_WORD *)a2 = *(_WORD *)(v3 + *this);
    this[3] += 2;
  }
  else
  {
    *(_WORD *)a2 = 0;
  }
}
