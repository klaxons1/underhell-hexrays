char __thiscall sub_1005FBB0(char *this, int a2, int a3, int a4)
{
  __int16 v4; // ax

  v4 = *((_WORD *)this + 194);
  if ( (v4 & 4) != 0 && (v4 & 2) != 0 && (this[388] & 1) != 0 )
    return sub_1005FAE0(this, a2, a3, a4);
  else
    return sub_10029630(this, a2, a3, a4);
}
