int __thiscall sub_10067720(_WORD *this, void *Src)
{
  __int16 v4; // [esp+4h] [ebp-48h] BYREF
  char v5; // [esp+6h] [ebp-46h]
  float v6; // [esp+48h] [ebp-4h]

  v6 = 0.0;
  v5 = 0;
  sub_1042FB30(Src);
  v4 = HIWORD(Src);
  return sub_10066560(this, (int)&v4);
}
