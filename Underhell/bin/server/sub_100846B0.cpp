char __thiscall sub_100846B0(void *this, int *a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  char *v11; // eax
  char v12; // al
  int v13; // [esp-Ch] [ebp-120h]
  int v14; // [esp-8h] [ebp-11Ch]
  char Buffer[256]; // [esp+8h] [ebp-10Ch] BYREF
  int v16; // [esp+108h] [ebp-Ch]
  int v17; // [esp+10Ch] [ebp-8h]
  int v18; // [esp+110h] [ebp-4h]

  if ( !*((_BYTE *)sub_1001F570() + 24) )
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v11 = sub_1001E280(Buffer, "[Nav] %s", "Updating goal pos\n");
      sub_10029660(*((_DWORD **)this + 1), (int)v11);
    }
    if ( *((_DWORD *)this + 3) == 1 )
    {
      DevMsg("Updating goal pos while jumping!\n");
    }
    else
    {
      sub_100A60D0(a2);
      v12 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 1752))(*((_DWORD *)this + 1));
      if ( sub_10083810((int)this, v12 == 0, 0) )
      {
        (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 28))(this, 1, -1.0);
        return 1;
      }
    }
    return 0;
  }
  v3 = a2[1];
  v4 = a2[2];
  v16 = *a2;
  v17 = v3;
  v18 = v4;
  v5 = (_DWORD *)sub_10184390(48);
  if ( v5 )
  {
    v6 = v16;
    v7 = v17;
    v5[3] = 1;
    *v5 = &CMemberFunctor1<CAI_Navigator *,bool (__thiscall CAI_Navigator::*)(Vector const &),Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
    v5[2] = &CMemberFunctor1<CAI_Navigator *,bool (__thiscall CAI_Navigator::*)(Vector const &),Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
    v5[4] = sub_100846B0;
    v5[5] = 0;
    v5[6] = this;
    v5[8] = v6;
    v8 = v18;
    v5[9] = v7;
    v5[10] = v8;
  }
  else
  {
    v5 = 0;
  }
  v14 = (int)v5;
  v13 = *((_DWORD *)this + 1);
  v9 = (int *)sub_1001F570();
  sub_10035510(v9, v13, v14);
  return 1;
}
