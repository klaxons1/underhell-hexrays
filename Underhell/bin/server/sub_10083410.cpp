int __thiscall sub_10083410(_DWORD *this, int a2)
{
  int v2; // ebx
  int *v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int8 (__thiscall *v7)(_DWORD *, int *); // edx
  _DWORD *i; // esi
  void (__thiscall *v9)(int *, _DWORD *, int); // edx
  int v11[3]; // [esp+Ch] [ebp-20h] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  _DWORD v14[3]; // [esp+20h] [ebp-Ch] BYREF

  v2 = a2;
  (*(void (__thiscall **)(int, void *, int))(*(_DWORD *)a2 + 44))(a2, &unk_104A19CC, 1);
  v4 = (int *)this[9];
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  v13 = 0;
  v5 = *v4;
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 36);
    if ( v6 == 3 || v6 == 1 )
    {
      v7 = *(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*this + 84);
      a2 = 0;
      if ( v7(this, &a2) )
      {
        if ( a2 )
        {
          for ( i = (_DWORD *)sub_100B99B0(&a2); i; i = (_DWORD *)i[11] )
            sub_10082810(v11, v12, i);
          sub_100B9C50(&a2);
        }
      }
    }
  }
  if ( (dword_106935B4 & 1) == 0 )
  {
    dword_106935B4 |= 1u;
    dword_106935B0 = (int)&CUtlVectorDataOps<CUtlVector<AI_Waypoint_t,CUtlMemory<AI_Waypoint_t,int>>,10>::`vftable';
  }
  v14[0] = v11;
  v9 = *(void (__thiscall **)(int *, _DWORD *, int))dword_106935B0;
  v14[1] = 0;
  v14[2] = 0;
  v9(&dword_106935B0, v14, v2);
  return sub_100833B0(v11);
}
