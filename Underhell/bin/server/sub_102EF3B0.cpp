void __thiscall sub_102EF3B0(int *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  float v5; // [esp+0h] [ebp-Ch]

  v2 = sub_10262560(this[6]);
  if ( v2 && (v3 = v2[3]) != 0 && (v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3)) != 0 )
  {
    sub_102EF1C0((int)this, v4);
  }
  else
  {
    v5 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0(this, v5, 0);
  }
}
