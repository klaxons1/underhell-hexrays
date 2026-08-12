int __thiscall sub_10102E30(float *this, float a2)
{
  int (__stdcall *v2)(_DWORD); // edx
  float v4; // [esp+0h] [ebp-4h]

  v2 = *(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 408);
  this[494] = *((float *)off_103DC81C + 3) + a2 + 1.0;
  v4 = a2 + *((float *)off_103DC81C + 3);
  return v2(LODWORD(v4));
}
