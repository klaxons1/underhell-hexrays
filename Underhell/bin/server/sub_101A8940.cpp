int __thiscall sub_101A8940(int this, int a2)
{
  double v3; // st7
  int v4; // ecx
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v4 = *(_DWORD *)(this + 3628);
  *(float *)(this + 3728) = v3;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 100))(v4);
  if ( result )
  {
    *(float *)(this + 3736) = *(float *)(result + 516) * *(float *)(this + 3728);
    *(float *)(this + 3748) = *(float *)(result + 600);
  }
  return result;
}
