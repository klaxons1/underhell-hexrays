int __thiscall sub_102043E0(void *this, int a2, _DWORD *a3, char a4)
{
  int result; // eax

  if ( !a4 )
  {
    *a3 = a3[1];
    return (*(int (__stdcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)this + 112))(*(float *)(a2 + 36), a2, a3);
  }
  return result;
}
