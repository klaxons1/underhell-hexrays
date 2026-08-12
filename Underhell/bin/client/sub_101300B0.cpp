_DWORD *__thiscall sub_101300B0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = this[51];
  *this = &CBitmapPanel::`vftable';
  if ( v3 && *((_BYTE *)this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, 1);
    this[51] = 0;
  }
  sub_10240430(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
