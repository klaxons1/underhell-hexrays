bool __thiscall sub_10286570(int *this)
{
  double v2; // st7
  double v3; // st6
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int *, int *, int *))(*this + 280))(this, &v6, &v5);
  v2 = (double)this[62];
  if ( *((_BYTE *)this + 207) )
    v3 = (double)v5;
  else
    v3 = (double)v6;
  return v2 > 0.0 && v3 + (double)this[63] >= v2;
}
