bool __thiscall sub_10336A60(int this)
{
  bool result; // al
  int v3; // edi
  double v4; // st7

  result = sub_100296A0((_DWORD *)this)
        && *(float *)(this + 5708) <= (double)*(float *)(dword_106B31C8 + 12)
        && (v3 = *(_DWORD *)(this + 220), v3 < (*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this))
        && (*(_DWORD *)(dword_106B31C8 + 20) != 1
         || (v4 = (double)*(int *)(sub_10261B20() + 220), (double)*(int *)(sub_10261B20() + 220) * 0.75 < v4))
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296))(this) == 0;
  return result;
}
