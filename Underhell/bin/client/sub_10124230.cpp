int __thiscall sub_10124230(int this)
{
  double v2; // st7
  int result; // eax
  int v4[4]; // [esp+14h] [ebp-14h] BYREF
  float v5; // [esp+24h] [ebp-4h]

  *(_DWORD *)(this + 112) &= ~0x20u;
  sub_10039310(this);
  v2 = 0.0;
  if ( 0.0 != *(float *)(this + 1216) && *(float *)(this + 1260) > 1.0 )
  {
    sub_10011170((int *)this, v4, (int)sub_101241E0, 0, 0, 0, 0.0, 0);
    sub_10011260((int *)this, *((float *)off_103DC81C + 3), 0);
    *(float *)(this + 1256) = *((float *)off_103DC81C + 3);
    v2 = 0.0;
  }
  result = *(_DWORD *)(this + 1220);
  v5 = v2;
  if ( result != LODWORD(v5) )
    *(float *)(this + 1220) = v2;
  return result;
}
