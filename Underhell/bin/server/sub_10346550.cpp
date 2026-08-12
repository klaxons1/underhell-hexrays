float *__thiscall sub_10346550(int this, float *a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // esi

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = -64.0;
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  sub_100BA7D0((int)v5, a2);
  return a2;
}
