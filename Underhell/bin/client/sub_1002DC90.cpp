int __thiscall sub_1002DC90(float *this, int a2, int a3, int a4)
{
  unsigned __int16 *v5; // eax
  int v6; // eax
  _BYTE v8[48]; // [esp+4h] [ebp-30h] BYREF

  v5 = (unsigned __int16 *)sub_100285F0(this, 0.0);
  v6 = sub_1001E330(v5, a2);
  if ( v6 )
  {
    sub_101ED9E0(v6, v8);
  }
  else
  {
    sub_10037F50(this);
    sub_101ED9E0(this + 165, v8);
  }
  sub_101ED7B0(v8, a4);
  return sub_101EDA00(v8, 3, a3);
}
