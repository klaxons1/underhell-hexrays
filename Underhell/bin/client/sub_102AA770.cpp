int __thiscall sub_102AA770(_BYTE *this, _BYTE *Src)
{
  int v3; // edi
  _BYTE v5[12]; // [esp+8h] [ebp-Ch] BYREF

  sub_102AA630((int)this);
  sub_102AB7B0(Src);
  Src = v5;
  v3 = sub_102AA510(this, (int)&Src);
  sub_102AD190(v5);
  if ( v3 < 0 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)this + 4 * v3);
}
