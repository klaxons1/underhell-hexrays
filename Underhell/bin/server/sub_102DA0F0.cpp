double __thiscall sub_102DA0F0(void *this, int a2, int a3, int a4)
{
  _DWORD *v5; // edi
  double v6; // st7
  double result; // st7
  float v8; // [esp+0h] [ebp-10h]

  v5 = sub_102D9B20();
  if ( (sub_100B9D70(v5, a4) & 0x40000000) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3) )
      v6 = (double)sub_100BA130(v5, a4);
    else
      v6 = (double)sub_100BA170(v5, a4);
  }
  else
  {
    v6 = sub_1015DDD0(a2, a3, a4);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 284))(a3)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 288))(a3) )
  {
    result = (double)sub_100BA130(v5, a4);
    v8 = result;
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 312))(this, LODWORD(v8));
  }
  else
  {
    return (float)v6;
  }
  return result;
}
