void __thiscall sub_102B6520(_DWORD *this, int *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  int *v7; // esi
  double v8; // st7
  float v9; // [esp+0h] [ebp-C8h]
  int v10; // [esp+4h] [ebp-C4h]
  int v11[20]; // [esp+18h] [ebp-B0h] BYREF
  float v12[3]; // [esp+68h] [ebp-60h] BYREF
  int v13[15]; // [esp+74h] [ebp-54h] BYREF
  __int16 v14; // [esp+B0h] [ebp-18h]
  int v15; // [esp+B4h] [ebp-14h]
  int v16; // [esp+B8h] [ebp-10h]
  int v17[3]; // [esp+BCh] [ebp-Ch] BYREF

  v3 = this[103];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = (_DWORD *)*v4;
  v6 = v5;
  if ( !v5 )
    v6 = this;
  v7 = (int *)sub_101C46A0();
  sub_10079DC0(v12, (int)v7);
  v13[11] = v7[14];
  v8 = (double)(int)this[220];
  v13[12] = v7[15];
  v13[13] = v7[16];
  v13[14] = v7[17];
  v14 = *((_WORD *)v7 + 36);
  v10 = this[221];
  v9 = v8;
  v15 = v7[19];
  v16 = v7[20];
  sub_10248110((int)v11, (int)this, (int)v6, v9, v10, 0);
  *(float *)v17 = *(float *)v13 - v12[0];
  *(float *)&v17[1] = *(float *)&v13[1] - v12[1];
  *(float *)&v17[2] = *(float *)&v13[2] - v12[2];
  sub_10248740((int)v11, (float *)v17, (float *)v13, 1.0);
  sub_100D9E70(a2, (int)v7, v11);
  sub_1025FAC0((int)this);
}
