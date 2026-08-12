int __thiscall sub_10031280(int this, int a2, int a3)
{
  int result; // eax
  double v5; // st7

  if ( a2 )
    *(_DWORD *)(this + 2484) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 2484) = -1;
  result = sub_10044510("Starting a forced interaction");
  v5 = *(float *)(dword_106B31C8 + 12) + 8.0;
  *(_DWORD *)(this + 2520) = a3;
  *(_DWORD *)(this + 2516) = 3;
  *(float *)(this + 2500) = v5;
  return result;
}
