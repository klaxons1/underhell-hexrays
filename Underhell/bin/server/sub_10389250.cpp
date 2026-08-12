float *__thiscall sub_10389250(void *this, float *a2, float *a3)
{
  int v3; // eax
  float *v4; // eax

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
  *a2 = *v4 - *a3;
  a2[1] = v4[1] - a3[1];
  a2[2] = v4[2] - a3[2];
  off_10689714();
  return a2;
}
