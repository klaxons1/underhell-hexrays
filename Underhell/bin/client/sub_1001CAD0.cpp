void __thiscall sub_1001CAD0(float *this, int a2, float *a3, float *a4)
{
  float *v5; // edi
  float *v6; // esi
  _BYTE v7[48]; // [esp+8h] [ebp-C0h] BYREF
  _BYTE v8[48]; // [esp+38h] [ebp-90h] BYREF
  _BYTE v9[48]; // [esp+68h] [ebp-60h] BYREF
  _BYTE v10[48]; // [esp+98h] [ebp-30h] BYREF

  if ( *a3 != this[54]
    || a3[1] != this[55]
    || a3[2] != this[56]
    || *a4 != this[57]
    || a4[1] != this[58]
    || a4[2] != this[59] )
  {
    sub_101F0B70(a4, a3, v7);
    sub_101F0BA0(this + 57, this + 54, v9);
    v5 = this + 60;
    v6 = this + 63;
    sub_101F0F40(v6, v5, v10);
    sub_101EDC00(v9, v10, v8);
    sub_101EDC00(v7, v8, v10);
    sub_101F0930(v10, v6, v5);
  }
}
