char __thiscall sub_10028730(_DWORD *this, int a2, float *a3, float *a4)
{
  _DWORD *v5; // esi
  int v6; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v5 = (_DWORD *)this[485];
  if ( v5 && *v5 && a2 >= 0 && a2 < sub_10126D90(v5) )
  {
    v6 = sub_10127A80(a2);
    *a3 = *(float *)(v6 + 8);
    *a4 = *(float *)(v6 + 12);
    return 1;
  }
  else
  {
    *a3 = 0.0;
    *a4 = 1.0;
    return 0;
  }
}
