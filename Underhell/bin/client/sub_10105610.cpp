void __thiscall sub_10105610(int this, float a2)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-8h]
  float v5; // [esp+0h] [ebp-8h]

  *(float *)(this + 1252) = *((float *)off_103DC81C + 4) * a2 + *(float *)(this + 1252);
  v3 = sub_100A4EE0(this + 1260, *((float *)off_103DC81C + 3)) + *(float *)(this + 1252);
  if ( v3 >= 0.0 )
  {
    if ( v3 <= 1.0 )
      v5 = v3;
    else
      v5 = v3 - 1.0;
    sub_101053E0((_DWORD *)this, v5);
  }
  else
  {
    v4 = v3 + 1.0;
    sub_101053E0((_DWORD *)this, v4);
  }
}
