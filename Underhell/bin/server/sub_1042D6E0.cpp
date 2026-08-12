void __thiscall sub_1042D6E0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  if ( (*((_BYTE *)this + 21) & 1) != 0 && !*((_BYTE *)this + 20) )
  {
    while ( (this[5] & 2) == 0 )
    {
      v2 = this[3];
      if ( this[7] < v2 + 1
        || ((v3 = this[8], v2 < v3) || this[1] < v2 - v3 + 1)
        && !((unsigned __int8 (__thiscall *)(_DWORD *, int))this[9])(this, 1) )
      {
        *((_BYTE *)this + 20) |= 2u;
        return;
      }
      if ( !isspace(*(unsigned __int8 *)(*this + this[3] - this[8])) )
        return;
      ++this[3];
    }
  }
}
