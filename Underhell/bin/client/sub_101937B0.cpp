int __thiscall sub_101937B0(int this, int a2)
{
  int result; // eax
  bool v4; // zf

  sub_10024A70(this, a2);
  result = sub_101791D0(this + 3384);
  v4 = *(_BYTE *)(this + 3404) == 0;
  *(_DWORD *)(this + 3428) = this - 8;
  if ( !v4 )
  {
    *(float *)(this + 3432) = *(float *)(this + 3456);
    *(float *)(this + 3436) = *(float *)(this + 3460);
    *(float *)(this + 3440) = *(float *)(this + 3464);
  }
  return result;
}
