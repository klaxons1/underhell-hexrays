int __thiscall sub_101E7A70(int this, const char *a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int result; // eax

  sub_100EEE20(this, a2);
  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  result = sub_100BD5F0(v5, "body_pitch");
  *(_DWORD *)(this + 4400) = result;
  return result;
}
