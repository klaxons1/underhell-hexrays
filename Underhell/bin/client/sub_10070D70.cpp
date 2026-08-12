int __thiscall sub_10070D70(float *this)
{
  int v2; // eax
  float v4[3]; // [esp+4h] [ebp-24h] BYREF
  float v5[3]; // [esp+10h] [ebp-18h] BYREF
  float v6[3]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_10070BD0(this, v6, v4, v5);
  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
  return sub_101F1D80(v6, v2);
}
