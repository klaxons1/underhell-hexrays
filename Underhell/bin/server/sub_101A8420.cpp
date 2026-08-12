int __thiscall sub_101A8420(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 100))(*(_DWORD *)(this + 3628));
  if ( result )
  {
    *(float *)(this + 3736) = *(float *)(this + 3728) * *(float *)(result + 516);
    *(float *)(this + 3748) = *(float *)(result + 600);
  }
  return result;
}
