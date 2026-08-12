void __thiscall sub_1008B240(int this, int a2)
{
  int v3; // eax
  size_t v4; // edi
  void *v5; // ebx

  if ( *(int *)(this + 8) < 0 )
  {
    *(_DWORD *)(this + 8) = a2;
    v3 = *(_DWORD *)(this + 4);
    if ( v3 )
    {
      v4 = 4 * v3;
      v5 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4 * v3);
      memcpy_0(v5, *(const void **)this, v4);
      *(_DWORD *)this = v5;
    }
    else
    {
      *(_DWORD *)this = 0;
    }
  }
}
