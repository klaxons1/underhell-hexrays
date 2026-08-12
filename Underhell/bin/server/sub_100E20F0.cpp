int __thiscall sub_100E20F0(void *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int *v7; // ecx
  const char *v8; // eax
  int i; // edi
  int result; // eax
  int v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  byte_106C8001 = 1;
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 408))(this);
  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  sub_1012CAF0(*v2);
  if ( *((_DWORD *)this + 6) )
    sub_100EA940(0x4000000);
  v3 = *((_DWORD *)this + 24);
  if ( v3 )
  {
    v4 = sub_101679A0(v3);
    sub_101678B0(v4, 2);
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 592))(this);
  v6 = *((_DWORD *)this + 48) & 0xFFFFFFFE;
  if ( *((_DWORD *)this + 48) != v6 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 192);
    }
    *((_DWORD *)this + 48) = v6;
  }
  sub_100E0970((int)this, v5, 0, 0);
  sub_1016AF10(this);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  sub_1016B400(this, &v11);
  if ( v14 )
  {
    v8 = (const char *)*((_DWORD *)this + 23);
    if ( !v8 )
      v8 = String;
    DevMsg(2, "Warning: Deleting orphaned children of %s\n", v8);
    for ( i = v14 - 1; i >= 0; --i )
      sub_1025FAC0(*(_DWORD *)(v11 + 4 * i));
  }
  sub_101C73D0(0);
  result = v11;
  v14 = 0;
  if ( v13 >= 0 )
  {
    if ( v11 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11);
      result = 0;
      v11 = 0;
    }
    v12 = 0;
  }
  v15 = result;
  if ( v13 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
