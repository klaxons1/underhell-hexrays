int __thiscall sub_10093670(int this, int a2, float a3, float a4, int a5, int a6, int a7)
{
  int result; // eax
  int v9; // ebx

  sub_10023E00((char *)this, 67);
  result = sub_10021610((void *)this, a2, a3, a4, a5, a6, a7);
  v9 = result;
  if ( a7 )
  {
    *(_DWORD *)(this + 4372) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a7 + 8))(a7);
    return v9;
  }
  else
  {
    *(_DWORD *)(this + 4372) = -1;
  }
  return result;
}
