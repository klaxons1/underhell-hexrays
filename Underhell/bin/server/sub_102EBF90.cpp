char *__thiscall sub_102EBF90(float *this)
{
  int (*v2)(void); // edx
  float v3; // eax
  float v5[2]; // [esp+Ch] [ebp-Ch] BYREF
  float v6; // [esp+14h] [ebp-4h]

  if ( !*((_BYTE *)this + 804) )
  {
    v2 = *(int (**)(void))(*(_DWORD *)this + 8);
    v6 = this[200];
    v3 = *(float *)v2();
    v5[0] = v6 * v6;
    v5[1] = v3;
    sub_102EBF20(&dword_106E1D30, dword_106E1D3C, (int)v5);
    if ( *(_DWORD *)(dword_106E1CAC + 48) )
    {
      sub_100EC3F0(this, (int)sub_102EB100, 0.0, 0);
      sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
  return sub_100E38F0(this);
}
