_DWORD *__thiscall sub_10148150(_DWORD *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = this + 39;
  *v3 = &CRendering3dView::`vftable';
  sub_10143830(v3);
  *this = &CRendering3dView::`vftable';
  sub_10143830(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
