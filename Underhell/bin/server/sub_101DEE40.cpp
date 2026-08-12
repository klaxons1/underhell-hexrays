void __thiscall sub_101DEE40(char *this)
{
  int v2; // edx
  _BYTE *v3; // esi

  sub_1020CF10((int)this);
  sub_100E0970((int)this, v2, 6, 0);
  sub_10112C00((int)(this + 320), 6);
  v3 = this + 225;
  if ( *v3 != 1 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v3 - 225) + 480))(v3 - 225, v3);
    *v3 = 1;
  }
}
