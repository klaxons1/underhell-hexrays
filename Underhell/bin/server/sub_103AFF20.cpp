float *__thiscall sub_103AFF20(float *this)
{
  float v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v3[0] = 0.0;
  v3[1] = 0.0;
  v3[2] = sub_100BE820((int)this, dword_106EAD9C) - 500.0 + flt_106EAD48;
  sub_100DC4E0(this, v3);
  return this + 186;
}
