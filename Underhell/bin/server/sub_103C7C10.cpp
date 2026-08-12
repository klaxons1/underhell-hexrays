bool __stdcall sub_103C7C10(int *a1, float a2)
{
  double v2; // st7
  bool result; // al

  result = a1
        && !(*(int (__thiscall **)(int *))(*a1 + 1572))(a1)
        && (v2 = (double)(*(int (__thiscall **)(int *))(*a1 + 448))(a1), 0.0 != v2)
        && (double)a1[55] / v2 <= a2;
  return result;
}
