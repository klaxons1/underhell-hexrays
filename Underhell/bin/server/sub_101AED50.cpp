int __thiscall sub_101AED50(int this, float a2)
{
  double v3; // st5
  double v4; // st7
  double v5; // st7
  double v6; // st6

  if ( !*(_DWORD *)(this + 800) )
    sub_101AECF0(this);
  v3 = *(float *)(this + 860) * a2;
  v4 = *(float *)(this + 864) * a2;
  *(float *)(this + 832) = *(float *)(this + 856) * a2;
  *(float *)(this + 836) = v3;
  *(float *)(this + 840) = v4;
  v5 = a2 * *(float *)(this + 876);
  v6 = *(float *)(this + 872) * a2;
  *(float *)(this + 844) = *(float *)(this + 868) * a2;
  *(float *)(this + 848) = v6;
  *(float *)(this + 852) = v5;
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 28))(*(_DWORD *)(this + 800));
}
