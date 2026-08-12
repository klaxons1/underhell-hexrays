BOOL __thiscall sub_102AA720(_BYTE *this, _BYTE *Src)
{
  int v3; // esi
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  sub_102AA630((int)this);
  sub_102AB7B0(Src);
  Src = v5;
  v3 = sub_102AA510(this, (int)&Src);
  sub_102AD190(v5);
  return v3 >= 0;
}
