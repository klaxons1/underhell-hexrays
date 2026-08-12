double __thiscall sub_100E9200(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // [esp+Ch] [ebp+8h]
  int v6; // [esp+Ch] [ebp+8h]

  if ( a2 )
  {
    v4 = sub_100E91A0(this, a2);
    if ( v4 == -1 )
      return -1.0;
    v6 = *(_DWORD *)(this[36] + 16 * v4 + 8);
    if ( v6 == -1 )
      return -1.0;
    return (double)v6 * *(float *)(dword_106B31C8 + 28);
  }
  else
  {
    v5 = this[47];
    if ( v5 == -1 )
      return -1.0;
    return (double)v5 * *(float *)(dword_106B31C8 + 28);
  }
}
