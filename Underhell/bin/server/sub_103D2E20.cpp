int __thiscall sub_103D2E20(int *this)
{
  int i; // edi
  int v3; // ecx
  float v5; // [esp+0h] [ebp-10h]

  for ( i = this[208] - 1; i >= 0; --i )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this[205] + 4 * i) )
    {
      (*(void (__thiscall **)(int *))(*this + 720))(this);
      v3 = this[208];
      if ( v3 > 0 )
      {
        *(_DWORD *)(this[205] + 4 * i) = *(_DWORD *)(this[205] + 4 * v3 - 4);
        --this[208];
      }
    }
  }
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v5, 0);
}
