int __thiscall sub_10204D90(int this, int a2, float a3, char a4)
{
  double v7; // st7
  float v8; // [esp+0h] [ebp-14h]
  float v9; // [esp+1Ch] [ebp+8h]

  if ( !a2 )
    return 0;
  v7 = sub_10204A80(this, a2);
  v9 = v7;
  if ( *(_DWORD *)(dword_106C1ACC + 48) )
  {
    sub_10204670(this);
    v7 = v9;
  }
  if ( a4 )
  {
    if ( *(float *)(this + 824) != v7 )
    {
      v8 = v7;
      sub_10108AE0((int *)(this + 856), SLOBYTE(v8), a2, this);
      v7 = v9;
      *(float *)(this + 824) = v9;
    }
  }
  if ( a3 < v7 )
    return 1;
  if ( a3 == v7 )
    return 0;
  return -1;
}
