void __thiscall sub_101A06D0(_DWORD *this)
{
  float *v2; // eax
  float *v3; // ecx

  if ( this[299] )
  {
    v2 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 3) + 36))(this - 3);
    v3 = (float *)this[299];
    v3[1] = *v2;
    v3[2] = v2[1];
    v3[3] = v2[2];
    *(float *)(this[299] + 16) = 150.0;
  }
}
