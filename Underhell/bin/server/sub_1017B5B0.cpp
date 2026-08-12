int __thiscall sub_1017B5B0(int *this, int a2)
{
  double v3; // st7
  double v4; // st6
  int v5; // ecx
  double v6; // st5
  int result; // eax
  float v8; // [esp+0h] [ebp-10h]

  if ( !this[218] )
  {
    v3 = sub_100E9200(this, 0);
    v4 = 0.0;
    v5 = *(_DWORD *)(a2 + 24);
    if ( v5 == 1 )
      v6 = *(float *)(a2 + 8);
    else
      v6 = 0.0;
    if ( v3 - *(float *)(dword_106B31C8 + 12) > v6 )
    {
      if ( v5 == 1 )
        v4 = *(float *)(a2 + 8);
      v8 = v3 - v4;
      return sub_100EC4A0(this, v8, 0);
    }
    else
    {
      return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
  return result;
}
