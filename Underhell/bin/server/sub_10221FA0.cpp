int __thiscall sub_10221FA0(_DWORD *this, int (__thiscall ***a2)(int))
{
  int v4; // eax
  int (__thiscall **v5)(int); // edx
  int v6; // ebx
  void (__thiscall *v7)(int *, _DWORD *, int (__thiscall ***)(int)); // eax
  int (__thiscall ***v8)(_DWORD); // ecx
  const char *v9; // eax
  int v10; // eax
  int v11; // ecx
  _DWORD v13[3]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+24h] [ebp+8h]

  v4 = (**a2)((int)a2);
  v5 = *a2;
  v6 = 0;
  v15 = v4;
  v14 = this + 14;
  ((void (__thiscall *)(int (__thiscall ***)(int), _DWORD *, int, _DWORD))v5[15])(a2, this + 14, 1, 0);
  ((void (__thiscall *)(int (__thiscall ***)(int), _DWORD *, int, _DWORD))(*a2)[15])(a2, this + 15, 1, 0);
  if ( (dword_106C3464 & 1) == 0 )
  {
    dword_106C3464 |= 1u;
    dword_106C3460 = (int)&CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::`vftable';
  }
  v13[0] = this + 16;
  v7 = *(void (__thiscall **)(int *, _DWORD *, int (__thiscall ***)(int)))(dword_106C3460 + 4);
  v13[1] = 0;
  v13[2] = 0;
  v7(&dword_106C3460, v13, a2);
  if ( (int)this[12] > 0 )
  {
    do
    {
      v8 = *(int (__thiscall ****)(_DWORD))(this[9] + 4 * v6);
      v9 = (const char *)(**v8)(v8);
      v10 = sub_10221CF0(this, v9);
      if ( v10 != -1 )
      {
        ((void (__thiscall *)(int (__thiscall ***)(int), int))(*a2)[1])(a2, v15 + v10);
        v11 = *(_DWORD *)(this[9] + 4 * v6);
        (*(void (__thiscall **)(int, int (__thiscall ***)(int)))(*(_DWORD *)v11 + 24))(v11, a2);
      }
      ++v6;
    }
    while ( v6 < this[12] );
  }
  return ((int (__thiscall *)(int (__thiscall ***)(int), int))(*a2)[1])(a2, v15 + *v14);
}
