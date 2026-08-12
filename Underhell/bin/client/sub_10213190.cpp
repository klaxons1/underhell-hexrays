_OWORD *__thiscall sub_10213190(_DWORD *this, _OWORD *a2, _DWORD *a3, __int16 a4)
{
  __int16 v4; // ax
  int v5; // edx
  __int16 v6; // cx
  _OWORD *result; // eax
  __int128 v8; // [esp+0h] [ebp-10h]

  v4 = a4 + this[1656];
  *(float *)&v8 = flt_103EE7C0[(v4 + (unsigned __int16)*a3) & 0xFFF];
  *((float *)&v8 + 1) = flt_103EE7C0[(v4 + (unsigned __int16)a3[1]) & 0xFFF];
  v5 = (v4 + (unsigned __int16)a3[2]) & 0xFFF;
  v6 = v4 + a3[3];
  result = a2;
  *((float *)&v8 + 2) = flt_103EE7C0[v5];
  *((float *)&v8 + 3) = flt_103EE7C0[v6 & 0xFFF];
  *a2 = v8;
  return result;
}
