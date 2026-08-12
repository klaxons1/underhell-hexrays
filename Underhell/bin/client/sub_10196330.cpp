void __thiscall sub_10196330(float *this, int a2)
{
  float *v3; // eax

  sub_1002B830((int)this, a2);
  if ( !a2 )
  {
    v3 = (float *)(*(int (__thiscall **)(float *))(*((_DWORD *)this - 2) + 36))(this - 2);
    this[488] = *v3;
    this[489] = v3[1];
    this[490] = v3[2];
    (*(void (__thiscall **)(float *))(*((_DWORD *)this - 2) + 744))(this - 2);
  }
}
