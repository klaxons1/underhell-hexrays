void __thiscall sub_10027F00(_DWORD *this, int a2, int a3, int a4)
{
  bool v5; // zf
  int v6; // edi
  void *v7; // eax
  int v8; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // edx
  _BYTE v14[48]; // [esp+8h] [ebp-68h] BYREF
  _BYTE v15[48]; // [esp+38h] [ebp-38h] BYREF
  _DWORD *v16; // [esp+68h] [ebp-8h]
  int v17; // [esp+6Ch] [ebp-4h]
  _DWORD *v18; // [esp+78h] [ebp+8h]

  v5 = this[485] == 0;
  v16 = this;
  if ( v5 && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v6 = this[485];
  if ( v6 && *(_DWORD *)v6 )
  {
    if ( !this[311] )
    {
      v7 = (void *)sub_100DDA40(3596);
      this[311] = v7;
      if ( !v7 )
      {
        Msg("Memory allocation of RagdollInfo_t failed!\n");
        return;
      }
      memset(v7, 0, 0xE0Cu);
    }
    v8 = *(_DWORD *)v6 + *(_DWORD *)(*(_DWORD *)v6 + 160);
    *(_BYTE *)this[311] = 1;
    *(float *)(this[311] + 4) = *((float *)off_103DC81C + 3);
    *(_DWORD *)(this[311] + 8) = a2;
    if ( a2 > 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v18 = (_DWORD *)(v8 + 4);
      v17 = a2;
      do
      {
        if ( *v18 == -1 )
          v13 = a3;
        else
          v13 = *(_DWORD *)(a4 + 4) + 48 * *v18;
        sub_101F0AB0(v13, v15);
        sub_101EDC00(v15, v12 + *(_DWORD *)(a4 + 4), v14);
        sub_101F0930(v14, v10 + v16[311] + 1548, v11 + v16[311] + 12);
        v18 += 54;
        v12 += 48;
        v11 += 12;
        v10 += 16;
        --v17;
      }
      while ( v17 );
    }
  }
}
