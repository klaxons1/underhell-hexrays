_WORD *__thiscall sub_1009D260(_WORD *this, int a2)
{
  *(_DWORD *)this = &CFlashlightEffect::`vftable';
  unknown_libname_2(this + 12);
  this[6] = -1;
  *((_DWORD *)this + 2) = a2;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) < 70 )
    sub_10229140(&unk_1042D848, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 268))(dword_1047C97C) )
    sub_102333B0("effects/flashlight_border", "Other textures", 1);
  else
    sub_102333B0("effects/flashlight001", "Other textures", 1);
  return this;
}
