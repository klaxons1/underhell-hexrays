void __thiscall sub_102CDEB0(int *this)
{
  int v2; // ebx
  double v3; // st7
  unsigned int v4; // edx
  float *v5; // eax
  double v6; // st6
  double v7; // st7
  int v8; // edi
  int v9; // eax
  float *v10; // eax
  int v11; // ecx
  float v13; // [esp+28h] [ebp-A4h]
  _BYTE v14[76]; // [esp+38h] [ebp-94h] BYREF
  int v15; // [esp+84h] [ebp-48h]
  float v16[3]; // [esp+8Ch] [ebp-40h] BYREF
  float v17[3]; // [esp+98h] [ebp-34h] BYREF
  float v18[3]; // [esp+A4h] [ebp-28h] BYREF
  float v19; // [esp+B0h] [ebp-1Ch] BYREF
  float v20; // [esp+B4h] [ebp-18h]
  float v21; // [esp+B8h] [ebp-14h]
  float v22; // [esp+BCh] [ebp-10h] BYREF
  float v23; // [esp+C0h] [ebp-Ch]
  float v24; // [esp+C4h] [ebp-8h]
  int v25; // [esp+C8h] [ebp-4h] BYREF
  int savedregs; // [esp+CCh] [ebp+0h] BYREF

  if ( *((float *)this + 231) <= (double)*(float *)(dword_106B31C8 + 12) && sub_102C9B50((int)this) )
  {
    v2 = this[230] == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != (unsigned int)this[230] >> 12
       ? 0
       : off_1061BE18[4 * (this[230] & 0xFFF) + 1];
    if ( (*(_BYTE *)(v2 + 3292) & 1) != 0 )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      sub_10422220(this + 176, &v22);
      v3 = *(float *)(dword_106B31C8 + 12) - 1.0 / *((float *)this + 201) - 0.01;
      *((float *)this + 200) = v3;
      v4 = (unsigned int)this[62] >> 8;
      v25 = (int)((*(float *)(dword_106B31C8 + 12) - v3) * *((float *)this + 201));
      if ( (v4 & 1) != 0 )
      {
        (*(void (__thiscall **)(int *, float *))(*this + 744))(this, &v19);
        v17[0] = 8.0;
        v17[1] = 8.0;
        v17[2] = 8.0;
        v16[0] = -8.0;
        v16[1] = -8.0;
        v16[2] = -8.0;
        v18[0] = v22 * 8192.0 + v19;
        v18[1] = v23 * 8192.0 + v20;
        v18[2] = 8192.0 * v24 + v21;
        sub_100231A0((int)&savedregs, (int)this, &v19, v18, v16, v17, 1174421507, (int)this, 0, (int)v14);
        if ( v15 )
        {
          if ( *(_BYTE *)(v15 + 225) && (*(_DWORD *)(v15 + 256) & 0x10000) != 0 )
          {
            v5 = (float *)(*(int (**)(void))(*(_DWORD *)v15 + 576))();
            v6 = v5[1] - v20;
            v7 = v5[2] - v21;
            v22 = *v5 - v19;
            v23 = v6;
            v24 = v7;
            off_10689714();
          }
        }
      }
      v8 = *this;
      v9 = (*(int (__thiscall **)(int *, float *, float *, int, _DWORD))(*this + 744))(this, v18, &v22, v2, 0);
      (*(void (__thiscall **)(int *, int, int))(v8 + 752))(this, v25, v9);
      v10 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
      sub_1023D4B0(1, v10, 1000, 0.2, 0, 0, 0);
      v11 = this[254];
      if ( v11 <= -1 )
        goto LABEL_20;
      if ( !(v11 % 10) )
        Msg("Ammo Remaining: %d\n", this[254]);
      if ( this[254]-- == 1 )
      {
        v25 = -33;
        sub_100332F0(this + 62, &v25);
        sub_102CDC40(this);
      }
      else
      {
LABEL_20:
        v13 = 1.0 / *((float *)this + 201) + *(float *)(dword_106B31C8 + 12);
        (*(void (__thiscall **)(int *, _DWORD))(*this + 748))(this, LODWORD(v13));
      }
    }
  }
}
