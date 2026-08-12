float *__thiscall sub_10087110(_DWORD *this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  int (__thiscall *v5)(int); // edx
  unsigned __int16 v6; // ax
  __int16 v8; // ax

  v3 = (float *)sub_1000ED40();
  v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 120))(this);
  *v3 = *v4;
  v3[1] = v4[1];
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 28);
  v3[2] = v4[2];
  v6 = v5(a2);
  if ( v6 == 0xFFFF )
  {
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a2 + 100))(a2, v3, 0);
    return v3;
  }
  else
  {
    v8 = *(_WORD *)(168 * v6 + this[9] + 8);
    if ( (v8 & 4) != 0 )
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 100))(a2, v3, (*((_BYTE *)this + 208) != 0) + 1);
    else
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 100))(a2, v3, (v8 & 0x10) != 0 ? 4 : 1);
    return v3;
  }
}
