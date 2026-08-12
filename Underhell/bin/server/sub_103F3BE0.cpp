void __thiscall sub_103F3BE0(unsigned int *this, float *a2)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // esi

  v2 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( a2 )
  {
    sub_102674B0(this + 410, (int)a2);
    sub_100DC4E0(a2, &flt_106F1CA8);
    sub_101ED560((int)a2, 0);
    sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1496), v2, 0.0);
    sub_100EC4A0((int *)HIDWORD(v2), *(float *)(dword_106B31C8 + 12), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(HIDWORD(v2) + 1160) + 44))(*(_DWORD *)(HIDWORD(v2) + 1160));
    v3 = __RTDynamicCast(
           (int)a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
           (int)&CHL2_Player `RTTI Type Descriptor',
           0);
    v4 = v3;
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 5216) )
        sub_102E0CB0(v3);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1264))(v4) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1272))(v4);
    }
  }
}
