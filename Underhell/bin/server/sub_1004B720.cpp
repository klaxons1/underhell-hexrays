int __thiscall sub_1004B720(void *this, int *a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = *a2;
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 276))(this);
  return (*(int (__thiscall **)(int *, void *, int))(v3 + 20))(a2, this, v4);
}
