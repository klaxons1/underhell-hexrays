int __thiscall sub_103EA7E0(float *this, int a2)
{
  bool v3; // zf
  float v4; // ecx
  float v5; // edx
  double v6; // st7
  double v7; // st7
  int (__thiscall **v8)(char *, _DWORD *); // edx
  int *v9; // eax
  _DWORD v11[13]; // [esp+8h] [ebp-5Ch] BYREF
  float v12; // [esp+3Ch] [ebp-28h]
  int v13; // [esp+48h] [ebp-1Ch]
  float v14; // [esp+58h] [ebp-Ch]
  float v15; // [esp+5Ch] [ebp-8h]
  float v16; // [esp+60h] [ebp-4h]

  sub_1001E4E0(v11, a2);
  v3 = (*(_BYTE *)(a2 + 64) & 0x40) == 0;
  v12 = v12 * 25.0;
  if ( !v3 )
  {
    v4 = *(float *)(a2 + 8);
    v5 = *(float *)(a2 + 12);
    v14 = *(float *)(a2 + 4);
    v15 = v4;
    v16 = v5;
    *(float *)&v11[1] = v14 * 10.0;
    *(float *)&v11[2] = v4 * 10.0;
    *(float *)&v11[3] = 10.0 * v5;
  }
  (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 600))(this, v11);
  v6 = *(float *)(a2 + 52);
  v12 = *(float *)(a2 + 52);
  if ( v13 == 256 && v6 <= 10.0 )
  {
    v12 = v6 * 0.1;
    this[444] = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
  if ( (**((int (__thiscall ***)(int))this + 371))((int)(this + 371)) && (v13 & 1) == 0 )
  {
    v7 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 888))(this);
    v8 = (int (__thiscall **)(char *, _DWORD *))*((_DWORD *)this + 371);
    v13 |= 0x10u;
    v12 = v7 * v12;
    v9 = (int *)(*v8)((char *)this + 1484, v11);
    sub_100D9E70(v9, (int)this, v11);
  }
  return 0;
}
