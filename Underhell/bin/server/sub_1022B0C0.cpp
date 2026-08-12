int __thiscall sub_1022B0C0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))this[381];
  *this = &CSceneEntity::`vftable';
  this[200] = &CSceneEntity::`vftable';
  if ( v2 )
    (**v2)(v2, 1);
  this[381] = 0;
  sub_102375F0(this + 370);
  sub_102375F0(this + 365);
  sub_1010BB10(this + 355);
  sub_1010BB10(this + 349);
  sub_1010BB10(this + 343);
  sub_1010BB10(this + 337);
  sub_1010BB10(this + 331);
  sub_1010BB10(this + 325);
  sub_1010BB10(this + 319);
  sub_1010BB10(this + 313);
  sub_1010BB10(this + 307);
  sub_1010BB10(this + 301);
  sub_1010BB10(this + 295);
  sub_1010BB10(this + 289);
  sub_1010BB10(this + 283);
  sub_1010BB10(this + 277);
  sub_1010BB10(this + 271);
  sub_1010BB10(this + 265);
  sub_1010BB10(this + 259);
  sub_1010BB10(this + 253);
  sub_1010BB10(this + 247);
  sub_102375F0(this + 238);
  sub_102375F0(this + 233);
  return sub_100DF1D0(this);
}
