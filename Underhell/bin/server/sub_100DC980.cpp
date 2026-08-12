int __stdcall sub_100DC980(_DWORD **a1, int *a2)
{
  _DWORD **v2; // edi
  _DWORD *v3; // ebx
  int *v4; // esi
  void (__thiscall *v5)(int *, _DWORD *, int *); // eax
  void (__thiscall *v6)(int *); // eax
  _DWORD *v7; // edi
  void (__thiscall *v8)(int *, char *, int); // edx
  int v9; // ebx
  int v10; // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v13; // [esp+18h] [ebp-Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v2 = a1;
  v3 = *a1;
  v13 = *a1;
  if ( (dword_10697A14 & 1) == 0 )
  {
    dword_10697A14 |= 1u;
    dword_10697A10 = (int)&CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::`vftable';
  }
  v4 = a2;
  v12[1] = 0;
  v12[2] = 0;
  v5 = *(void (__thiscall **)(int *, _DWORD *, int *))dword_10697A10;
  v12[0] = v3;
  v5(&dword_10697A10, v12, a2);
  v6 = *(void (__thiscall **)(int *))(*v4 + 28);
  v14 = v2[1];
  v6(v4);
  v15 = 0;
  if ( (int)v3[3] > 0 )
  {
    a2 = 0;
    do
    {
      v7 = (int *)((char *)a2 + *v3);
      v8 = *(void (__thiscall **)(int *, char *, int))(*v4 + 60);
      HIBYTE(a1) = *v7 != 0;
      v8(v4, (char *)&a1 + 3, 1);
      if ( HIBYTE(a1) )
      {
        v9 = *v4;
        v10 = (*(int (__thiscall **)(_DWORD *, const char *, _DWORD *, int))(*v14 + 44))(v14, "m_pfnThink", v7, 1);
        (*(void (__thiscall **)(int *, int))(v9 + 160))(v4, v10);
        v3 = v13;
      }
      a2 += 4;
      ++v15;
    }
    while ( v15 < v3[3] );
  }
  return (*(int (__thiscall **)(int *))(*v4 + 36))(v4);
}
