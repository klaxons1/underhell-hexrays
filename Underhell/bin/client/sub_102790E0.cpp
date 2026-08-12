int __thiscall sub_102790E0(int this, _DWORD *a2)
{
  char v2; // al
  _DWORD *v4; // eax

  v2 = (char)a2;
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_BYTE *)(this + 20) = v2;
  v4 = (_DWORD *)sub_100DDA40(4);
  if ( v4 )
  {
    *v4 = &BlankImage::`vftable';
    a2 = v4;
  }
  else
  {
    a2 = 0;
  }
  sub_10258C50((int *)this, *(_DWORD *)(this + 12), &a2);
  return this;
}
