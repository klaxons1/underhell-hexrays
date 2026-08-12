int __thiscall sub_100BCDB0(void *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) == 1 )
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 812))(*(float *)(a2 + 8));
  else
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 812))(0.0);
}
