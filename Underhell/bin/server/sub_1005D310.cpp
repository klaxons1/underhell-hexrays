int __thiscall sub_1005D310(int this, const void *a2, int a3)
{
  int result; // eax

  qmemcpy((void *)(this + 64), a2, 0x24u);
  if ( a3 )
    *(_DWORD *)(this + 100) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 100) = -1;
  *(float *)(this + 48) = 3.4028235e38;
  *(float *)(this + 52) = 3.4028235e38;
  *(float *)(this + 56) = 3.4028235e38;
  result = *(_DWORD *)(this + 4);
  if ( result )
  {
    if ( result != -2760 )
    {
      sub_100B8BE0(*(_DWORD *)(this + 80), *(_DWORD *)(this + 84));
      return sub_100B8C00(*(float *)(this + 72), *(float *)(this + 76));
    }
  }
  return result;
}
