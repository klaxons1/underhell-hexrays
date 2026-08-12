BOOL __thiscall sub_1044A480(_BYTE *this, _BYTE *Src)
{
  int v3; // esi
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  sub_1044A390((int)this);
  sub_1044AA40(Src);
  Src = v5;
  v3 = sub_1044A270(this, (int)&Src);
  sub_1044C6E0(v5);
  return v3 >= 0;
}
