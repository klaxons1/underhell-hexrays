int __thiscall sub_100BCE20(void *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) == 1 )
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 820))(*(float *)(a2 + 8));
  else
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 820))(0.0);
}
