int __thiscall sub_10078410(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int result; // eax

  v2 = sub_1007DE30(*(_DWORD *)(this[1] + 2588));
  v3 = (_DWORD *)this[1];
  if ( v2 <= 0 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 1416))(v3, 1);
  }
  else
  {
    v4 = sub_1007DE30(v3[647]);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 1416))(this[1], v4);
  }
  sub_100EA9A0(1024);
  result = sub_100DD660(&flt_106F1CA8);
  *(float *)(this[1] + 552) = 1.0;
  return result;
}
