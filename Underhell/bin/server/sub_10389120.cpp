int __thiscall sub_10389120(int this, float a2)
{
  int v3; // eax
  double v4; // st7
  int v5; // edi

  v3 = sub_100CF460((_DWORD *)this);
  v4 = a2 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 1108))(v3) + 0.5;
  sub_100B8BE0((_WORD *)(this + 2760), (int)v4, (int)v4);
  sub_100B8C00((float *)(this + 2760), 0.69999999, 0.89999998);
  sub_100B8C80((_BYTE *)(this + 2760), 1);
  v5 = sub_100B8D70((unsigned __int16 *)(this + 2760));
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1896))(this);
  return v5;
}
