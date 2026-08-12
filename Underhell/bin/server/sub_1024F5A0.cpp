void __thiscall sub_1024F5A0(float *this, int a2)
{
  double v3; // st7
  float v4; // ecx
  float v5; // edx
  float *v6; // eax
  bool v7; // zf
  float v8; // [esp+0h] [ebp-48h]
  float v9; // [esp+18h] [ebp-30h]
  int v10; // [esp+24h] [ebp-24h] BYREF
  float v11; // [esp+28h] [ebp-20h]
  float v12; // [esp+2Ch] [ebp-1Ch]
  int v13; // [esp+30h] [ebp-18h] BYREF
  float v14; // [esp+34h] [ebp-14h]
  float v15; // [esp+38h] [ebp-10h]
  float v16; // [esp+3Ch] [ebp-Ch] BYREF
  float v17; // [esp+40h] [ebp-8h]
  float v18; // [esp+44h] [ebp-4h]

  v3 = this[201];
  v9 = this[182];
  v4 = *(float *)(a2 + 720);
  v10 = *(int *)(a2 + 716);
  v8 = v3;
  v13 = v10;
  v5 = *(float *)(a2 + 724);
  v11 = v4;
  v14 = v4;
  v12 = v5;
  v15 = v5;
  sub_101ACF40((float *)a2, (float *)&v13, v8, 0, 0);
  if ( ((_DWORD)this[62] & 0x10) != 0 || *(float *)&v13 == *(float *)&v10 && v14 == v11 && v15 == v12 )
  {
    v16 = this[182];
    v17 = this[183];
    v18 = this[184];
  }
  else
  {
    v6 = (float *)sub_101AD430((float *)a2, &v10, 1.0 == this[218]);
    v7 = ((_BYTE)this[62] & 1) == 0;
    v16 = *v6;
    v17 = v6[1];
    v18 = v6[2];
    if ( !v7 )
      v16 = v9;
  }
  (*(void (__thiscall **)(float *, int, float *, _DWORD))(*(_DWORD *)this + 416))(this, a2 + 716, &v16, 0);
  sub_100D7260(this, &flt_106F1CB4);
}
