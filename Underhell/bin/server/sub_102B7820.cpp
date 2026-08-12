void __thiscall sub_102B7820(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // ecx
  float *v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  _DWORD *v10; // eax
  float v11; // [esp+8h] [ebp-B4h]
  _BYTE v12[76]; // [esp+14h] [ebp-A8h] BYREF
  int v13; // [esp+60h] [ebp-5Ch]
  _BYTE v14[8]; // [esp+68h] [ebp-54h] BYREF
  float v15; // [esp+70h] [ebp-4Ch]
  float v16[11]; // [esp+74h] [ebp-48h] BYREF
  char v17; // [esp+A0h] [ebp-1Ch]
  float v18; // [esp+A4h] [ebp-18h] BYREF
  float v19; // [esp+A8h] [ebp-14h]
  float v20; // [esp+ACh] [ebp-10h]
  float v21; // [esp+B0h] [ebp-Ch] BYREF
  float v22; // [esp+B4h] [ebp-8h]
  float v23; // [esp+B8h] [ebp-4h]
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  v11 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0((int *)this, v11, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v2 = *(_DWORD *)(this + 300);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
  {
    v3 = *(_DWORD *)(this + 424);
    if ( !v3 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
      v4 = *(_DWORD *)(this + 424);
      if ( v4 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
      }
      else
      {
        Msg("**** Can't create vphysics for combine_mine!\n");
        sub_1025FAC0(this);
      }
      return;
    }
    if ( !*(_BYTE *)(this + 1176)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 76))(*(_DWORD *)(this + 424)) & 4) == 0 )
    {
      v5 = (float *)sub_10019640((_DWORD *)this);
      v21 = *v5;
      v22 = v5[1];
      v23 = v5[2] - 1024.0;
      v6 = (float *)sub_10019640((_DWORD *)this);
      sub_1002A5F0((int)&savedregs, this, v6, &v21, 1174421515, this, 0, (int)v12);
      v7 = v13;
      if ( v13 )
      {
        v8 = *(_DWORD *)(v13 + 424);
        if ( v8 )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 116))(v8) <= 1000.0 )
          {
LABEL_16:
            v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1000.0,
                    1000.0);
            v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -1000.0,
                    1000.0);
            v20 = 2500.0;
            v21 = 160.0;
            v22 = 0.0;
            v23 = 160.0;
            sub_102B6F20(this, (int)&v18, (int)&v21);
            return;
          }
          v7 = v13;
        }
        if ( *(_BYTE *)(v7 + 225) )
          goto LABEL_16;
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)this + 528))(this, 0, 0, v14);
        if ( v15 <= 0.8 )
        {
          v21 = 0.0;
          v22 = 0.0;
          v23 = 2500.0;
          v18 = 60.0;
          v19 = 0.0;
          v20 = 0.0;
          sub_102B6F20(this, (int)&v21, (int)&v18);
          return;
        }
      }
      if ( sub_102B6F80(this) )
      {
        sub_101B2C70(v16);
        v9 = *(_DWORD *)(this + 424);
        v16[6] = 1.0;
        v16[9] = 1.0;
        v16[10] = 1.0;
        v17 = 1;
        v16[7] = 454.54544;
        v16[8] = 454.54544;
        v10 = sub_10019640((_DWORD *)this);
        sub_102B6D20(v16, dword_106BAFEC, v9, (int)v10);
        *(_DWORD *)(this + 1200) = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, float *))(*(_DWORD *)dword_106BAFF4
                                                                                            + 76))(
                                     dword_106BAFF4,
                                     dword_106BAFEC,
                                     *(_DWORD *)(this + 424),
                                     0,
                                     v16);
        sub_102B73D0(this);
        sub_102B8980(this, 3);
      }
    }
  }
}
