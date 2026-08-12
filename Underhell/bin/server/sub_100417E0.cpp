float *__thiscall sub_100417E0(void *this)
{
  void *v2; // esi
  float *v3; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 112);
  memset(v2, 0, 0x70u);
  if ( v2 )
  {
    v3 = sub_10039030((float *)v2);
    (*(void (__thiscall **)(float *, void *))(*(_DWORD *)v3 + 4))(v3, this);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, void *))(MEMORY[0] + 4))(0, this);
    return 0;
  }
}
