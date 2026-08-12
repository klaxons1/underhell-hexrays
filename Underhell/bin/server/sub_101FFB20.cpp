int __thiscall sub_101FFB20(_DWORD *this, float a2)
{
  unsigned int v3; // eax
  double v4; // st7
  float v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-Ch]
  unsigned int v10; // [esp+Ch] [ebp-4h] BYREF
  float v11; // [esp+18h] [ebp+8h]

  if ( a2 <= 1.0 )
  {
    if ( a2 < 0.0 )
      a2 = 0.0;
  }
  else
  {
    a2 = 1.0;
  }
  v3 = RandomInt(1, 5);
  if ( v3 <= 5 )
  {
    v10 = v3;
    sub_10031670(this + 212, &v10);
  }
  v7 = RandomFloat(-1.0, 1.0);
  sub_101FF9A0((int)this, v7);
  v4 = a2;
  v11 = 10.0 * a2;
  v6 = v4 * -10.0;
  v8 = RandomFloat(LODWORD(v6), LODWORD(v11));
  sub_101FFA20((int)this, v8);
  v9 = RandomFloat(0.0, LODWORD(v11));
  return sub_101FFAA0((int)this, v9);
}
