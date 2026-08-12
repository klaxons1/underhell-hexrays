int __thiscall sub_10211110(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  float v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+4h] [ebp-1Ch]
  float v10; // [esp+8h] [ebp-18h]
  char v11; // [esp+18h] [ebp-8h]

  v11 = *((_BYTE *)this + 72);
  v10 = *((float *)this + 17);
  v9 = *((int *)this + 15);
  v8 = *((float *)this + 14);
  v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 120))(this);
  return sub_10204D30(v6, v8, v9, v10, a2, a3, a4, v11);
}
