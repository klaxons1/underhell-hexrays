void __thiscall sub_10016B00(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax

  if ( *((_BYTE *)this + 12) )
  {
    v4 = a3;
    if ( this[5] - this[8] < a3 )
      v4 = this[5] - this[8];
    if ( v4 )
    {
      v5 = *this + 2 * this[8];
      switch ( a2 )
      {
        case 0:
        case 8:
          break;
        case 4:
          sub_10233870(v5, v4, this[7]);
          break;
        case 5:
          sub_102338B0(v5, v4, this[7]);
          break;
        case 6:
          sub_10233810(v5, v4, this[7]);
          break;
        case 7:
          sub_102337B0(v5, v4, this[7]);
          break;
        default:
          sub_10233770(v5, v4, this[7]);
          break;
      }
      this[8] += v4 * *((unsigned __int8 *)this + 12);
      v6 = this[8];
      if ( v6 > this[6] )
        this[6] = v6;
    }
  }
}
