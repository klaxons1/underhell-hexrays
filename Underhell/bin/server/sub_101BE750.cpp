void __thiscall sub_101BE750(char *this, int a2, int a3)
{
  int v4; // eax

  if ( !this[2184] || !this[2160] )
  {
LABEL_7:
    sub_100DA500(this, a2, a3);
    return;
  }
  if ( *(float *)(a3 + 20) >= 0.5 || *(char **)(a3 + 4 * (a2 == 0) + 104) != this )
  {
    if ( *(float *)(a3 + 24) > 1000.0 )
    {
      v4 = sub_1026A890(this + 2244);
      sub_101BE5D0(this, v4);
      return;
    }
    goto LABEL_7;
  }
}
