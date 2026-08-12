int __thiscall sub_1044A4D0(_BYTE *this, _BYTE *Src)
{
  int v3; // edi
  _BYTE v5[12]; // [esp+8h] [ebp-Ch] BYREF

  sub_1044A390((int)this);
  sub_1044AA40(Src);
  Src = v5;
  v3 = sub_1044A270(this, (int)&Src);
  sub_1044C6E0(v5);
  if ( v3 < 0 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)this + 4 * v3);
}
