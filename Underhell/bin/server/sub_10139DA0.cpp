int __thiscall sub_10139DA0(int this)
{
  int v2; // eax
  double v3; // st7
  char v4; // bl
  int v5; // esi
  int *v6; // ecx
  __int64 v8; // [esp+0h] [ebp-1Ch]
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+14h] [ebp-8h] BYREF
  float v12; // [esp+18h] [ebp-4h]

  v2 = sub_1023C720();
  v3 = 0.0;
  v4 = 0;
  v12 = 0.0;
  if ( v2 != -1 )
  {
    do
    {
      v5 = sub_1023C740(v2);
      if ( v5 && (*(_DWORD *)(this + 808) & *(_DWORD *)(v5 + 16)) != 0 && (v11 = 0.0, sub_10139A20(this, v5, &v11)) )
      {
        v3 = v12;
        if ( v11 > (double)v12 )
        {
          v3 = v11;
          v4 = 1;
          v12 = v11;
        }
      }
      else
      {
        v3 = v12;
      }
      v2 = *(__int16 *)(v5 + 28);
    }
    while ( v2 != -1 );
    if ( v4 )
    {
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80((_DWORD *)(this + 896), v8, 0.0);
      v3 = v12;
    }
  }
  v6 = (int *)(this + 848);
  if ( *(float *)(this + 848) != v3 )
  {
    if ( fabs(v3 - *(float *)v6) >= 0.0049999999 )
      v3 = v3 * (1.0 - *(float *)(this + 816)) + *(float *)v6 * *(float *)(this + 816);
    v9 = v3;
    sub_10108AE0(v6, SLOBYTE(v9), this, this);
  }
  v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v10, 0);
}
