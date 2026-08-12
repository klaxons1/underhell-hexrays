int __thiscall sub_10127C10(int this)
{
  bool v2; // cc
  int v3; // edi
  float v4; // edx
  float v5; // eax
  double v6; // st7
  int v7; // eax
  int *v8; // ecx
  float *v9; // ebx
  int v10; // edi
  double v11; // st7
  double v12; // st6
  char v13; // dl
  int *v14; // ecx
  int v16; // edi
  _DWORD *v17; // ebx
  float v18; // [esp+18h] [ebp-98h]
  _BYTE v19[12]; // [esp+2Ch] [ebp-84h] BYREF
  float v20[18]; // [esp+38h] [ebp-78h] BYREF
  float v21[3]; // [esp+80h] [ebp-30h] BYREF
  float v22; // [esp+8Ch] [ebp-24h]
  float v23; // [esp+90h] [ebp-20h]
  float v24; // [esp+94h] [ebp-1Ch]
  float v25; // [esp+98h] [ebp-18h] BYREF
  float v26; // [esp+9Ch] [ebp-14h]
  float v27; // [esp+A0h] [ebp-10h]
  int v28; // [esp+A4h] [ebp-Ch]
  float v29; // [esp+A8h] [ebp-8h]
  float v30; // [esp+ACh] [ebp-4h]
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 804) < 24;
  *(float *)&v28 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1000);
  if ( v2 )
  {
    v3 = sub_100FB5C0("sprites/lgtning.vmt", 10.0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)(this + 580);
    v5 = *(float *)(this + 584);
    v27 = *(float *)(this + 588);
    v26 = v5;
    v25 = v4;
    v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -1.0,
            1.0);
    v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -1.0,
            1.0);
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           1.0);
    v22 = v30;
    v23 = v29;
    v24 = v6;
    off_10689714();
    v21[0] = v22 * 128.0 + v25;
    v21[1] = v23 * 128.0 + v26;
    v21[2] = 128.0 * v24 + v27;
    sub_1002A5F0((int)&savedregs, this, &v25, v21, 16395, this, 0, (int)v19);
    sub_100FAC00(v3, &v25, v20);
    sub_1005C620((_BYTE *)(v3 + 116), 255, 180, 100, HIBYTE(*(_DWORD *)(v3 + 116)));
    sub_1005C3A0(v3, 10.0);
    v7 = *(_DWORD *)(v3 + 936);
    v30 = 12.0;
    if ( v7 != COERCE_INT(12.0) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(v3 + 24);
        if ( v8 )
          sub_100194B0(v8, 936);
      }
      *(float *)(v3 + 936) = 12.0;
    }
    *(float *)(this + 4 * *(_DWORD *)(this + 804) + 904) = *(float *)(dword_106B31C8 + 12);
    *(_DWORD *)(this + 4 * (*(_DWORD *)(this + 804))++ + 808) = v3;
  }
  if ( *(float *)&v28 >= 3.0 )
  {
    v16 = 0;
    if ( *(int *)(this + 804) > 0 )
    {
      v17 = (_DWORD *)(this + 808);
      do
      {
        sub_1025FAC0(*v17);
        ++v16;
        ++v17;
      }
      while ( v16 < *(_DWORD *)(this + 804) );
    }
    *(float *)(this + 1000) = *(float *)(dword_106B31C8 + 12);
    *(_DWORD *)(this + 804) = 0;
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
  else
  {
    v2 = *(_DWORD *)(this + 804) <= 0;
    v30 = 0.0;
    if ( !v2 )
    {
      v9 = (float *)(this + 904);
      do
      {
        v10 = *((_DWORD *)v9 - 24);
        v11 = *(float *)(dword_106B31C8 + 12) - *v9;
        v12 = *(float *)(this + 1000) + 3.0;
        v28 = HIWORD(v29) | 0xC00;
        v28 = (int)(v11 / (v12 - *v9) * 255.0);
        v13 = v28;
        LOBYTE(v29) = v28;
        if ( *(_BYTE *)(v10 + 119) != (_BYTE)v28 )
        {
          if ( *(_BYTE *)(v10 + 84) )
          {
            *(_BYTE *)(v10 + 88) |= 1u;
          }
          else
          {
            v14 = *(int **)(v10 + 24);
            if ( v14 )
            {
              sub_100194B0(v14, 116);
              v13 = LOBYTE(v29);
            }
          }
          *(_BYTE *)(v10 + 119) = v13;
        }
        ++v9;
        ++LODWORD(v30);
      }
      while ( SLODWORD(v30) < *(_DWORD *)(this + 804) );
    }
    v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)this, v18, 0);
  }
}
