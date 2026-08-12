void __thiscall sub_100347E0(float *this, float *a2)
{
  int v3; // eax
  float *v4; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( ((_DWORD)this[62] & 0x4000) == 0
    && a2
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2)
    && ((_DWORD)a2[64] & 0x8000) == 0 )
  {
    if ( ((_DWORD)a2[823] & 0x618) != 0 )
      goto LABEL_9;
    if ( ((_DWORD)a2[63] & 0x1000) != 0 )
      sub_100DAFD0(a2);
    if ( a2[120] * a2[120] + a2[119] * a2[119] > 2500.0 )
    {
LABEL_9:
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
      v3 = sub_1007DB30(67);
      if ( v3 != -1 && v3 != 999999999 )
        LODWORD(this[((v3 - 1000000000) >> 5) + 548]) |= 1 << (v3 & 0x1F);
      if ( ((_DWORD)a2[63] & 0x800) != 0 )
        sub_100DAE60(a2);
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60(this);
      v5[0] = this[145] - a2[145];
      v5[1] = this[146] - a2[146];
      v5[2] = this[147] - a2[147];
      off_10689714();
      v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 576))(a2);
      sub_10030370((int)this, (int)v5, v4);
    }
  }
}
