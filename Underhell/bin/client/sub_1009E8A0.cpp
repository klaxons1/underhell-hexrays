double __thiscall sub_1009E8A0(_DWORD *this)
{
  int *v2; // ecx
  double result; // st7
  int v4; // eax
  int v5; // eax
  float v6[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = (int *)this[1];
  if ( !v2 )
    return *(float *)this;
  v4 = *v2;
  if ( (int)this[2] >= 0 )
  {
    v5 = (*(int (**)(void))(v4 + 120))();
    if ( this[2] < v5 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(*(_DWORD *)this[1] + 112))(this[1], v6, v5);
      return v6[this[2]];
    }
    else
    {
      return 0.0;
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 108))();
  }
  return result;
}
