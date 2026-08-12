bool __thiscall sub_102FDD20(int this)
{
  return !sub_100697A0((_DWORD *)this, 92, 1)
      && !sub_100697A0((_DWORD *)this, 91, 1)
      && !sub_100697A0((_DWORD *)this, 93, 1)
      && !sub_100697A0((_DWORD *)this, 104, 1)
      && !sub_100697A0((_DWORD *)this, 101, 1)
      && !sub_1002A570((_DWORD *)this)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296))(this)
      && !sub_100697A0((_DWORD *)this, 99, 1)
      && sub_100223E0((_DWORD *)this) != 1
      && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3656);
}
