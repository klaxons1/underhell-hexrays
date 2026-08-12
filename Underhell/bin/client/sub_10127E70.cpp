int __thiscall sub_10127E70(char *this, int a2)
{
  int result; // eax
  int v4; // esi
  _DWORD *v5; // eax

  *(_DWORD *)(*(_DWORD *)this + 196) = a2;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v4 = 1;
    if ( *(int *)(result + 100) > 1 )
    {
      do
      {
        v5 = (_DWORD *)sub_10127760(this, v4);
        result = sub_10127700(v5, a2);
        ++v4;
      }
      while ( v4 < *(_DWORD *)(*((_DWORD *)this + 1) + 100) );
    }
  }
  return result;
}
