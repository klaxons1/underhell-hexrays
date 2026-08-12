int __thiscall sub_101A4F30(_DWORD *this, int *a2)
{
  int v3; // eax
  int result; // eax

  v3 = *a2;
  a2[27] = this[969];
  result = (*(int (__stdcall **)(_DWORD))(v3 + 876))(this[970]);
  this[641] = -1;
  return result;
}
