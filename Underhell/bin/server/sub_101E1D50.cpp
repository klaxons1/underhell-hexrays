int __thiscall sub_101E1D50(float *this, float a2, int a3)
{
  int result; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // eax
  int (__thiscall *v8)(int, _DWORD, _DWORD); // edx
  int v9; // eax
  int (__thiscall *v10)(int, _DWORD, _DWORD); // edx
  float v11[3]; // [esp+2Ch] [ebp-14h] BYREF
  float v12; // [esp+38h] [ebp-8h]
  float v13; // [esp+3Ch] [ebp-4h]

  result = a3;
  if ( (a3 & 1) != 0 )
  {
    a3 = -2147483520;
    return sub_102600B0((int)this, (int)&a3, 1.0, 0.1, 1);
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    a3 = -2139095040;
    return sub_102600B0((int)this, (int)&a3, 1.0, 0.1, 1);
  }
  else if ( (a3 & 4) != 0 )
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, v11);
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 276))(this);
    return sub_100E84B0(*v5, v5[1], v5[2], (int)&flt_106B4F40, v6, a2);
  }
  else if ( (a3 & 0x1000000) != 0 )
  {
    a3 = 1694433280;
    sub_102600B0((int)this, (int)&a3, 0.2, 0.40000001, 4);
    v7 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 0);
    v8 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8);
    v13 = (float)v7;
    v9 = v8(dword_106B31E4, 0, 0);
    v10 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8);
    v12 = (float)v9;
    v11[0] = v13;
    v11[1] = v12;
    v11[2] = (float)v10(dword_106B31E4, 0, 0);
    sub_100F7A60(this, v11);
    return sub_1023C380((int)"Player.PlasmaDamage", 0.0, 0);
  }
  else if ( (a3 & 0x200) != 0 )
  {
    return sub_1023C380((int)"Player.SonicDamage", 0.0, 0);
  }
  else if ( (a3 & 2) != 0 )
  {
    return sub_1023C380((int)"Flesh.BulletImpact", 0.0, 0);
  }
  return result;
}
