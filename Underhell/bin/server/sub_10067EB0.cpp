__int16 __thiscall sub_10067EB0(int this, void *Src)
{
  int v3; // eax
  __int16 v4; // di
  __int16 v6; // [esp+4h] [ebp-48h] BYREF
  char v7; // [esp+6h] [ebp-46h]
  float v8; // [esp+48h] [ebp-4h]

  v8 = 0.0;
  v7 = 0;
  sub_1042FB30(Src);
  v6 = HIWORD(Src);
  LOWORD(v3) = sub_10066560((_WORD *)this, (int)&v6);
  v4 = v3;
  if ( (__int16)v3 != -1 && (_WORD)v3 != 0xFFFF )
  {
    sub_10067940(this, v3);
    v3 = 10 * v4;
    *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v3) = v4;
    *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v3 + 2) = *(_WORD *)(this + 20);
    --*(_WORD *)(this + 18);
    *(_WORD *)(this + 20) = v4;
  }
  return v3;
}
