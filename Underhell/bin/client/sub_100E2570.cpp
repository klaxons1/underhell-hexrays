_WORD *__thiscall sub_100E2570(_WORD *this, int a2)
{
  *(_DWORD *)this = &CNightVisionEffect::`vftable';
  unknown_libname_2(this + 12);
  this[6] = -1;
  *((_DWORD *)this + 2) = a2;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) < 70 )
    sub_10229140(&unk_10435108, 0);
  sub_102333B0("effects/nightvision001", "Other textures", 1);
  return this;
}
