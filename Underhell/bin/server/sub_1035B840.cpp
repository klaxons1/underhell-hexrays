int __thiscall sub_1035B840(int this)
{
  int result; // eax

  sub_101AA280(this);
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 0x20000);
  *(float *)(this + 2896) = 2048.0;
  result = sub_1001FBB0((_DWORD *)this, 2048.0);
  *(_DWORD *)(this + 3780) = 0;
  if ( *(int *)(this + 3776) >= 0 )
  {
    result = *(_DWORD *)(this + 3768);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 3768));
      *(_DWORD *)(this + 3768) = 0;
    }
    *(_DWORD *)(this + 3772) = 0;
  }
  *(_DWORD *)(this + 3784) = *(_DWORD *)(this + 3768);
  *(_DWORD *)(this + 3760) = -1;
  *(_WORD *)(this + 3788) = 0;
  return result;
}
