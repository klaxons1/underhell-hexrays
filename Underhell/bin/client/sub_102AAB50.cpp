_BYTE *__thiscall sub_102AAB50(int *this, _BYTE *Src)
{
  void *v3; // ebx
  int v4; // edi
  _BYTE *v6; // edi
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  sub_102AA630((int)this);
  v3 = Src;
  sub_102AB7B0(Src);
  Src = v8;
  v4 = sub_102AA510(this, (int)&Src);
  sub_102AD190(v8);
  if ( v4 >= 0 )
    return *(_BYTE **)(*this + 4 * v4);
  ++*((_BYTE *)this + 46);
  *((_BYTE *)this + 47) |= 1u;
  if ( sub_102AAF30(12) )
    v6 = (_BYTE *)sub_102AB7B0(v3);
  else
    v6 = 0;
  Src = v6;
  sub_102AA5C0(this, &Src);
  if ( (*((_BYTE *)this + 46))-- == 1 )
    sub_102AA630((int)this);
  return v6;
}
