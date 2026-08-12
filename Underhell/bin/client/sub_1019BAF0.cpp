void __thiscall sub_1019BAF0(int this, int a2)
{
  float *v3; // eax

  if ( !a2 )
  {
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    sub_100F3060(this + 3344, v3);
    if ( *(_BYTE *)(this + 3613) )
    {
      *(float *)(this + 3624) = 0.125;
      *(float *)(this + 3628) = 0.0;
    }
  }
  sub_1002B830(this, a2);
}
