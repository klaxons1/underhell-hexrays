void __thiscall sub_101D5340(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  __int16 v10; // cx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  int v21; // [esp+8h] [ebp-4h]
  char v22; // [esp+23h] [ebp+17h]

  if ( a5 == 1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
    v5 = *(_DWORD *)(a3 + 16);
    v21 = -1;
    v22 = 0;
    if ( v5 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 4) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a3 + 4) & 0xFFF) + 1];
      if ( v7[24] )
        v8 = (*(int (__thiscall **)(_DWORD *))(*v7 + 24))(v7);
      else
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v5);
      v21 = v8;
      if ( v8 == -1 )
        goto LABEL_34;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0, v8);
      if ( !v9 )
        goto LABEL_34;
      v10 = *(_WORD *)v9;
      if ( (*(_WORD *)v9 & 0x7FFF) == 0 )
        goto LABEL_34;
      v11 = *(_DWORD *)(v9 + 4);
      if ( !v11 )
        goto LABEL_34;
      v12 = *(_DWORD *)(a3 + 48);
      if ( v12 >= (v10 & 0x7FFF) )
        goto LABEL_34;
      v13 = *(_DWORD *)(v11 + 4 * v12);
      goto LABEL_25;
    }
    if ( *(float *)(a3 + 20) != flt_106F1CA8
      || *(float *)(a3 + 24) != flt_106F1CAC
      || *(float *)(a3 + 28) != flt_106F1CB0
      || sub_1001F080((float *)(a3 + 32), &flt_106F1CA8) )
    {
      v13 = sub_101DA970(a3 + 20, a3 + 32);
      v22 = 1;
LABEL_25:
      if ( v13 )
      {
        v15 = *(_DWORD **)(a4 + 52);
        if ( *v15 )
        {
          DevMsg(
            "Physics object pointer unexpectedly non-null before restore. Should be creating physics object in CreatePhysics()?\n");
        }
        else
        {
          sub_101D50C0(a2, (_DWORD *)a3, (int)v15, v13);
          v16 = *(int **)(a4 + 52);
          if ( *v16 )
          {
            v17 = *v16;
            v18 = this[1];
            v19 = this + 1;
            if ( v22 )
              (*(void (__thiscall **)(_DWORD *, int, int))(v18 + 4))(v19, v17, v13);
            else
              (*(void (__thiscall **)(_DWORD *, int, int))(v18 + 8))(v19, v17, v21);
          }
          else
          {
            DevMsg("Failed to restore physics object\n");
          }
        }
        goto LABEL_30;
      }
LABEL_34:
      DevMsg("Failed to reestablish collision model for object\n");
LABEL_30:
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
      return;
    }
    if ( 0.0 == *(float *)(a3 + 44) )
      goto LABEL_34;
    v14 = *(_DWORD **)(a4 + 52);
    if ( !*v14 )
      sub_101D50C0(a2, (_DWORD *)a3, (int)v14, 0);
  }
  else
  {
    DevMsg("Don't know how to reconsitite models for physobj array \n");
  }
}
