int __thiscall sub_102C8E50(float *this)
{
  double v1; // st7
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v1 = 1.0 / this[201];
  v4 = 0.5 * v1;
  v3 = v1 * 0.25;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           LODWORD(v3),
           LODWORD(v4));
}
