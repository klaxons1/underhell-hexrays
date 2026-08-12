int __thiscall sub_101AA550(int this, int a2)
{
  unsigned int v3; // edi
  int *v4; // ecx
  int result; // eax

  v3 = *(_DWORD *)(this + 248) & 0xFFFEFFFF;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  if ( *(_DWORD *)(this + 2324) == 1 )
    sub_1002B660(this, 2);
  sub_10023CB0((char *)this, 25);
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 100))(*(_DWORD *)(this + 3628));
  if ( result )
  {
    *(float *)(this + 3736) = *(float *)(this + 3728) * *(float *)(result + 516);
    *(float *)(this + 3748) = *(float *)(result + 600);
  }
  return result;
}
