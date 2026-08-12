int __thiscall sub_102A6BB0(_DWORD **this, _DWORD *a2)
{
  float v4; // [esp+0h] [ebp-8h]

  if ( *a2 != dword_106E7F54 )
    return sub_1004B710(this);
  v4 = atof((const char *)a2[1]) * 0.75;
  return sub_1029EC50(this, v4);
}
