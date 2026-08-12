void __thiscall sub_1026AC90(float *this, int a2, float *a3)
{
  float *v4; // eax
  int v5; // eax
  int v6; // esi
  float *v7; // edi
  unsigned int v8; // esi

  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 320))(a3) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 320))(a3) )
      {
        v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 532))(a3);
        this[31] = *v4;
        this[32] = v4[1];
        this[33] = v4[2];
        sub_100DC4E0(a3, &flt_106F1CA8);
        sub_101ED560((int)a3, 0);
        (*(void (__thiscall **)(_DWORD, float *))(**((_DWORD **)this + 12) + 36))(*((_DWORD *)this + 12), a3);
        v5 = __RTDynamicCast(
               (int)a3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
               (int)&CHL2_Player `RTTI Type Descriptor',
               0);
        v6 = v5;
        if ( v5 )
        {
          if ( *(_BYTE *)(v5 + 5216) )
            sub_102E0CB0(v5);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1264))(v6) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1272))(v6);
        }
      }
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 240))(this);
    if ( v7 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v7 + 320))(v7) )
    {
      sub_100DC4E0(v7, this + 31);
      sub_101ED560((int)v7, 1);
    }
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 12) + 44))(*((_DWORD *)this + 12), a2);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 12) + 28))(*((_DWORD *)this + 12), 0);
    v8 = *((_DWORD *)this + 34);
    if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
      sub_1025FAC0(0);
    else
      sub_1025FAC0(off_1061BE18[4 * (v8 & 0xFFF) + 1]);
  }
}
