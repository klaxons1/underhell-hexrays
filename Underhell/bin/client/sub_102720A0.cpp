int *__thiscall sub_102720A0(_DWORD *this, _DWORD *a2)
{
  int *result; // eax
  const char *v4; // esi

  sub_1023B220(this, a2);
  sub_1022ACA0(a2, "src_corner_height", this[52]);
  sub_1022ACA0(a2, "src_corner_width", this[53]);
  sub_1022ACA0(a2, "draw_corner_height", this[54]);
  result = sub_1022ACA0(a2, "draw_corner_width", this[55]);
  v4 = (const char *)this[59];
  if ( v4 )
    return sub_1022ABA0(a2, "image", v4);
  return result;
}
