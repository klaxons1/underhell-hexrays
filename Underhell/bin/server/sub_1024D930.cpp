void __thiscall sub_1024D930(float *this)
{
  double v2; // st7
  int *v3; // edi
  double v4; // st6
  float *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = this[2];
  if ( v2 > 0.000001 )
  {
    v3 = *(int **)this;
    if ( *(_DWORD *)this )
    {
      v4 = this[1];
      if ( v4 <= *(float *)(dword_106B31C8 + 12) )
      {
        do
        {
          v4 = v4 + v2;
          this[1] = v4;
        }
        while ( *(float *)(dword_106B31C8 + 12) >= (double)this[1] );
      }
      v5 = this;
      sub_1024D7C0(v3, (int)this);
      sub_1023EB90(v3, (int *)&v5);
      *((_BYTE *)this + 16) = 1;
    }
  }
}
