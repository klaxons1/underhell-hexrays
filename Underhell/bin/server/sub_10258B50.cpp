void __thiscall sub_10258B50(float *this, int a2)
{
  int *v2; // edi
  float v4; // [esp+4h] [ebp-Ch]

  v2 = (int *)a2;
  if ( (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 752))(this, a2) )
  {
    if ( v2 )
      a2 = *(_DWORD *)(*(int (__thiscall **)(int *))(*v2 + 8))(v2);
    else
      a2 = -1;
    if ( (int)sub_10319100(&a2) < 0 )
    {
      v4 = this[274] * 0.5;
      sub_10258950(this, v2, v4);
    }
  }
  sub_102576F0(this, (unsigned int)v2);
}
