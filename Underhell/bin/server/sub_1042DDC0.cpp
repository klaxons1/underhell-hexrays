char __thiscall sub_1042DDC0(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  v4 = this[4];
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 += a3;
    }
    else if ( a2 == 2 )
    {
      v4 = this[7] - a3;
    }
  }
  else
  {
    v4 = a3;
  }
  LOBYTE(v5) = ((int (__stdcall *)(int))this[10])(-1 - v4);
  this[4] = v4;
  if ( v4 > this[7] )
  {
    if ( (*((_BYTE *)this + 21) & 8) == 0 && (this[5] & 1) == 0 )
    {
      LOBYTE(v5) = sub_1042D470((int)this, 1);
      if ( (_BYTE)v5 )
      {
        v5 = *this - this[8];
        *(_BYTE *)(v5 + this[4]) = 0;
        this[7] = this[4];
        return v5;
      }
      *((_BYTE *)this + 20) &= ~1u;
    }
    this[7] = this[4];
  }
  return v5;
}
