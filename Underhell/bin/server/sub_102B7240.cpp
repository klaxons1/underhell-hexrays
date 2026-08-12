void __thiscall sub_102B7240(int *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  float v5; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0(this, v5, 0);
  (*(void (__thiscall **)(int *))(*this + 728))(this);
  v2 = dword_10700AC8;
  v6 = this[290];
  v7 = fabs(sin(*(float *)(dword_106B31C8 + 12) * 4.0)) * 64.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( v3 && *v3 )
    v4 = this[275];
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  sub_100BE7D0(this, v4, v6, v7);
}
