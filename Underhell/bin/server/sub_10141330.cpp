void __thiscall sub_10141330(float *this)
{
  float v2; // [esp+10h] [ebp-4h]
  float v3; // [esp+10h] [ebp-4h]

  v2 = RandomFloat(5.0, 15.0);
  this[310] = sub_10264FF0(this + 309) + v2;
  this[309] = v2;
  v3 = RandomFloat(10.0, 20.0);
  this[308] = sub_10264FF0(this + 307) + v3;
  this[307] = v3;
  this[298] = this[300];
}
