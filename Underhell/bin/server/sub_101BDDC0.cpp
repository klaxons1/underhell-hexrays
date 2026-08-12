float *__thiscall sub_101BDDC0(int *this, float *a2, float *a3)
{
  int v4; // esi
  int v5; // eax
  double v6; // st6
  double v7; // st7
  _BYTE v9[48]; // [esp+8h] [ebp-30h] BYREF

  v4 = *this;
  v5 = sub_100BEF30((int)this, "nozzle");
  (*(void (__thiscall **)(int *, int, _BYTE *))(v4 + 796))(this, v5, v9);
  sub_10421CE0(v9, 2, a2);
  sub_10421CE0(v9, 3, this + 527);
  v6 = -5.0 * a2[2] + a3[2];
  v7 = a2[1] * -5.0 + a3[1];
  *a2 = *a2 * -5.0 + *a3;
  a2[1] = v7;
  a2[2] = v6;
  off_10689714();
  return a2;
}
