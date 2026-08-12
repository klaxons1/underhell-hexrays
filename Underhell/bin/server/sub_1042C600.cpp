void __thiscall sub_1042C600(float *this, float a2)
{
  double v3; // st7
  bool v4; // zf
  char Buffer[32]; // [esp+10h] [ebp-24h] BYREF
  float v6; // [esp+30h] [ebp-4h]

  if ( this[11] != a2 )
  {
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 52))(this, &a2);
    v6 = this[11];
    v3 = a2;
    this[11] = a2;
    v4 = ((_DWORD)this[5] & 0x1000) == 0;
    *((_DWORD *)this + 12) = (int)v3;
    if ( v4 )
    {
      sub_10429A00(Buffer, 0x20u, "%f", v3);
      (*(void (__thiscall **)(float *, char *, float))(*(_DWORD *)this + 56))(this, Buffer, COERCE_FLOAT(LODWORD(v6)));
    }
  }
}
