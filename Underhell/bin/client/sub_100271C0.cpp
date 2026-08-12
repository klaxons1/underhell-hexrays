double __thiscall sub_100271C0(void *this, _DWORD *a2, int a3)
{
  double v5; // st7
  bool v6; // c0
  double result; // st7
  float v8; // [esp+0h] [ebp-1Ch]
  float v9; // [esp+10h] [ebp-Ch] BYREF
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+24h] [ebp+8h]

  if ( a2 )
  {
    if ( a3 < sub_10126D70(a2) && a3 >= 0 )
    {
      v5 = sub_1001DD30((int)a2, a3, (int)this + 1404);
      v12 = v5;
      v6 = v5 > 0.0;
      result = 0.0;
      if ( !v6 )
        return result;
      goto LABEL_5;
    }
    DevWarning(2, "C_BaseAnimating::SequenceDuration( %d ) out of range\n", a3);
  }
  v12 = 0.1;
LABEL_5:
  sub_10008950(a2, a3, (int)this + 1404, &v9);
  v8 = v9 * v9 + v10 * v10 + v11 * v11;
  return off_103EDFE0(v8) / v12;
}
