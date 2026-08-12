int __thiscall sub_1005EEF0(int this)
{
  sub_1005E590((_DWORD *)this);
  *(float *)(this + 48) = 3.4028235e38;
  *(float *)(this + 52) = 3.4028235e38;
  *(float *)(this + 56) = 3.4028235e38;
  *(float *)(*(_DWORD *)(this + 4) + 2896) = *(float *)(this + 108);
  sub_100B8BE0(*(_DWORD *)(this + 160), *(_DWORD *)(this + 164));
  return sub_100B8C00(*(float *)(this + 168), *(float *)(this + 172));
}
