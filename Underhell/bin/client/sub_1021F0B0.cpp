int __thiscall sub_1021F0B0(void *this)
{
  int v2; // edi

  v2 = 1 << (*(int (__thiscall **)(void *))(*(_DWORD *)this + 124))(this);
  return v2 | (1 << (*(int (__thiscall **)(void *))(*(_DWORD *)this + 120))(this)) | 0x100;
}
