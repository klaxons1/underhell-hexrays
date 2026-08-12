int __thiscall sub_10237A20(int *this)
{
  _DWORD *i; // eax
  _DWORD *v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  int result; // eax
  _DWORD *v7; // esi

  for ( i = sub_1012BC90(&dword_1069E3E0, 0, "vgui_screen"); ; i = sub_1012BC90(&dword_1069E3E0, (int)v3, "vgui_screen") )
  {
    v3 = i;
    if ( i )
    {
      v4 = i[103];
      if ( v4 == -1 || off_1061BE18[4 * (v3[103] & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (v3[103] & 0xFFF) + 1];
      if ( (int *)v5 != this )
        continue;
    }
    result = strcmp((const char *)sub_102717A0(v3), "slideshow_display_screen");
    if ( !result )
      break;
  }
  if ( v3 )
  {
    v7 = (_DWORD *)(this[282] + 4 * sub_102373F0(this + 282, this[285]));
    *v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
    return sub_10271A40(1);
  }
  return result;
}
