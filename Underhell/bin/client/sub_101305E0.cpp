int __thiscall sub_101305E0(float *this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 768))(this, a2, 0);
  result = dword_10439474;
  this[73] = *(float *)(dword_10439474 + 44) + *((float *)off_103DC81C + 3);
  return result;
}
