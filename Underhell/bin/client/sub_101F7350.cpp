float *__thiscall sub_101F7350(float *this, int a2)
{
  this[12] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 16))(dword_1047CA80);
  this[6] = pow(1.009999990463257, (double)a2 * -10.0) * this[6];
  return sub_101F7080((int)this);
}
