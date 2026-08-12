void __thiscall sub_1022E720(int this, int a2)
{
  size_t v3; // edi
  void *v4; // ebx

  if ( *(int *)(this + 8) < 0 )
  {
    v3 = *(_DWORD *)(this + 4);
    *(_DWORD *)(this + 8) = a2;
    if ( v3 )
    {
      v4 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, v3);
      memcpy_0(v4, *(const void **)this, v3);
      *(_DWORD *)this = v4;
    }
    else
    {
      *(_DWORD *)this = 0;
    }
  }
}
