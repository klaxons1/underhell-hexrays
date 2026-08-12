int __thiscall sub_100AC4A0(int this, const char *a2, int a3, int a4)
{
  int result; // eax
  int v6; // edi
  double v7; // st7
  int v8; // [esp+18h] [ebp+10h]

  if ( !sub_100AC2A0((_DWORD *)this, a4) )
    return -1;
  *(_DWORD *)(this + 12) = -1;
  result = sub_100AC410(this, a2, a3, a4);
  if ( result < 0 )
  {
    v6 = sub_10238EF0(a2);
    if ( v6 != -1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2796) )
        v8 = sub_100B16F0(1);
      else
        v8 = 1;
      v7 = (double)v8 + (double)v8 + *(float *)(dword_106B31C8 + 12);
      *(_DWORD *)(this + 20) = a3;
      *(_DWORD *)(this + 12) = v6;
      *(float *)(this + 16) = v7;
    }
    return -1;
  }
  return result;
}
