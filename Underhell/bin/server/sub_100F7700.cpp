unsigned int __thiscall sub_100F7700(int this)
{
  unsigned int result; // eax
  int v3; // ecx
  int v4; // ebx
  float *v5; // edi
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  _DWORD *v9; // ebx
  int (__thiscall *v10)(int); // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  float *v14; // edi
  int v15; // eax
  unsigned int v16; // edi
  bool v17; // zf
  char v18; // al
  int v19; // ebx
  _DWORD v20[3]; // [esp+0h] [ebp-C4h] BYREF
  const char *v21; // [esp+Ch] [ebp-B8h]
  float v22; // [esp+10h] [ebp-B4h]
  int v23; // [esp+14h] [ebp-B0h]
  _BYTE v24[76]; // [esp+24h] [ebp-A0h] BYREF
  int v25; // [esp+70h] [ebp-54h]
  float v26[3]; // [esp+78h] [ebp-4Ch] BYREF
  float v27[3]; // [esp+84h] [ebp-40h] BYREF
  int v28; // [esp+90h] [ebp-34h] BYREF
  _BYTE v29[4]; // [esp+98h] [ebp-2Ch] BYREF
  int v30; // [esp+9Ch] [ebp-28h]
  int v31; // [esp+A0h] [ebp-24h]
  float v32[3]; // [esp+A4h] [ebp-20h] BYREF
  void **v33; // [esp+B0h] [ebp-14h] BYREF
  _DWORD *v34; // [esp+B4h] [ebp-10h]
  float v35; // [esp+B8h] [ebp-Ch] BYREF
  float v36; // [esp+BCh] [ebp-8h]
  float v37; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF

  result = *(_DWORD *)(this + 3292);
  v3 = *(_DWORD *)(this + 3296);
  if ( ((*(_BYTE *)(this + 3300) | (unsigned __int8)(v3 | result)) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(this + 3416) & 8) != 0 )
    {
      if ( (v3 & 0x20) != 0 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1340))(this, 1);
      if ( (*(_BYTE *)(this + 3300) & 0x20) != 0 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1340))(this, 0);
      return result;
    }
    if ( (result & 0x20) != 0 )
    {
      if ( *(_DWORD *)(dword_106C1DF4 + 48) )
      {
        sub_100F5A30((_DWORD *)this, (int)v26, 0, (int)v29);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 504))(this, v32);
        v33 = &CUsePushFilter::`vftable';
        v35 = v26[0] * 96.0 + v32[0];
        v36 = v26[1] * 96.0 + v32[1];
        v37 = 96.0 * v26[2] + v32[2];
        sub_10023120(COERCE_FLOAT(&savedregs), this, v32, &v35, 33570827, (int)&v33, (int)v24);
        v4 = v25;
        if ( v25 )
        {
          v34 = *(_DWORD **)(v25 + 424);
          if ( v34 )
          {
            v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
            v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
            v35 = *v6 - *v5;
            v36 = v6[1] - v5[1];
            v37 = 0.0;
            v7 = off_10689714();
            if ( v7 <= 1.0 )
              v7 = 1.0;
            v8 = *(float *)(dword_106B9514 + 44) / v7;
            if ( v8 >= *(float *)(dword_106B95A4 + 44) )
              v8 = *(float *)(dword_106B95A4 + 44);
            v9 = v34;
            v10 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
            v11 = *v34;
            v27[0] = v35 * v8;
            v27[1] = v36 * v8;
            v27[2] = v8 * v37;
            v12 = v10(this);
            (*(void (__thiscall **)(_DWORD *, float *, int))(v11 + 240))(v9, v27, v12);
          }
        }
      }
    }
    if ( (*(_BYTE *)(this + 3296) & 0x20) != 0 )
    {
      result = sub_101E99A0(this);
      if ( (_BYTE)result )
        return result;
      v13 = *(_DWORD *)(this + 3416);
      if ( (v13 & 1) != 0 )
      {
        result = v13 & 0xFFFFFFFE;
        *(_DWORD *)(this + 3416) = result;
        *(_DWORD *)(this + 3408) = 192;
        return result;
      }
      v14 = (float *)sub_101C5260(this);
      if ( v14 )
      {
        if ( (*(_BYTE *)(this + 3292) & 2) == 0
          && (*(_BYTE *)(this + 256) & 1) != 0
          && (*(char (__thiscall **)(float *))(*(_DWORD *)v14 + 144))(v14) < 0
          && (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)v14 + 312))(v14, this) )
        {
          *(_DWORD *)(this + 3416) |= 1u;
          v15 = sub_101E1CF0((int)v14[27], (int)v14[217]);
          v23 = 0;
          v22 = 0.0;
          v21 = "Player.UseTrain";
          *(_DWORD *)(this + 3408) = v15 | 0xC0;
          return sub_1023C380((int)v21, v22, v23);
        }
      }
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1464))(this);
    v16 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 144))(result);
      v17 = (*(_BYTE *)(this + 3292) & 0x20) == 0;
      v28 = 0;
      v30 = -1;
      v31 = 0;
      if ( !v17 && (result & 0x20) != 0 )
      {
LABEL_32:
        *(_DWORD *)(this + 3416) |= 4u;
LABEL_33:
        v18 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v16 + 144))(v16);
        v19 = *(_DWORD *)v16;
        if ( (v18 & 0x40) != 0 )
          v23 = 1;
        else
          v23 = 3;
        goto LABEL_39;
      }
      if ( (*(_BYTE *)(this + 3296) & 0x20) != 0 && (result & 0x50) != 0 )
      {
        if ( (result & 0x20) == 0 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( (*(_BYTE *)(this + 3300) & 0x20) != 0 )
      {
        result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v16 + 144))(v16);
        if ( (result & 0x40) != 0 )
        {
          v19 = *(_DWORD *)v16;
          v23 = 0;
LABEL_39:
          sub_10023360(v20, (int)&v28);
          return (*(int (__thiscall **)(unsigned int, const char *, int, int, _DWORD, _DWORD, _DWORD, const char *, float, int))(v19 + 148))(
                   v16,
                   "Use",
                   this,
                   this,
                   v20[0],
                   v20[1],
                   v20[2],
                   v21,
                   COERCE_FLOAT(LODWORD(v22)),
                   v23);
        }
      }
    }
    else if ( (*(_BYTE *)(this + 3296) & 0x20) != 0 )
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1460))(this);
    }
  }
  return result;
}
