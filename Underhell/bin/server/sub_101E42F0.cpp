void __thiscall sub_101E42F0(float *this)
{
  float v2; // ecx
  float v3; // [esp+Ch] [ebp-68h]
  _BYTE v4[80]; // [esp+18h] [ebp-5Ch] BYREF
  float v5[3]; // [esp+68h] [ebp-Ch] BYREF

  sub_10247EC0(v4);
  (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 1296))(this, v4);
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1088))(this) )
    (*(void (__thiscall **)(float *, float *, float *))(*(_DWORD *)this + 1412))(this, &flt_106F1CA8, &flt_106F1CB4);
  v2 = this[183];
  v5[0] = 0.0;
  v5[1] = v2;
  v5[2] = 0.0;
  sub_100E11A0((int)this, v5);
  sub_100EC3F0(this, (int)sub_101E3BD0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v3, 0);
  nullsub_4();
}
