int __thiscall sub_1017B560(int *this, int a2)
{
  double v3; // st7
  int result; // eax
  float v5; // [esp+0h] [ebp-Ch]

  if ( !this[218] )
  {
    v3 = sub_100E9200(this, 0);
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v5 = v3 + *(float *)(a2 + 8);
    else
      v5 = v3 + 0.0;
    return sub_100EC4A0(this, v5, 0);
  }
  return result;
}
