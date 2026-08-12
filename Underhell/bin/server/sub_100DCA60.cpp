int __stdcall sub_100DCA60(_DWORD **a1, int *a2)
{
  _DWORD **v2; // edi
  _DWORD *v3; // ebx
  int *v4; // esi
  void (__thiscall *v5)(int *, _DWORD *, int *); // eax
  void (__thiscall *v6)(int *); // eax
  _DWORD *v7; // edi
  int v8; // ebx
  int v9; // eax
  _DWORD v11[3]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD *v12; // [esp+18h] [ebp-10h]
  _DWORD *v13; // [esp+1Ch] [ebp-Ch]
  unsigned __int16 v14; // [esp+20h] [ebp-8h] BYREF
  int v15; // [esp+24h] [ebp-4h]

  v2 = a1;
  v3 = *a1;
  v12 = *a1;
  if ( (dword_10697A14 & 1) == 0 )
  {
    dword_10697A14 |= 1u;
    dword_10697A10 = (int)&CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::`vftable';
  }
  v4 = a2;
  v11[1] = 0;
  v11[2] = 0;
  v5 = *(void (__thiscall **)(int *, _DWORD *, int *))(dword_10697A10 + 4);
  v11[0] = v3;
  v5(&dword_10697A10, v11, a2);
  v6 = *(void (__thiscall **)(int *))(*v4 + 20);
  v13 = v2[1];
  v6(v4);
  v15 = 0;
  if ( (int)v3[3] > 0 )
  {
    a2 = 0;
    do
    {
      (*(void (__thiscall **)(int *, char *, int, _DWORD))(*v4 + 64))(v4, (char *)&a1 + 3, 1, 0);
      v7 = (int *)((char *)a2 + *v3);
      if ( HIBYTE(a1) )
      {
        (*(void (__thiscall **)(int *, unsigned __int16 *))(*v4 + 36))(v4, &v14);
        v8 = *v4;
        v9 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*v13 + 44))(v13, v7, 1, v14);
        (*(void (__thiscall **)(int *, int))(v8 + 116))(v4, v9);
        v3 = v12;
      }
      else
      {
        *v7 = 0;
      }
      a2 += 4;
      ++v15;
    }
    while ( v15 < v3[3] );
  }
  return (*(int (__thiscall **)(int *))(*v4 + 32))(v4);
}
