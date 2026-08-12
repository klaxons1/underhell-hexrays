bool __thiscall sub_1039DE40(void *this, int a2, char a3)
{
  float *v4; // esi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  bool result; // al

  result = ((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, a2) != 2
         || (v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2),
             v5 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this),
             v6 = *v5 - *v4,
             v7 = v5[1] - v4[1],
             v8 = v5[2] - v4[2],
             v8 * v8 + v7 * v7 + v6 * v6 <= 90000.0))
        && sub_1001FBD0(this, a2, a3);
  return result;
}
