int __thiscall sub_103DDF40(_DWORD *this, int a2, float *a3)
{
  int result; // eax
  int *v5; // ecx

  result = this[a2];
  if ( result != *(_DWORD *)a3 )
  {
    result = (int)(this - 223);
    if ( *((_BYTE *)this - 808) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *(float *)&this[a2] = *a3;
    }
    else
    {
      v5 = *(int **)(result + 24);
      if ( v5 )
        result = sub_100194B0(v5, (_WORD)this + 4 * a2 - result);
      *(float *)&this[a2] = *a3;
    }
  }
  return result;
}
