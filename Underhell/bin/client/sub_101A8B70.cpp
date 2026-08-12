unsigned __int16 __thiscall sub_101A8B70(int *this, int a2)
{
  unsigned __int16 result; // ax
  int v4; // edi

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = sub_101A8930((_WORD *)this + 6, (unsigned int *)&a2);
  v4 = result;
  if ( result != 0xFFFF )
  {
    sub_1003A300(this + 3, result);
    result = v4;
    *(_WORD *)(this[3] + 8 * v4 + 6) = *((_WORD *)this + 14);
    *((_WORD *)this + 14) = v4;
  }
  return result;
}
