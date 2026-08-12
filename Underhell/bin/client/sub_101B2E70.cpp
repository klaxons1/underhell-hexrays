int __thiscall sub_101B2E70(_DWORD *this)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 8))(this);
  this[69] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair");
  this[72] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_right_full");
  this[73] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_left_full");
  this[74] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_right_empty");
  this[75] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_left_empty");
  this[70] = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_right");
  result = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_left");
  this[71] = result;
  return result;
}
