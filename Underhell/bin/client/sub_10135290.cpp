_DWORD *__thiscall sub_10135290(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = dword_1047CA7C;
  v4 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         2,
         "resource/SlideshowDisplayScreen.res",
         "SlideshowDisplayScreen");
  v7 = (*(int (__thiscall **)(int, int))(v4 + 48))(v3, v6);
  sub_100713C0(this, a2, "CSlideshowDisplayScreen", v7);
  *this = &CSlideshowDisplayScreen::`vftable';
  this[65] = 0;
  this[66] = 0;
  this[67] = 0;
  this[68] = 0;
  this[69] = 0;
  this[71] = 0;
  this[72] = 0;
  if ( sub_100DDA40(284) )
    v8 = sub_1024B100((int)this, "NumberDisplay", (int)"x");
  else
    v8 = 0;
  this[70] = 0;
  this[64] = v8;
  return this;
}
