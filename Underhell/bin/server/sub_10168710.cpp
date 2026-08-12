unsigned int __thiscall sub_10168710(int this, int a2)
{
  unsigned int result; // eax
  _BYTE *v4; // esi

  if ( !*(_BYTE *)(this + 916) )
    return sub_10168630((int *)this);
  sub_100DD660(this, &flt_106F1CA8);
  result = sub_100D8290((float *)this, -1.0);
  v4 = (_BYTE *)(this + 225);
  if ( *v4 )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 225) + 480))(v4 - 225, v4);
    *v4 = 0;
  }
  return result;
}
