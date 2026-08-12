char __thiscall sub_100B8200(float *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  float *v5; // eax
  int v6; // eax

  v2 = *((_DWORD *)this + 912);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v6 = sub_100B5D00(this, v4, v5, 0.0, 0, 0);
  this[912] = NAN;
  return sub_100B8130(this, v6);
}
