_BYTE *__thiscall sub_1044A8B0(int *this, _BYTE *Src)
{
  void *v3; // ebx
  int v4; // edi
  _BYTE *v6; // edi
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  sub_1044A390((int)this);
  v3 = Src;
  sub_1044AA40(Src);
  Src = v8;
  v4 = sub_1044A270(this, (int)&Src);
  sub_1044C6E0(v8);
  if ( v4 >= 0 )
    return *(_BYTE **)(*this + 4 * v4);
  ++*((_BYTE *)this + 46);
  *((_BYTE *)this + 47) |= 1u;
  if ( sub_104498A0(12) )
    v6 = (_BYTE *)sub_1044AA40(v3);
  else
    v6 = 0;
  Src = v6;
  sub_1044A320(this, &Src);
  if ( (*((_BYTE *)this + 46))-- == 1 )
    sub_1044A390((int)this);
  return v6;
}
