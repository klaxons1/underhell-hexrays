char __thiscall sub_100B8130(float *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  float *v7; // eax
  int v8; // edi
  bool v9; // zf

  v3 = *((_DWORD *)this + 912);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  LOBYTE(v6) = sub_100B5320(a2, v5);
  if ( !(_BYTE)v6 )
  {
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v8 = sub_100B5D00(this, a2, v7, 0.0, 0, 0);
    v6 = sub_101ACC70(v8, 1);
    if ( v6 )
    {
      LOBYTE(v6) = sub_100B7E60((int)this, v8);
      if ( v8 )
      {
        v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
        *((_DWORD *)this + 912) = v6;
      }
      else
      {
        this[912] = NAN;
      }
      v9 = *((_BYTE *)this + 3695) == 0;
      *((_BYTE *)this + 3732) = 1;
      if ( !v9 && !*((_BYTE *)this + 3692) )
        *((_BYTE *)this + 3692) = 1;
    }
  }
  return v6;
}
