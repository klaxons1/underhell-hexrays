bool __thiscall sub_10185FB0(_DWORD *this, float *a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  float *v5; // eax
  float *v7; // [esp-18h] [ebp-78h]
  int v8; // [esp-10h] [ebp-70h]
  _BYTE v9[44]; // [esp+0h] [ebp-60h] BYREF
  float v10; // [esp+2Ch] [ebp-34h]
  float v11[3]; // [esp+54h] [ebp-Ch] BYREF
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  v2 = this[231];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[231] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v11[0] = *a2;
  v11[1] = a2[1];
  v8 = v4;
  v11[2] = a2[2] + 1.0;
  v7 = (float *)sub_10073730(0);
  v5 = (float *)sub_10073710(0);
  sub_100231A0((int)&savedregs, (int)a2, a2, v11, v5, v7, 33701899, v8, 0, (int)v9);
  return 1.0 == v10;
}
