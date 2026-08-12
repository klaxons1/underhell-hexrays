int __thiscall sub_10167D50(int *this, void *Src, void *a3, int a4)
{
  int v5; // eax
  int result; // eax
  _WORD *i; // ecx
  __int16 v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]

  v8[0] = *(_WORD *)sub_1042F910((int)&Src + 2, Src);
  v8[1] = *(_WORD *)sub_1042F910((int)&Src + 2, a3);
  v9 = a4;
  v5 = sub_1042EE50(v8[0]);
  sub_1042F670(&Src, v5);
  if ( (_WORD)Src == 0xFFFF )
    return sub_10167C70(this + 18, this[21], (int)v8);
  result = this[21] - 1;
  if ( result < 0 )
    return sub_10167C70(this + 18, this[21], (int)v8);
  for ( i = (_WORD *)(this[18] + 12 * result); *i != (_WORD)Src; i -= 6 )
  {
    if ( --result < 0 )
      return sub_10167C70(this + 18, this[21], (int)v8);
  }
  return result;
}
