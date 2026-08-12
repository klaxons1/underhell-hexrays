int __thiscall sub_10266E00(_DWORD *this)
{
  float *v2; // eax
  float *v3; // eax

  v2 = (float *)sub_10184390(536);
  if ( v2 )
    v3 = sub_10266790(v2);
  else
    v3 = 0;
  this[373] = v3;
  return (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v3 + 252))(v3, this);
}
