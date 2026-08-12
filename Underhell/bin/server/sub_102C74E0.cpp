int __thiscall sub_102C74E0(float *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int (__thiscall *v5)(float *); // edx

  v3 = sub_100BDF40((int)this, "idle");
  sub_100C3330((int)this, v3);
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v4 = *(_DWORD *)(a2 + 8);
  else
    v4 = 0;
  *((_DWORD *)this + 282) = v4;
  *((_DWORD *)this + 287) = v4;
  v5 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 728);
  this[318] = (float)v4;
  return v5(this);
}
