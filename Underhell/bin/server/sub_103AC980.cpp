void __thiscall sub_103AC980(int this)
{
  int *v2; // edi
  float *v3; // eax
  int v4; // edx
  float *v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st5
  double v9; // st4
  _BYTE v10[12]; // [esp+18h] [ebp-84h] BYREF
  int v11[18]; // [esp+24h] [ebp-78h] BYREF
  float v12[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v13; // [esp+78h] [ebp-24h] BYREF
  float v14; // [esp+7Ch] [ebp-20h]
  float v15; // [esp+80h] [ebp-1Ch]
  float v16; // [esp+84h] [ebp-18h]
  float v17; // [esp+88h] [ebp-14h]
  float v18; // [esp+8Ch] [ebp-10h]
  int v19; // [esp+90h] [ebp-Ch] BYREF
  float v20; // [esp+94h] [ebp-8h]
  float v21; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  v2 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( v2 )
  {
    if ( *(float *)(this + 3696) >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      v3 = (float *)sub_100217F0((void *)this);
      v13 = *v3;
      v14 = v3[1];
      v4 = *v2;
      v15 = v3[2];
      v5 = (float *)(*(int (__thiscall **)(int *))(v4 + 532))(v2);
      v6 = v5[1] + v14;
      v7 = v5[2] + v15;
      *(float *)(this + 3684) = *v5 + v13;
      *(float *)(this + 3688) = v6;
      *(float *)(this + 3692) = v7;
      sub_10078720(*(_DWORD *)(this + 2604), (int)&v13, -1.0);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_103ABDA0(this, (float *)&v19, *(float *)(this + 580), *(float *)(this + 584), *(float *)(this + 588));
      v16 = *(float *)(this + 3684) - *(float *)&v19;
      v17 = *(float *)(this + 3688) - v20;
      v18 = *(float *)(this + 3692) - v21;
      off_10689714();
      if ( *(float *)(this + 3672) * v16 + v17 * *(float *)(this + 3676) + v18 * *(float *)(this + 3680) < 0.5
        || (v8 = *(float *)(this + 3676),
            v9 = *(float *)(this + 3680),
            v12[0] = *(float *)(this + 3672) * 3600.0 + *(float *)&v19,
            v12[1] = v8 * 3600.0 + v20,
            v12[2] = 3600.0 * v9 + v21,
            sub_1002A5F0((int)&savedregs, this, (float *)&v19, v12, 1174421507, this, 0, (int)v10),
            1.0 == *(float *)&v11[8]) )
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
        sub_1023D4B0(8, (float *)v11, 60, 0.025, this, 0, 0);
      }
    }
    else
    {
      sub_10027CD0((_DWORD *)this, 0);
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
  }
}
