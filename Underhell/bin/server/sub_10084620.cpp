char __thiscall sub_10084620(_DWORD *this, int a2, float *a3)
{
  int v4; // esi
  char v5; // al

  (*(void (__thiscall **)(_DWORD *))(*this + 44))(this);
  v4 = this[9];
  *(float *)(v4 + 20) = *a3;
  *(float *)(v4 + 24) = a3[1];
  *(float *)(v4 + 28) = a3[2];
  if ( a2 )
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(v4 + 16) = -1;
  sub_100B9C50(v4);
  *(_DWORD *)(v4 + 44) = -1;
  v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1752))(this[1]);
  return sub_10083810((int)this, v5 == 0, 0);
}
