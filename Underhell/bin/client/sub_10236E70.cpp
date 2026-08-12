void __thiscall sub_10236E70(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
  {
    v3 = sub_10229D20(v2, (int)"OnMouseFocusTicked");
    sub_10236860(this, v3);
  }
  else
  {
    sub_10236860(this, 0);
  }
}
