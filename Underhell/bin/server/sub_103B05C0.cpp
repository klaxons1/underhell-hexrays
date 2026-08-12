int __thiscall sub_103B05C0(float *this, int a2, int a3)
{
  int v4; // edx
  float v5; // eax
  double v6; // st7
  int (__thiscall *v7)(float *, _DWORD *, int, int); // edx
  _DWORD v9[2]; // [esp+4h] [ebp-Ch] BYREF
  float v10; // [esp+Ch] [ebp-4h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = *((_DWORD *)this + 146);
  v5 = this[147];
  *(float *)v9 = this[145];
  v9[1] = v4;
  v10 = v5;
  v6 = sub_100BE820((int)this, dword_106EAD9C);
  v7 = *(int (__thiscall **)(float *, _DWORD *, int, int))(*(_DWORD *)this + 2024);
  v10 = v10 - (500.0 - v6);
  return v7(this, v9, a2, a3);
}
