int __thiscall sub_10198DB0(int this, int a2)
{
  int result; // eax
  bool v4; // zf

  if ( !a2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 4))(this + 4);
    sub_1007A050((int)&off_103DCCF8, *(_DWORD *)(this + 156), -1293.0);
  }
  sub_10024A70(this, a2);
  result = sub_101791D0(this + 3376);
  v4 = *(_BYTE *)(this + 3396) == 0;
  *(_DWORD *)(this + 3420) = this - 8;
  if ( !v4 )
  {
    *(float *)(this + 3424) = *(float *)(this + 3460);
    *(float *)(this + 3428) = *(float *)(this + 3464);
    *(float *)(this + 3432) = *(float *)(this + 3468);
  }
  return result;
}
