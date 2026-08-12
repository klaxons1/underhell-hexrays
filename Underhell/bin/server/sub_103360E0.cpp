char __thiscall sub_103360E0(int this)
{
  char result; // al
  int *v3; // ecx
  void *v4; // edi
  int v5; // eax
  int v6; // edi
  float *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v12; // [esp+Ch] [ebp-4h] BYREF

  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v3 = *(int **)(this + 2796);
    *(float *)(this + 5736) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 5740) = 1;
    if ( sub_100B16F0(v3, 1) > 4 )
    {
      v4 = (void *)sub_100B1560(*(_DWORD **)(this + 2796), 0, 1);
      sub_100B1AB0(*(_DWORD **)(this + 2796), (int)v4, 0);
      (*(void (__thiscall **)(void *))(*(_DWORD *)v4 + 1548))(v4);
      v5 = __RTDynamicCast(
             (int)v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
             (int)&CNPC_Citizen `RTTI Type Descriptor',
             0);
      if ( v5 )
      {
        v6 = v5 + 4508;
        sub_100577F0(v5 + 4508, 0, 0);
        v11 = 0;
        LOBYTE(v12) = 0;
        sub_10057630(v6, &v11);
      }
      else if ( sub_10050D80(v4, (int *)&v12) )
      {
        sub_100577F0((int)v12, 0, 0);
      }
    }
    sub_100577F0(this + 4508, 0, 0);
    v11 = 0;
    LOBYTE(v12) = 0;
    sub_10057630(this + 4508, &v11);
    v7 = (float *)sub_100B1560(*(_DWORD **)(this + 2796), &v10, 1);
    if ( !v7 )
      goto LABEL_10;
    while ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v7 + 1524))(v7) )
    {
      v7 = (float *)sub_100B1630(*(_DWORD **)(this + 2796), &v10, 1);
      if ( !v7 )
        goto LABEL_10;
    }
    if ( v7 == (float *)this )
    {
LABEL_10:
      v8 = sub_10261B20();
      sub_100577F0(this + 4508, v8, 0);
      v11 = 0;
LABEL_11:
      LOBYTE(v12) = 0;
      return sub_10057630(this + 4508, &v11);
    }
    if ( v7[614] != flt_10689730 || v7[615] != flt_10689734 || v7[616] != flt_10689738 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 1544))(this, v7 + 614);
      sub_10023CB0((char *)this, 64);
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1556))(this);
    }
    result = sub_10050D80(v7, (int *)&v12);
    if ( result )
    {
      v9 = sub_10050FC0(v12);
      sub_100577F0(this + 4508, v9, 0);
      v11 = *(_DWORD *)(this + 4732);
      goto LABEL_11;
    }
  }
  return result;
}
