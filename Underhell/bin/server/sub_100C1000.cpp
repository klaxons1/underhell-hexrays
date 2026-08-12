int __stdcall sub_100C1000(_DWORD **a1, int a2)
{
  int (__stdcall *v2)(char *, int); // eax

  v2 = *(int (__stdcall **)(char *, int))(*(_DWORD *)a2 + 60);
  HIBYTE(a1) = **a1 != 0;
  return v2((char *)&a1 + 3, 1);
}
