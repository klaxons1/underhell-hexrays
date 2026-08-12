void __thiscall sub_100F7870(int this, float *a2)
{
  double v3; // st7
  float v4; // ecx
  float v5; // edx
  float *v6; // ecx
  double v7; // st7
  double v8; // st6
  float v9; // edx
  float v10; // [esp+10h] [ebp-Ch] BYREF
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  sub_10038150(this);
  v3 = *(float *)(this + 284);
  v4 = *(float *)(this + 248);
  v5 = *(float *)(this + 252);
  v10 = *(float *)(this + 244);
  v11 = v4;
  v6 = (float *)off_103DC81C;
  v12 = v5;
  *a2 = (v3 + v10) * *((float *)off_103DC81C + 4);
  a2[1] = (*(float *)(this + 288) + v11) * v6[4];
  if ( (*(_BYTE *)(this + 732) & 1) != 0 )
  {
    a2[2] = *(float *)(this + 292) * v6[4];
  }
  else
  {
    v7 = *(float *)(this + 296);
    if ( 0.0 == v7 )
      v7 = 1.0;
    v8 = v12 - v7 * *(float *)(dword_10434644 + 44) * v6[4];
    a2[2] = ((v12 + v8) * 0.5 + *(float *)(this + 292)) * v6[4];
    v9 = *(float *)(this + 288);
    *(float *)(this + 284) = *(float *)(this + 284);
    *(float *)(this + 288) = v9;
    *(float *)(this + 292) = 0.0;
    v12 = v8;
    sub_100399E0(this, &v10);
    sub_100F7730((float *)this);
  }
}
