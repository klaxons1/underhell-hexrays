int __thiscall sub_10168360(float *this, int a2)
{
  int result; // eax
  _BYTE *v4; // esi

  sub_100DD660((int)this, &flt_106F1CA8);
  result = sub_100D8290(this, -1.0);
  v4 = (char *)this + 225;
  if ( *v4 )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 225) + 480))(v4 - 225, v4);
    *v4 = 0;
  }
  return result;
}
